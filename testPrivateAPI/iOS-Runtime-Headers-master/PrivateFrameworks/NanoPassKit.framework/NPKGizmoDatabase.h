/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKGizmoDatabase : NSObject {
    struct sqlite3_stmt { } * _currentEphemeralTransactionIdentifierStatement;
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _dbQueue;
    struct sqlite3_stmt { } * _deleteEphemeralTransactionByPassUniqueIDStatement;
    struct sqlite3_stmt { } * _deleteStatement;
    struct sqlite3_stmt { } * _deleteTransactionsForPassStatement;
    int  _externallyChangedBroadcasts;
    struct sqlite3_stmt { } * _insertDiffStatement;
    struct sqlite3_stmt { } * _insertEphemeralTransactionStatement;
    struct sqlite3_stmt { } * _insertStatement;
    struct sqlite3_stmt { } * _insertTransactionStatement;
    BOOL  _isInTransaction;
    NSArray * _libraryHashes;
    NSMutableDictionary * _manifest;
    BOOL  _needsMoreLocalNotifyDatabaseChanged;
    BOOL  _passDBIsAvailable;
    NSMutableArray * _passDescriptions;
    struct sqlite3_stmt { } * _removeTransactionStatement;
    struct sqlite3_stmt { } * _selectDeletePendingStatement;
    struct sqlite3_stmt { } * _selectFelicaTransitAppletStateForPassStatement;
    struct sqlite3_stmt { } * _selectLastAddValueAmountForPassStatement;
    struct sqlite3_stmt { } * _selectPassDataStatement;
    struct sqlite3_stmt { } * _selectPassDiffStatement;
    struct sqlite3_stmt { } * _selectPassUniqueIDAsssociateToTransactionWithIdentifierStatement;
    struct sqlite3_stmt { } * _selectPendingAddValueDateForPassStatement;
    struct sqlite3_stmt { } * _selectPreferredAIDStatement;
    struct sqlite3_stmt { } * _selectTransactionWithIdentifierStatement;
    struct sqlite3_stmt { } * _selectTransactionsStatement;
    struct sqlite3_stmt { } * _selectTransactionsStatementWithSource;
    struct sqlite3_stmt { } * _selectTransactionsStatementWithoutSource;
    BOOL  _sendingLocalNotifyDatabaseChanged;
    struct sqlite3_stmt { } * _trimTransactionsForPassStatement;
    struct sqlite3_stmt { } * _updateDeletePendingStatment;
    struct sqlite3_stmt { } * _updateFelicaTransitAppletStateForPassStatement;
    struct sqlite3_stmt { } * _updateLastAddValueAmountForPassStatement;
    struct sqlite3_stmt { } * _updatePendingAddValueDateForPassStatement;
    struct sqlite3_stmt { } * _updatePreferredAIDStatement;
}

@property (readonly) struct sqlite3_stmt { }*currentEphemeralTransactionIdentifierStatement;
@property (readonly) struct sqlite3 { }*database;
@property (readonly) struct sqlite3_stmt { }*deleteEphemeralTransactionByPassUniqueIDStatement;
@property (readonly) struct sqlite3_stmt { }*deleteStatement;
@property (readonly) struct sqlite3_stmt { }*deleteTransactionsForPassStatement;
@property (readonly) struct sqlite3_stmt { }*insertDiffStatement;
@property (readonly) struct sqlite3_stmt { }*insertEphemeralTransactionStatement;
@property (readonly) struct sqlite3_stmt { }*insertStatement;
@property (readonly) NSData *libraryHash;
@property (readonly) NSDictionary *manifestHashes;
@property (nonatomic, readonly) unsigned int numberOfPasses;
@property (nonatomic) BOOL passDBIsAvailable;
@property (readonly) NSArray *passDescriptions;
@property (readonly) struct sqlite3_stmt { }*selectFelicaTransitAppletStateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*selectLastAddValueAmountForPassStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDataStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDiffStatement;
@property (readonly) struct sqlite3_stmt { }*selectPendingAddValueDateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*selectPreferredAIDStatement;
@property (readonly) struct sqlite3_stmt { }*selectTransactionWithIdentifierStatement;
@property (readonly) struct sqlite3_stmt { }*trimTransactionsForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updateDeletePendingStatement;
@property (readonly) struct sqlite3_stmt { }*updateFelicaTransitAppletStateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updateLastAddValueAmountForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updatePendingAddValueDateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updatePreferredAIDStatement;

