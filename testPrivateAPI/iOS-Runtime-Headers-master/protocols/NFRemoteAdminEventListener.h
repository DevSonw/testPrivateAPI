/* Generated by RuntimeBrowser.
 */

@protocol NFRemoteAdminEventListener <NSObject>

@optional

- (void)didReceiveFatalCommunicationError;
- (void)readerModeCardIngestionStatus:(unsigned int)arg1;
- (void)readerModeCardSessionToken:(NSString *)arg1;
- (void)remoteAdminCleanupProgress:(double)arg1;

@end
