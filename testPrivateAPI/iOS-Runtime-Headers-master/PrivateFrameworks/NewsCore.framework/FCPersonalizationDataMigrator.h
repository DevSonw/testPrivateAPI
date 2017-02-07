/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationDataMigrator : NSObject <FCKeyValueStoreMigrating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)keyValueStore:(id)arg1 canMigrateFromVersion:(unsigned int)arg2;
- (id)keyValueStore:(id)arg1 migrateObject:(id)arg2 forKey:(id)arg3 fromVersion:(unsigned int)arg4;

@end
