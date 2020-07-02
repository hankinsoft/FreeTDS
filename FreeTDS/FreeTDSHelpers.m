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

@end
