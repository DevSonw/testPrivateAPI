/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMParentalControls : NSObject {
    BOOL  _active;
    BOOL  _disableAV;
    BOOL  _forceChatLogging;
    NSMutableDictionary * _parentalControls;
    BOOL  _shouldPostNotifications;
}

@property (nonatomic, readonly) BOOL _disableAV;
@property (nonatomic, readonly) BOOL _forceChatLogging;
@property (nonatomic, readonly) NSMutableDictionary *_parentalControls;
@property (nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) BOOL disableAV;
@property (nonatomic, readonly) BOOL forceChatLogging;
@property (nonatomic) BOOL shouldPostNotifications;

+ (id)objectForKey:(id)arg1;
+ (id)standardControls;

- (void).cxx_destruct;
- (BOOL)_disableAV;
- (BOOL)_forceChatLogging;
- (void)_managedPrefsNotification:(id)arg1;
- (id)_parentalControls;
- (id)_serviceWithName:(id)arg1;
- (void)_updateParentalSettings;
- (BOOL)accountHasWhitelist:(id)arg1;
- (BOOL)accountIsEnabled:(id)arg1;
- (BOOL)active;
- (void)dealloc;
- (BOOL)disableAV;
- (BOOL)disableAccount:(id)arg1;
- (BOOL)disableService:(id)arg1;
- (BOOL)forceChatLogging;
- (BOOL)forceWhitelistForAccount:(id)arg1;
- (BOOL)forceWhitelistForService:(id)arg1;
- (id)init;
- (BOOL)okToConnectAccount:(id)arg1;
- (void)setShouldPostNotifications:(BOOL)arg1;
- (BOOL)shouldPostNotifications;
- (id)whitelistForAccount:(id)arg1;
- (id)whitelistForService:(id)arg1;

@end
