/* Generated by RuntimeBrowser.
 */

@protocol ADAdSheetConnectionDelegate <NSObject>

@required

- (NSString *)adSheetMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg1;

@optional

- (void)adSheetConnectionEstablished;
- (void)adSheetConnectionLost;
- (BOOL)shouldConnectToAdSheet;

@end
