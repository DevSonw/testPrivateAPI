/* Generated by RuntimeBrowser.
 */

@protocol WCXPCManagerDaemonProtocol <NSObject>

@required

- (void)acknowledgeFileIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeFileResultIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeUserInfoIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)cancelAllOutstandingMessages;
- (void)cancelSendWithIdentifier:(NSString *)arg1;
- (void)sendMessage:(void *)arg1 clientPairingID:(void *)arg2 acceptanceHandler:(void *)arg3; // needs 3 arg types, found 9: WCMessage *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, BOOL, void*
- (void)sessionReadyForInitialStateForClientPairingID:(void *)arg1 supportsActiveDeviceSwitch:(void *)arg2 withErrorHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)transferFile:(void *)arg1 sandboxToken:(void *)arg2 clientPairingID:(void *)arg3 errorHandler:(void *)arg4; // needs 4 arg types, found 9: WCSessionFileTransfer *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)transferUserInfo:(void *)arg1 withURL:(void *)arg2 clientPairingID:(void *)arg3 errorHandler:(void *)arg4; // needs 4 arg types, found 9: WCSessionUserInfoTransfer *, NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateApplicationContext:(void *)arg1 clientPairingID:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
