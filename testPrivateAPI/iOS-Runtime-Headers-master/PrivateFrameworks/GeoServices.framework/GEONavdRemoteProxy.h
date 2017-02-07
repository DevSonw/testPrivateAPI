/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {
    NSXPCConnection * _connection;
    NSMutableDictionary * _handlers;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, retain) <GEONavdXPCInterface> *remoteObjectProxyThreadUnsafe;

- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)addObserver:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)didPostUINotification:(unsigned int)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;
- (id)init;
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)open;
- (id)remoteObjectProxyThreadUnsafe;
- (void)removeObserver:(id)arg1;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(id /* block */)arg4;
- (void)statusWithCallback:(id /* block */)arg1;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;

@end
