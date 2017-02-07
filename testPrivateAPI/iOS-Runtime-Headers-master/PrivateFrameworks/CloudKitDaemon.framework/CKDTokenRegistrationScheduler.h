/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher> {
    NSMutableDictionary * _callbackBlocks;
    NSMutableDictionary * _callbackTimers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _requests;
    BOOL  _schedulerIsAvailable;
}

@property (nonatomic, retain) NSMutableDictionary *callbackBlocks;
@property (nonatomic, retain) NSMutableDictionary *callbackTimers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableSet *requests;
@property (nonatomic) BOOL schedulerIsAvailable;
@property (readonly) Class superclass;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_refreshToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(int)arg4 darkWakeEnabled:(BOOL)arg5 isCKSystemService:(BOOL)arg6 completionBlock:(id /* block */)arg7;
- (void)_removeToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(int)arg4 darkWakeEnabled:(BOOL)arg5 isCKSystemService:(BOOL)arg6 completionBlock:(id /* block */)arg7;
- (id)callbackBlocks;
- (id)callbackTimers;
- (BOOL)canRunGivenAvailabilityState:(unsigned int)arg1;
- (void)dealloc;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 useAPSPublicToken:(BOOL)arg3 darkWakeEnabled:(BOOL)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(id /* block */)arg6;
- (void)forceTokenRefreshForAllClients;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (id)init;
- (id)queue;
- (void)refreshAllClientsNow;
- (void)registerTokenRefreshActivity;
- (id)requests;
- (BOOL)schedulerIsAvailable;
- (void)setCallbackBlocks:(id)arg1;
- (void)setCallbackTimers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setSchedulerAvailable:(BOOL)arg1;
- (void)setSchedulerIsAvailable:(BOOL)arg1;
- (void)systemAvailabilityChanged:(unsigned int)arg1;
- (void)tokenRefreshChanged;
- (void)unregisterAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;

@end
