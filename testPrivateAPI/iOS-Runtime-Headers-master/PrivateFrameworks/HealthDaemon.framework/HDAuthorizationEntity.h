/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAuthorizationEntity : HDHealthEntity

+ (void)_addAuthorizationWithRow:(struct HDSQLiteRow { }*)arg1 toCodableCollection:(id)arg2;
+ (BOOL)_getAuthorizationRecordsBySourceWithDictionary:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (BOOL)_getAuthorizationRecordsByTypeWithDictionary:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (BOOL)_getAuthorizationStatusesByTypeWithDictionary:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (BOOL)_insertAuthorizationWithSourceIdentifier:(long long)arg1 dataTypeCode:(int)arg2 authorizationStatus:(int)arg3 authorizationRequest:(int)arg4 modificationDate:(double)arg5 syncProvenance:(long long)arg6 objectAnchor:(long long)arg7 database:(id)arg8 error:(id*)arg9;
+ (BOOL)_insertCodableAuthorizations:(id)arg1 sourceEntity:(id)arg2 syncProvenance:(long long)arg3 objectAnchor:(unsigned long long)arg4 database:(id)arg5 error:(id*)arg6;
+ (BOOL)_insertCodableSourceAuthorizations:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_maxObjectPersistentIDForProfile:(id)arg1 error:(id*)arg2;
+ (id)_predicateForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_predicateForSourceEntity:(id)arg1;
+ (id)_predicateForSourceEntity:(id)arg1 types:(id)arg2;
+ (id)_predicateForSourceIdentifier:(id)arg1;
+ (id)_predicateForType:(id)arg1;
+ (id)_predicateForTypes:(id)arg1;
+ (id)_propertiesForCodableAuthorization;
+ (BOOL)_resetAuthorizationStatusesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (BOOL)_setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 sourceEntity:(id)arg3 dateModified:(id)arg4 syncProvenance:(long long)arg5 objectAnchor:(long long)arg6 database:(id)arg7 error:(id*)arg8;
+ (id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (BOOL)getAuthorizationRecordsByTypeWithDictionary:(id)arg1 sourceEntity:(id)arg2 types:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (BOOL)getAuthorizationStatusesWithDictionary:(id)arg1 sourceEntity:(id)arg2 types:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;
+ (BOOL)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id*)arg2;
+ (BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (BOOL)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 sourceEntity:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (BOOL)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
