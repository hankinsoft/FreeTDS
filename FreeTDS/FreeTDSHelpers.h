//
//  FreeTDSHelpers.h
//  FreeTDSKit
//
//  Created by Kyle Hankinson on 2020-07-02.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FreeTDSHelpers : NSObject

+ (NSString*) opensslVersion;

+ (int) dbportforinstance: (const char *) host
             instanceName: (const char *) instanceName;

+ (void) setLogin: (void *) login
          ciphers: (NSString*) ciphers;

+ (void) setLogin: (void *) login
  encryptionLevel: (NSUInteger) encryptionLevel;

@end

NS_ASSUME_NONNULL_END
