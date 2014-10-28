/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class <BRCAccountHandlerDelegate>, BRCAccountSession, NSObject<OS_dispatch_queue>, NSString;

@interface BRCAccountHandler : NSObject {
    BRCAccountSession *_accountSession;
    NSString *_currentAccountID;
    <BRCAccountHandlerDelegate> *_delegate;
    BOOL _hasSetMigrationComplete;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) BRCAccountSession * accountSession;
@property <BRCAccountHandlerDelegate> * delegate;

+ (void)_migrateAccountIfNecessaryForAccountID:(id)arg1;
+ (id)inSystemStoreAccountIDForUbiquityDataclass;
+ (id)inSystemStoreAccountIDWithServiceValidation:(BOOL)arg1 isServiceEnabled:(BOOL*)arg2 didCompleteFirstSyncDown:(BOOL*)arg3;
+ (id)inSystemStoreAccountIDWithServiceValidation:(BOOL)arg1;
+ (BOOL)isAccountStillUsingUbiquity;

- (void).cxx_destruct;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1;
- (void)_updateAccount;
- (void)_updateAccountToAccountID:(id)arg1;
- (void)_watchAccountChanges;
- (id)accountIDPath;
- (id)accountSession;
- (BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)destroyCurrentSessionSynchronously;
- (id)init;
- (void)jetsamCloudDocsApps;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (id)onDiskAccountID;
- (void)setDelegate:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldNotify:(BOOL)arg3;
- (BOOL)setOnDiskAccountID:(id)arg1;
- (void)startAndLoadCurrentAccountSynchronously;

@end