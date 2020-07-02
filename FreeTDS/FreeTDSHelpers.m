//
//  FreeTDSHelpers.m
//  FreeTDSKit
//
//  Created by Kyle Hankinson on 2020-07-02.
//

#import "FreeTDSHelpers.h"
#import <openssl/opensslv.h>

@implementation FreeTDSHelpers

+ (NSString*) opensslVersion
{
    return [NSString stringWithFormat: @"%s", OPENSSL_VERSION_TEXT];
} // End of

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

@end
