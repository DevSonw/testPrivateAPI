/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryActionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned int  _backgroundTaskIdentifier;
    NSOperationQueue * _operationQueue;
}

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_postInvalidationNotification;
- (void)addOperations:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)libraryActionPendingValuesForIdentifierCollection:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
