//
//  FreeTDSHelpers.m
//  FreeTDSKit
//
//  Created by Kyle Hankinson on 2020-07-02.
//

#import "FreeTDSHelpers.h"
#import <openssl/opensslv.h>

#include <config.h>

#include <stdarg.h>
#include <stdio.h>
#include <assert.h>

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif /* HAVE_STDLIB_H */

#if HAVE_ERRNO_H
# include <errno.h>
#endif /* HAVE_ERRNO_H */

#include <freetds/utils.h>
#include <freetds/tds.h>
#include <freetds/convert.h>
#include <sybdb.h>
#include <syberror.h>
#include <dblib.h>

@implementation FreeTDSHelpers

+ (NSString*) opensslVersion
{
    return [NSString stringWithFormat: @"%s", OPENSSL_VERSION_TEXT];
} // End of opensslVersion

+ (int) dbportforinstance: (const char *) host
             instanceName: (const char *) instanceName
{
    struct addrinfo * addrInfo = NULL;

    if (tds_lookup_host_set(host, &addrInfo) < 0)
    {
        NSLog(@"Found host entry %s however name resolution failed. \n", host);
        return 0;
    }

    return tds7_get_instance_port(addrInfo, instanceName);
} // End of dbportforinstance

+ (void) setLogin: (LOGINREC *) login
          ciphers: (NSString*) ciphers
{
    const char * pCiphers = ciphers.UTF8String;
    tds_dstr_copy(&login->tds_login->openssl_ciphers, pCiphers);
} // End of setLogin:ciphers:

@end
