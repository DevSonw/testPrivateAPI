/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRemoteCredential : NSObject {
    NSObject<OS_xpc_object> * _connection;
    int  _retries;
    BOOL  _wantsRetries;
}

@property (nonatomic) BOOL wantsRetries;

- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)fetchRemoteAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchRemotePasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id /* block */)arg1;
- (void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(BOOL)arg3 allowQuery:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (void)requestRemoteAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)requestRemotePasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id /* block */)arg1;
- (void)setWantsRetries:(BOOL)arg1;
- (BOOL)wantsRetries;

@end