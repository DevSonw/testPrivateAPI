/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _allowsAccountModification;
    BOOL  _allowsDeletion;
    BOOL  _allowsExplicitContent;
    BOOL  _allowsRadioPurchases;
    BOOL  _allowsStorePurchases;
    NSMutableDictionary * _cachedSettings;
    MCProfileConnection * _connection;
}

@property (nonatomic, readonly) BOOL allowsAccountModification;
@property (nonatomic, readonly) BOOL allowsDeletion;
@property (nonatomic, readonly) BOOL allowsExplicitContent;
@property (nonatomic, readonly) BOOL allowsRadioPurchases;
@property (nonatomic, readonly) BOOL allowsStorePurchases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasRestrictionsPasscode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedRestrictionsMonitor;

- (void).cxx_destruct;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (BOOL)_isRunningInStoreDemoMode;
- (void)_updateWithCanPostNotifications:(BOOL)arg1;
- (BOOL)allowsAccountModification;
- (BOOL)allowsDeletion;
- (BOOL)allowsExplicitContent;
- (BOOL)allowsRadioPurchases;
- (BOOL)allowsStorePurchases;
- (void)dealloc;
- (id)effectiveValueForSetting:(id)arg1;
- (BOOL)hasRestrictionsPasscode;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
