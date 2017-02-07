/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing, SBKTransactionControllerDelegate> {
    BOOL  _canceled;
    SBKSyncTransaction * _currentKVSTransaction;
    <SBKUniversalPlaybackPositionDataSource> * _dataSource;
    <SBKUniversalPlaybackPositionTransactionContext> * _dataSourceTransactionContext;
    NSError * _fatalSyncError;
    SBKTransactionController * _kvsController;
    NSMutableDictionary * _metadataItemsFromDataSource;
    NSDictionary * _metadataItemsToCommitToDataSource;
    NSDictionary * _metadataItemsToCommitToKVSStorage;
    NSString * _overrideSyncAnchor;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _responseMetadataItemsMergedToCommitBackToKVSStorage;
    NSMutableDictionary * _responseMetadataItemsToCommitToDataSource;
    BOOL  _syncInProgress;
    NSObject<OS_dispatch_queue> * _syncOperationQueue;
}

@property BOOL canceled;
@property (retain) SBKSyncTransaction *currentKVSTransaction;
@property (retain) <SBKUniversalPlaybackPositionDataSource> *dataSource;
@property (retain) <SBKUniversalPlaybackPositionTransactionContext> *dataSourceTransactionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *fatalSyncError;
@property (readonly) unsigned int hash;
@property (retain) SBKTransactionController *kvsController;
@property (retain) NSMutableDictionary *metadataItemsFromDataSource;
@property (retain) NSDictionary *metadataItemsToCommitToDataSource;
@property (retain) NSDictionary *metadataItemsToCommitToKVSStorage;
@property (retain) NSString *overrideSyncAnchor;
@property (retain) NSMutableDictionary *responseMetadataItemsMergedToCommitBackToKVSStorage;
@property (retain) NSMutableDictionary *responseMetadataItemsToCommitToDataSource;
@property (readonly) Class superclass;
@property BOOL syncInProgress;

- (void).cxx_destruct;
- (void)_dataSourceCancelTransaction;
- (int)_mergeConflictedItemFromSyncResponse:(id)arg1;
- (void)_mergeMetadataItemsFromSyncResponse;
- (BOOL)_shouldStop;
- (void)_signalKVSTransactionCompletion:(id)arg1;
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;
- (BOOL)_synchronize:(id*)arg1;
- (id)_synchronouslyRunKVSTransaction:(id)arg1;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (BOOL)canceled;
- (void)clearTransactionResponseData;
- (id)currentKVSTransaction;
- (id)dataSource;
- (id)dataSourceTransactionContext;
- (id)fatalSyncError;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;
- (id)kvsController;
- (id)metadataItemsFromDataSource;
- (id)metadataItemsToCommitToDataSource;
- (id)metadataItemsToCommitToKVSStorage;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(BOOL)arg2;
- (id)overrideSyncAnchor;
- (id)responseMetadataItemsMergedToCommitBackToKVSStorage;
- (id)responseMetadataItemsToCommitToDataSource;
- (void)setCanceled:(BOOL)arg1;
- (void)setCurrentKVSTransaction:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceTransactionContext:(id)arg1;
- (void)setFatalSyncError:(id)arg1;
- (void)setKvsController:(id)arg1;
- (void)setMetadataItemsFromDataSource:(id)arg1;
- (void)setMetadataItemsToCommitToDataSource:(id)arg1;
- (void)setMetadataItemsToCommitToKVSStorage:(id)arg1;
- (void)setOverrideSyncAnchor:(id)arg1;
- (void)setResponseMetadataItemsMergedToCommitBackToKVSStorage:(id)arg1;
- (void)setResponseMetadataItemsToCommitToDataSource:(id)arg1;
- (void)setSyncInProgress:(BOOL)arg1;
- (BOOL)syncInProgress;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (void)timeout;
- (id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5;
- (id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
- (BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;

@end
