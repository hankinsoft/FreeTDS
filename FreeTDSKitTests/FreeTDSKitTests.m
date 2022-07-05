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

- (void) testSQLConnect
{
    dberrhandle(&err_handler);
    dbmsghandle(&msg_handler);

    DBPROCESS                   * dbProc;

    LOGINREC * login = dblogin();

    DBSETLCHARSET(login, "UTF-8");
    DBSETLPWD(login,  "nh{Zd?*8ZU@Y}Bb#");
    DBSETLUSER(login, "sqlproro");
    DBSETLSECURE(login);
    DBSETLAPP(login,  "SQLPro");
    DBSETLVERSION(login, DBVERSION_74);

    dbsetlbool(login, 0, DBSETNTLMV2);

    [FreeTDSHelpers setLogin: login
                     ciphers: @"ALL"];

    [FreeTDSHelpers setLogin: login
             encryptionLevel: 0];

    [FreeTDSHelpers setLogin: login
                 enableTLSv1: NO];

    DBSETLDBNAME(login, "sqlprosample");

    dbProc = dbopen(login, "sqlprosample.database.windows.net:1433");

    // Free the login
    dbloginfree(login);
    XCTAssertTrue(NULL != dbProc, @"dbProc should not be nil");
} // End of testSQLConnect

- (void) testAzureADConnect
{
    dberrhandle(&err_handler);
    dbmsghandle(&msg_handler);

    DBPROCESS                   * dbProc;

    LOGINREC * login = dblogin();

    DBSETLCHARSET(login, "UTF-8");
    DBSETLPWD(login,  "nh{Zd?*8ZU@Y}Bb#");
    DBSETLUSER(login, "freetds@kylehankinsoft.onmicrosoft.com");
    DBSETLSECURE(login);
    DBSETLAPP(login,  "SQLPro");
    DBSETLVERSION(login, DBVERSION_74);

    dbsetlbool(login, 0, DBSETNTLMV2);

    [FreeTDSHelpers setLogin: login
                     ciphers: @"ALL"];

    [FreeTDSHelpers setLogin: login
             encryptionLevel: 0];

    [FreeTDSHelpers setLogin: login
                 enableTLSv1: NO];

    DBSETLDBNAME(login, "sqlprosample");

    dbProc = dbopen(login, "sqlprosample.database.windows.net:1433");

    // Free the login
    dbloginfree(login);
    XCTAssertTrue(NULL != dbProc, @"dbProc should not be nil");
} // End of testSQLConnect

int msg_handler(DBPROCESS *dbproc,
                DBINT msgno,
                int msgstate,
                int severity,
                char *msgtext,
                char *srvname,
                char *procname,
                int line)
{
    return 0;
}

int err_handler(DBPROCESS * dbproc,
                int severity,
                int dberr,
                int oserr,
                char *dberrstr,
                char *oserrstr)
{
    return INT_CANCEL;
}

@end
