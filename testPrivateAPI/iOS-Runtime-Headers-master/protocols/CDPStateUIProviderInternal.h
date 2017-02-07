/* Generated by RuntimeBrowser.
 */

@protocol CDPStateUIProviderInternal

@required

- (void)cdpContext:(void *)arg1 promptForAccountPasswordWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForAdoptionOfMultipleICSC:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(NSNumber *)arg3 isRandom:(BOOL)arg4 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg5;
- (void)cdpContext:(void *)arg1 promptForInteractiveAuthenticationWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(id <CDPLocalDeviceSecretHandlerProtocol>)arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg4;
- (void)cdpContext:(void *)arg1 promptToEnableStingrayCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)cdpContext:(void *)arg1 promptToInformUserOfAccountLockOutWithCompletion:(void *)arg2; // needs 2 arg types, found 6: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cdpContext:(void *)arg1 promptToInformUserOfAccountUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 6: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cdpContext:(void *)arg1 showError:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CDPContext *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)cdpContext:(void *)arg1 showError:(void *)arg2 withDefaultIndex:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: CDPContext *, NSError *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
