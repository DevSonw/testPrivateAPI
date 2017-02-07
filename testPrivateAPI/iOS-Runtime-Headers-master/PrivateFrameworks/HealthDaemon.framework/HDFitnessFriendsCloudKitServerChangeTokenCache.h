/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitServerChangeTokenCache : NSObject <NSCopying> {
    NSMutableDictionary * _databaseChangeTokensByDatabaseScope;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _zoneChangeTokensByZoneID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)serverChangeTokenForDatabase:(id)arg1;
- (id)serverChangeTokenForRecordZoneID:(id)arg1;
- (void)setServerChangeToken:(id)arg1 forDatabase:(id)arg2;
- (void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;

@end
