/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

@interface PRRequestQueue : NSObject {
    <PRRequestDelegate> * _delegate;
    NSString * _identifier;
}

@property (nonatomic) <PRRequestDelegate> *delegate;
@property (readonly) NSString *identifier;

+ (id)_requestQueueForIdentifier:(id)arg1;
+ (id)defaultRequestQueue;

- (void).cxx_destruct;
- (id)_agentRemoteObjectInterface;
- (id)_agentXPCConnection;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)_clearCachedRequests;
- (void)_deleteTestValueFromTouchIDKeychain;
- (void)_didReceiveStorePushNotificationWithPayload:(id)arg1;
- (void)_didStartNewPurchaseRequestWithInfo:(id)arg1;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned int)arg1 replyBlock:(id /* block */)arg2;
- (id)_pushToken;
- (void)_readTestValueFromTouchIDKeychain;
- (void)_registerPushToken;
- (void)_requestToBePresentedWithReply:(id /* block */)arg1;
- (void)_userDidApproveRequestWithRequestID:(id)arg1;
- (void)_userDidDenyRequestWithRequestID:(id)arg1;
- (void)_writeTestValueToTouchIDKeychain;
- (void)addRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)agentRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)pendingRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
