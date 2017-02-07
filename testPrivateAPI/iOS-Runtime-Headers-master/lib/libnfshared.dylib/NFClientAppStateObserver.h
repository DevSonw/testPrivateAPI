/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFClientAppStateObserver : NSObject {
    NSMutableDictionary * _bundleIdMap;
    NSMutableSet * _connections;
    <NFClientAppStateObserverDelegate> * _delegate;
    BKSApplicationStateMonitor * _monitor;
    BOOL  _willSleep;
}

@property (readonly) BOOL willSleep;

- (void)_applicationStateChanged:(id)arg1;
- (id)_lookupClientBundleId:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isClientSuspended:(id)arg1;
- (void)registerForStateChangesToConnection:(id)arg1;
- (void)unregisterForStateChangesToConnection:(id)arg1;
- (BOOL)willSleep;

@end
