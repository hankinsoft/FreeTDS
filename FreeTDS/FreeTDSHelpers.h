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

+ (void) setLogin: (void *) login
      enableTLSv1: (BOOL) enableTLSv1;

/// Verify the server certificate in every TLS handshake of this login. The
/// chain must be trusted by the platform (SecTrust: system roots, keychain and
/// configuration profile roots, the user's trust settings) and the certificate
/// must match hostName (nil or empty: the host FreeTDS connects to). NO, the
/// default, accepts any certificate. A routed login (Azure SQL, Fabric) checks
/// the routed host instead of hostName.
+ (void) setLogin: (void *) login
verifyServerCertificate: (BOOL) verifyServerCertificate
         hostName: (nullable NSString*) hostName;

/// Why certificate verification failed in the last TLS handshake on the calling
/// thread (dbopen runs the login on it), or nil if it did not fail.
+ (nullable NSString*) lastCertificateVerificationFailure;

/// Forgets the failure above; call before dbopen.
+ (void) clearCertificateVerificationFailure;

+ (void) setLogin: (void *) login
   updatePassword: (NSString*) newPassword;

+ (NSString*) getProductName: (void*) process;

@end

NS_ASSUME_NONNULL_END
