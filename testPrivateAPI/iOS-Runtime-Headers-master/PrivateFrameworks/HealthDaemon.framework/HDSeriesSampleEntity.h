/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSeriesSampleEntity : HDSampleEntity

+ (id)_databaseTable;
+ (long long)_insertionEra;
+ (id)additionalPredicateForEnumeration;
+ (id)columnsDefinition;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(int)arg3 authorizationFilter:(id /* block */)arg4;
+ (BOOL)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (void)updateInsertionEra;

- (BOOL)freezeWithDatabase:(id)arg1 error:(id*)arg2;
- (BOOL)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id*)arg3;

@end
