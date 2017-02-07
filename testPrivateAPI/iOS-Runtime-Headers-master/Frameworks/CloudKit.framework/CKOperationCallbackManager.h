/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationCallbackManager : NSObject {
    NSMutableDictionary * _checkpointCallbacks;
    NSMutableDictionary * _commandCallbacks;
    NSMutableDictionary * _completionCallbacks;
    NSMutableDictionary * _progressCallbacks;
}

@property (retain) NSMutableDictionary *checkpointCallbacks;
@property (retain) NSMutableDictionary *commandCallbacks;
@property (retain) NSMutableDictionary *completionCallbacks;
@property (retain) NSMutableDictionary *progressCallbacks;

- (void).cxx_destruct;
- (id)checkpointCallbacks;
- (id)commandCallbacks;
- (id)completionCallbacks;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)progressCallbacks;
- (void)registerCheckpointCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerCommandCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerCompletionCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerProgressCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)removeAllCallbacks;
- (void)setCheckpointCallbacks:(id)arg1;
- (void)setCommandCallbacks:(id)arg1;
- (void)setCompletionCallbacks:(id)arg1;
- (void)setProgressCallbacks:(id)arg1;
- (void)unregisterAllCallbacksForOperation:(id)arg1;

@end
