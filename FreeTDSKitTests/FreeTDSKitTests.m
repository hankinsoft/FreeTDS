//
//  FreeTDSKitTests.m
//  FreeTDSKitTests
//
//  Created by Kyle Hankinson on 2022-07-04.
//

#import <XCTest/XCTest.h>
@import FreeTDSKit;

@interface FreeTDSKitTests : XCTestCase

@end

@implementation FreeTDSKitTests

- (void) testConnect
{
    DBPROCESS                   * dbProc;

    LOGINREC * login = dblogin();

    DBSETLCHARSET(login, "UTF-8");
    DBSETLPWD(login,  [@"" UTF8String]);
    DBSETLUSER(login, [@"" UTF8String]);
    DBSETLSECURE(login);
    DBSETLAPP(login,  "SQLPro");
    DBSETLVERSION(login, DBVERSION_74);

    [FreeTDSHelpers setLogin: login
                     ciphers: @"ALL"];
/*
    [FreeTDSHelpers setLogin: login
             encryptionLevel: mssqlDBC.encryptionLevel];

    [FreeTDSHelpers setLogin: login
                 enableTLSv1: mssqlDBC.enableTLSv1];

    // If we have a newPassword, then set it.
    if(updatedPassword.length)
    {
        [FreeTDSHelpers setLogin: login
                  updatePassword: updatedPassword];
    } // End of we have an updatedUserPassword
*/

    DBSETLDBNAME(login, "");

    dbProc = dbopen(login, "");

    if(NULL == dbProc)
    {
        NSLog(@"NO proc");
    }
}

@end
