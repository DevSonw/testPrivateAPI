/* Generated by RuntimeBrowser.
 */

@protocol AXUIClientDelegate <NSObject>

@optional

- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(AXUIClient *)arg1;
- (AXHAAccessQueue *)userInterfaceClient:(AXUIClient *)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned int)arg2;
- (BOOL)userInterfaceClient:(AXUIClient *)arg1 messageFromServerForWithIdentifierShouldBeProcessedAsynchronously:(unsigned int)arg2;
- (BOOL)userInterfaceClient:(AXUIClient *)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned int)arg2;
- (NSDictionary *)userInterfaceClient:(AXUIClient *)arg1 processMessageFromServer:(NSDictionary *)arg2 withIdentifier:(unsigned int)arg3 error:(id*)arg4;
- (void)userInterfaceClient:(void *)arg1 processMessageFromServerAsynchronously:(void *)arg2 withIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AXUIClient *, NSDictionary *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)userInterfaceClient:(AXUIClient *)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(NSMutableDictionary *)arg2;

@end
