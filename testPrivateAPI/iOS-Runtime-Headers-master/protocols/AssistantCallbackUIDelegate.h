/* Generated by RuntimeBrowser.
 */

@protocol AssistantCallbackUIDelegate

@required

- (void)callbackAskCancel;

@optional

- (long)callbackAskUserAQuestion:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AssistantCallbackController *)arg3;
- (long)callbackAskUserForPassword:(int)arg1 param:(NSString *)arg2 forController:(AssistantCallbackController *)arg3;
- (long)callbackAskUserForSetupCode:(int)arg1 isRetry:(BOOL)arg2 forController:(AssistantCallbackController *)arg3;
- (long)callbackAskUserForUncertifiedForController:(AssistantCallbackController *)arg1;
- (long)callbackAskUserToChooseFromStringList:(NSArray *)arg1 context:(int)arg2 forController:(AssistantCallbackController *)arg3;

@end