+ (id)_migrationDataSource;
+ (id)_migrationDelegateQueue;
+ (unsigned int)latestWatchOSMajorVersion;
+ (int)maxDatabaseVersion;
+ (void)setMigrationDataSource:(id)arg1;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (void)_attemptDatabaseOpen;
- (id)_currentEphemeralTransactionIdentifierForPassWithUniqueID:(id)arg1;
- (int)_databaseVersionExists:(BOOL*)arg1 valid:(BOOL*)arg2;
- (id)_decodeObjectOfClass:(Class)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_decodeObjectOfClasses:(id)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (void)_enumerateAllPassesForMigration:(id /* block */)arg1;
- (BOOL)_executeSQL:(id)arg1;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(id /* block */)arg2;
- (id)_felicaTransitAppletStateForPassWithUniqueIDLocked:(id)arg1;
- (BOOL)_getDeletePendingForUniqueID:(id)arg1;
- (id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id*)arg2;
- (void)_handleDatabaseChangedExternally;
- (void)_handleFirstUnlock;
- (void)_handleHasMigrationDataSource;
- (void)_insertDatabaseVersionRow:(int)arg1;
- (id)_lastAddValueAmountForPassWithUniqueIDLocked:(id)arg1;
- (id)_libraryHashLockedForWatchOSMajorVersion:(unsigned int)arg1;
- (void)_loadInitialManifestLocked;
- (BOOL)_migrateDatabase:(id /* block */)arg1;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(BOOL)arg1;
- (void)_notifyDatabaseChangedWithNoop:(BOOL)arg1 firstUnlock:(BOOL)arg2;
- (void)_notifyForFirstUnlock;
- (BOOL)_passDBIsAvailableLocked;
- (id)_passForUniqueIDLocked:(id)arg1;
- (id)_passUniqueIDAssociateToTransactionWithIdentifier:(id)arg1;
- (id)_pendingAddValueDateForPassWithUniqueIDLocked:(id)arg1;
- (void)_performTransactionWithBlock:(id /* block */)arg1;
- (BOOL)_preconditionsMetForDatabaseOpen;
- (BOOL)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_removeTransactionWithIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_savePassLocked:(id)arg1 wasUpdate:(BOOL*)arg2;
- (void)_saveTransactionLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setCurrentEphemeralTransactionIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setFelicaTransitAppletStateLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setLastAddValueAmountLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setPendingAddValueDateLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_transactionWithIdentifierLocked:(id)arg1;
- (id)_transactionsForUniqueIDLocked:(id)arg1 withTransactionSource:(unsigned int)arg2 withBackingData:(unsigned int)arg3 limit:(unsigned int)arg4;
- (void)_trimTransactionsForPassWithUniqueIDLocked:(id)arg1 withPaymentCredentialType:(int)arg2;
- (BOOL)_updateAvailableActionsDuringMigration:(id)arg1;
- (BOOL)_updateCompleteHashesDuringMigration:(id)arg1;
- (void)_updateDatabaseVersionRow:(int)arg1;
- (BOOL)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1;
- (BOOL)_updateDevicePaymentApplicationsDuringMigration:(id)arg1;
- (BOOL)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1;
- (BOOL)_updateEncodedPaymentPassDuringMigration:(id)arg1;
- (BOOL)_updateFrontAndBackFieldBucketsDuringMigration:(id)arg1;
- (BOOL)_updateHasStoredValueDuringMigration:(id)arg1;
- (BOOL)_updateHasUserSelectableContactlessPaymentApplications:(id)arg1;
- (BOOL)_updateIngestedDatesDuringMigration:(id)arg1;
- (BOOL)_updateLocalizedDescriptionDuringMigration:(id)arg1;
- (BOOL)_updateNFCPayloadDuringMigration:(id)arg1;
- (BOOL)_updateOrganizationNamesDuringMigration:(id)arg1;
- (BOOL)_updatePrimaryContactlessAndInAppPaymentApplicationsDuringMigration:(id)arg1;
- (BOOL)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1;
- (BOOL)_updateSettingsDuringMigration:(id)arg1;
- (id)currentEphemeralTransactionIdentifierForPassWithUniqueID:(id)arg1;
- (struct sqlite3_stmt { }*)currentEphemeralTransactionIdentifierStatement;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (struct sqlite3_stmt { }*)deleteEphemeralTransactionByPassUniqueIDStatement;
- (struct sqlite3_stmt { }*)deleteStatement;
- (struct sqlite3_stmt { }*)deleteTransactionsForPassStatement;
- (id)diffForUniqueID:(id)arg1;
- (void)enumerateAllPassesAndDescriptionsWithBlock:(id /* block */)arg1;
- (void)enumerateAllPassesWithBlock:(id /* block */)arg1;
- (id)felicaTransitAppletStateForPassWithUniqueID:(id)arg1;
- (id)filteredPassesUsingPassDescriptionPredicate:(id)arg1;
- (BOOL)hasPassesMatchingPassDescriptionPredicate:(id)arg1;
- (id)init;
- (struct sqlite3_stmt { }*)insertDiffStatement;
- (struct sqlite3_stmt { }*)insertEphemeralTransactionStatement;
- (struct sqlite3_stmt { }*)insertStatement;
- (struct sqlite3_stmt { }*)insertTransactionStatement;
- (id)lastAddValueAmountForPassWithUniqueID:(id)arg1;
- (id)libraryHash;
- (id)libraryHashForWatchOSMajorVersion:(unsigned int)arg1;
- (id)manifestHashes;
- (id)manifestHashesForWatchOSMajorVersion:(unsigned int)arg1;
- (unsigned int)numberOfPasses;
- (BOOL)passDBIsAvailable;
- (id)passDescriptions;
- (id)passForUniqueID:(id)arg1;
- (id)passUniqueIDAssociateToTransactionWithIdentifier:(id)arg1;
- (id)pendingAddValueDateForPassWithUniqueID:(id)arg1;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (id)rebuildDatabaseWithPasses:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (struct sqlite3_stmt { }*)removeTransactionStatement;
- (void)removeTransactionWithIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id /* block */)restoreBlockForVolatilePassData;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1;
- (void)saveTransaction:(id)arg1 forPassWithUniqueID:(id)arg2 withPaymentCredentialType:(int)arg3;
- (struct sqlite3_stmt { }*)selectDeletePendingStatement;
- (struct sqlite3_stmt { }*)selectFelicaTransitAppletStateForPassStatement;
- (struct sqlite3_stmt { }*)selectLastAddValueAmountForPassStatement;
- (struct sqlite3_stmt { }*)selectPassDataStatement;
- (struct sqlite3_stmt { }*)selectPassDiffStatement;
- (struct sqlite3_stmt { }*)selectPassUniqueIDAsssociateToTransactionWithIdentifierStatement;
- (struct sqlite3_stmt { }*)selectPendingAddValueDateForPassStatement;
- (struct sqlite3_stmt { }*)selectPreferredAIDStatement;
- (struct sqlite3_stmt { }*)selectTransactionWithIdentifierStatement;
- (struct sqlite3_stmt { }*)selectTransactionsStatementWithTransactionSource:(unsigned int)arg1;
- (void)setCurrentEphemeralTransactionIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setDeletePending:(BOOL)arg1 forUniqueID:(id)arg2;
- (void)setFelicaTransitAppletState:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setLastAddValueAmount:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setPassDBIsAvailable:(BOOL)arg1;
- (void)setPendingAddValueDate:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (id)transactionWithIdentifier:(id)arg1;
- (id)transactionsForPassWithUniqueID:(id)arg1 withTransactionSource:(unsigned int)arg2 withBackingData:(unsigned int)arg3 limit:(unsigned int)arg4;
- (struct sqlite3_stmt { }*)trimTransactionsForPassStatement;
- (struct sqlite3_stmt { }*)updateDeletePendingStatement;
- (struct sqlite3_stmt { }*)updateFelicaTransitAppletStateForPassStatement;
- (struct sqlite3_stmt { }*)updateLastAddValueAmountForPassStatement;
- (struct sqlite3_stmt { }*)updatePendingAddValueDateForPassStatement;
- (struct sqlite3_stmt { }*)updatePreferredAIDStatement;

@end