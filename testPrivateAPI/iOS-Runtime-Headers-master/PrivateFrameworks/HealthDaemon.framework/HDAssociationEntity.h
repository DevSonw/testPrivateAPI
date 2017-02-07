/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationEntity : HDHealthEntity

+ (BOOL)_enumerateAssociationsWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 healthDatabase:(id)arg5 error:(id*)arg6 block:(id /* block */)arg7;
+ (id)_insertAssociationEntryWithAssociation:(id)arg1 object:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (BOOL)_insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)columnsDefinition;
+ (BOOL)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (id)deleteStatementForAssociationWithDatabase:(id)arg1;
+ (id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1;
+ (id)indices;
+ (BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 database:(id)arg4 error:(id*)arg5;
+ (BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 profile:(id)arg4 error:(id*)arg5;
+ (BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end