/*---------------------------------------------------------------------------*\
  NAME
	daemon.c - replacement daemon(3) function

  DESCRIPTION

        This source file contains a version of a BSD-style daemon(3)
        function, a function to "daemonize" the calling process.  This
        implementation is based both on the generic daemon logic defined in
        the Unix Programmer's FAQ and on the daemon_start() function in
        W. Richard Stevens' _Unix_Network_Programming_ book (Prentice-Hall,
        1990).  At the time of this writing, the Unix Programmer's FAQ is
        located at `http://www.whitefang.com/unix/faq_toc.html' (among
        other places).

  LICENSE

	This source code is released under a BSD-style. See the LICENSE
        file for details.

  Copyright (c) 2003-2015 Brian M. Clapper, bmc@clapper.org
\*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*\
                                 Includes
\*---------------------------------------------------------------------------*/

#include <config.h>

#include <stdio.h>

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif /* HAVE_STDLIB_H */

#if HAVE_ERRNO_H
#include <errno.h>
#endif /* HAVE_ERRNO_H */

#if HAVE_STRING_H
#include <string.h>
#endif /* HAVE_STRING_H */

#if HAVE_UNISTD_H
#include <unistd.h>
#endif /* HAVE_UNISTD_H */

#include <assert.h>
#include <fcntl.h>
#include <signal.h>

#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif /* HAVE_SYS_TYPES_H */

#ifdef HAVE_SYS_FILE_H
#include <sys/file.h>
#endif /* HAVE_SYS_FILE_H */

#if HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif /* HAVE_SYS_STAT_H */

#include "replacements.h"

#ifndef _WIN32

/*---------------------------------------------------------------------------*\
                              Static Routines
\*---------------------------------------------------------------------------*/

/* redirect_fds(): redirect stdin, stdout, and stderr to /dev/NULL */

static void
redirect_fds(int dev_null)
{
	dup2(dev_null, 0);
	dup2(dev_null, 1);
	dup2(dev_null, 2);
	close(dev_null);
}

static int
do_fork(void)
{
	int status = 0;

	switch (fork()) {
	case 0:
		/* This is the child that will become the daemon. */
		break;

	case -1:
		/* Fork failure. */
		status = -1;
		break;

	default:
		/* Parent: Exit. */
		_exit(0);
	}

	return status;
}

/*---------------------------------------------------------------------------*\
                              Public Routines
\*---------------------------------------------------------------------------*/

int
tds_daemon(int nochdir, int noclose)
{
	int status = 0;
	int dev_null = -1;

	if (!noclose) {
		dev_null = open("/dev/null", O_RDWR);
		if (dev_null < 0)
			return -1;
	}

	/* Fork once to go into the background. */
	if ((status = do_fork()) < 0)
		return -1;

	/* Create new session */
	if (setsid() < 0)	/* shouldn't fail */
		return -1;

	/* Fork again to ensure that daemon never reacquires a control terminal. */
	if ((status = do_fork()) < 0)
		return -1;

	/* clear any inherited umask(2) value */
	umask(0);

	/* We're there. */

	if (!nochdir) {
		/* Go to a neutral corner. */
		chdir("/");
	}

	if (!noclose)
		redirect_fds(dev_null);

	return status;
}

#endif /* _WIN32 */
