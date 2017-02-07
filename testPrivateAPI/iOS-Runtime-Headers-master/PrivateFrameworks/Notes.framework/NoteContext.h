/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteContext : NSObject <ICLegacyContext> {
    AccountUtilities * _accountUtilities;
    BOOL  _hasPriorityInSaveConflicts;
    BOOL  _inMigrator;
    BOOL  _indexInBatches;
    BOOL  _isMainContext;
    NoteAccountObject * _localAccount;
    NoteStoreObject * _localStore;
    BOOL  _logChanges;
    NSManagedObjectContext * _managedObjectContext;
    NSNumber * _nextId;
    NSManagedObjectContext * _nextIdContext;
    CPExclusiveLock * _nextIdLock;
    NSMutableDictionary * _notePropertyObjectsRealized;
    unsigned int  _notificationCount;
    CPExclusiveLock * _objectCreationLock;
    BOOL  _usePrivateQueue;
}

@property (nonatomic, retain) AccountUtilities *accountUtilities;
@property (nonatomic) BOOL isMainContext;
@property (nonatomic, readonly, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) BOOL usePrivateQueue;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)allVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 context:(id)arg3;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 context:(id)arg3 fetchLimit:(unsigned int)arg4;
+ (void)clearTestsNotesRootPath;
+ (BOOL)databaseIsCorrupt:(id)arg1;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;
+ (id)generateGUID;
+ (id)managedObjectModel;
+ (id)newFetchRequestForNotes;
+ (id)newLegacyContext;
+ (id)newManagedObjectContext;
+ (id)pathForIndex;
+ (id)pathForPersistentStore;
+ (id)persistentStoreCoordinator;
+ (void)removeConflictingSqliteAndIdxFiles;
+ (void)removeSqliteAndIdxFiles;
+ (id)searchIndexerDataSource;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (BOOL)shouldLogIndexing;
+ (id)storeOptions;
+ (id)urlForPersistentStore;
+ (id)visibleNotesPredicate;

- (void).cxx_destruct;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (id)accountForAccountId:(id)arg1;
- (id)accountUtilities;
- (id)allAccounts;
- (id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allNotes;
- (id)allNotesInCollection:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)allStores;
- (id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;
- (id)allVisibleNotes;
- (id)allVisibleNotesForAccountWithObjectID:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2;
- (void)batchFaultNotes:(id)arg1;
- (void)cleanUpLocks;
- (void)clearCaches;
- (id)collectionForInfo:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned int)countOfNotes;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfStores;
- (unsigned int)countOfVisibleNotes;
- (unsigned int)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (void)dealloc;
- (id)defaultStoreForNewNote;
- (BOOL)deleteAccount:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (void)deleteNote:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (BOOL)deleteStore:(id)arg1;
- (void)enableChangeLogging:(BOOL)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)faultedInStoresForAccounts:(id)arg1;
- (BOOL)forceDeleteAccount:(id)arg1;
- (void)forceSetUpUniqueObjects;
- (id)getNextIdObject;
- (void)handleMigration;
- (BOOL)hasMultipleEnabledStores;
- (id)init;
- (id)initForMainContext;
- (id)initForMigrator;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2 isMainContext:(BOOL)arg3 usePrivateQueue:(BOOL)arg4;
- (id)initWithPrivateQueue;
- (void)invalidate;
- (BOOL)isMainContext;
- (id)liveNotesNeedingBodiesPredicate;
- (id)localAccount;
- (id)localStore;
- (id)managedObjectContext;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(BOOL)arg3;
- (id)newFetchRequestForNotes;
- (id)newlyAddedAccount;
- (id)newlyAddedAttachment;
- (id)newlyAddedNote;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedStore;
- (id)nextIndex;
- (BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (id)noteForObjectID:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)propertyValueForKey:(id)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)reset;
- (void)resetNotificationCount;
- (BOOL)save:(id*)arg1;
- (BOOL)saveOutsideApp:(id*)arg1;
- (BOOL)saveSilently:(id*)arg1;
- (void)setAccountUtilities:(id)arg1;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (void)setIsMainContext:(BOOL)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (BOOL)setUpCoreDataStack;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (void)setUsePrivateQueue:(BOOL)arg1;
- (BOOL)shouldDisableLocalStore;
- (BOOL)shouldObserveDarwinNotifications;
- (void)sortNotes:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (void)tearDownCoreDataStack;
- (void)trackChanges:(id)arg1;
- (BOOL)usePrivateQueue;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNotesPredicate;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)sharedContext;

@end
