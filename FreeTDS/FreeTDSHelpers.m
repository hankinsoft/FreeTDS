//
//  FreeTDSHelpers.m
//  FreeTDSKit
//
//  Created by Kyle Hankinson on 2020-07-02.
//

#import <FreeTDSKit/FreeTDSHelpers.h>
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

    int port = tds7_get_instance_port(addrInfo, instanceName);
    if(addrInfo)
    {
        freeaddrinfo(addrInfo);
    } // End of need to free addrInfo

    return port;
} // End of dbportforinstance

+ (void) setLogin: (LOGINREC *) login
          ciphers: (NSString*) ciphers
{
    const char * pCiphers = ciphers.UTF8String;
    tds_dstr_copy(&login->tds_login->openssl_ciphers, pCiphers);
} // End of setLogin:ciphers:

+ (void) setLogin: (LOGINREC *) login
  encryptionLevel: (NSUInteger) encryptionLevel
{
    login->tds_login->encryption_level = encryptionLevel;
}

+ (void) setLogin: (LOGINREC *) login
      enableTLSv1: (BOOL) enableTLSv1
{
    login->tds_login->enable_tls_v1 = enableTLSv1;
}

+ (void) setLogin: (LOGINREC *) login
   updatePassword: (NSString*) newPassword
{
    // Set our password options
    login->tds_login->use_new_password = 1;

    const char * cString = newPassword.UTF8String;

    // Zero and set
    tds_dstr_zero(&login->tds_login->new_password);
    tds_dstr_copy(&login->tds_login->new_password, cString);
} // End of setLogin:updatePassword:

@end
