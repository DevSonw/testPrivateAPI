/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {
    NSXPCConnection * _conn;
    NSLock * _connLock;
    <FAFamilyNotificationDelegate> * _delegate;
    NSString * _identifier;
    NSXPCListener * _listener;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property <FAFamilyNotificationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSString *identifier;
@property (readonly) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_agentConnectionFailedToBootstrap;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (id)_pendingNotificationsForAllClients;
- (id)_pendingNotificationsWithClientIdentifier:(id)arg1;
- (id)agentConnection;
- (id)delegate;
- (void)deliverNotification:(id)arg1;
- (void)didActivateNotification:(id)arg1;
- (void)didClearNotification:(id)arg1;
- (void)didDismissNotification:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pendingNotifications;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (id)serviceName;
- (void)setDelegate:(id)arg1;

@end
