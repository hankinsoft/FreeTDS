//
//  cryptohelper.m
//  FreeTDS
//
//  Created by Kyle Hankinson on 2017-01-05.
//
//

// Added as a suggestion from:
// http://stackoverflow.com/questions/29390112/libcrypto-a-symbols-not-found-for-architecture-i386

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <fnmatch.h>

FILE *fopen$UNIX2003( const char *filename, const char *mode )
{
    return fopen(filename, mode);
}

int fputs$UNIX2003(const char *res1, FILE *res2){
    return fputs(res1,res2);
}

int nanosleep$UNIX2003(int val){
    return usleep(val);
}

char* strerror$UNIX2003(int errornum){
    return strerror(errornum);
}

double strtod$UNIX2003(const char *nptr, char **endptr){
    return strtod(nptr, endptr);
}

size_t fwrite$UNIX2003( const void *a, size_t b, size_t c, FILE *d )
{
    return fwrite(a, b, c, d);
}

DIR * opendir$INODE64( char * dirName )
{
    return opendir( dirName );
}

struct dirent * readdir$INODE64( DIR * dir )
{
    return readdir( dir );
}
