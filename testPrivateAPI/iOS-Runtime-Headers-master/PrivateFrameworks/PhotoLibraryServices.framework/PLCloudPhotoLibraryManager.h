/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryManager : NSObject <CPLLibraryManagerDelegate, CPLResourceProgressDelegate, PLBatterySaverWatcherDelegate, PLCloudUserSessionHandling, PLForegroundObserver> {
    id /* block */  __idleStateTransitionOneTimeAction;
    NSNumber * __numberOfOtherItemsDownloaded;
    NSNumber * __numberOfOtherItemsToPush;
    NSNumber * __numberOfPhotosDownloaded;
    NSNumber * __numberOfPhotosToPush;
    NSNumber * __numberOfVideosDownloaded;
    NSNumber * __numberOfVideosToPush;
    BOOL  _batterySaverModeEnabled;
    PLBatterySaverWatcher * _batterySaverWatcher;
    unsigned int  _boundForUploadingOtherItems;
    unsigned int  _boundForUploadingPhotos;
    unsigned int  _boundForUploadingVideos;
    BOOL  _closeLibrary;
    PFCoalescer * _coalescer;
    CPLLibraryManager * _cplLibrary;
    unsigned int  _downloadCounterCheck;
    PLCloudBatchDownloader * _downloader;
    BOOL  _enabledMingling;
    NSObject<OS_xpc_object> * _hubConnection;
    PLCloudInMemoryTaskManager * _inMemoryTaskManager;
    BOOL  _initializedMaster;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    unsigned long long  _lastKnownChangeHubEventIndex;
    unsigned long long  _lastKnownDeletionEventIndex;
    NSString * _lastKnownStoreUUID;
    unsigned int  _mode;
    BOOL  _modeChangePending;
    BOOL  _needSoftReset;
    BOOL  _needToResume;
    unsigned char  _nodeUUID;
    int  _notifyToken;
    unsigned int  _numberOfOtherItemsToDownload;
    unsigned int  _numberOfPhotosToDownload;
    unsigned int  _numberOfPhotosToUpload;
    unsigned int  _numberOfVideosToDownload;
    unsigned int  _numberOfVideosToUpload;
    int  _pauseRequest;
    NSDate * _pendingResetSyncDate;
    PLPhotoLibrary * _photoLibrary;
    BOOL  _processingChange;
    BOOL  _pullOnIdle;
    BOOL  _pushOnIdle;
    PLCloudResourceManager * _resourceManager;
    BOOL  _significantWork;
    BOOL  _stopped;
    BOOL  _stopping;
    PLCloudTaskManager * _taskManager;
    unsigned long long  _totalSizeOfPushedOriginals;
    unsigned long long  _totalSizeOfUnpushedOriginals;
    unsigned long long  _totalUploadedOriginalSize;
    NSMutableDictionary * _trackedResourceProgressSize;
    NSObject<OS_dispatch_source> * _unpauseDispatchTimer;
    unsigned int  _uploadCounterCheck;
    NSObject<OS_dispatch_queue> * _uploadDownloadCountQueue;
    PLCloudBatchUploader * _uploader;
    BOOL  _wasRebuild;
    NSObject<OS_dispatch_source> * _workInProgressTimer;
}

@property (setter=_setIdleStateTransitionOneTimeAction:, nonatomic, copy) id /* block */ _idleStateTransitionOneTimeAction;
@property (setter=_setNumberOfOtherItemsDownloaded:, nonatomic, retain) NSNumber *_numberOfOtherItemsDownloaded;
@property (setter=_setNumberOfOtherItemsToPush:, nonatomic, retain) NSNumber *_numberOfOtherItemsToPush;
@property (setter=_setNumberOfPhotosDownloaded:, nonatomic, retain) NSNumber *_numberOfPhotosDownloaded;
@property (setter=_setNumberOfPhotosToPush:, nonatomic, retain) NSNumber *_numberOfPhotosToPush;
@property (setter=_setNumberOfVideosDownloaded:, nonatomic, retain) NSNumber *_numberOfVideosDownloaded;
@property (setter=_setNumberOfVideosToPush:, nonatomic, retain) NSNumber *_numberOfVideosToPush;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL inResetSync;
@property (nonatomic, readonly) unsigned int numberOfOtherItemsToDownload;
@property (nonatomic, readonly) unsigned int numberOfPhotosToDownload;
@property (nonatomic, readonly) unsigned int numberOfPhotosToUpload;
@property (nonatomic, readonly) unsigned int numberOfVideosToDownload;
@property (nonatomic, readonly) unsigned int numberOfVideosToUpload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalSizeOfPushedOriginals;
@property (nonatomic, readonly) unsigned long long totalSizeOfUnpushedOriginals;
@property (nonatomic, readonly) unsigned long long totalUploadedOriginalSize;

+ (id)descriptionForResourceType:(unsigned int)arg1;
+ (BOOL)needResetSyncErrorType:(id)arg1;

- (id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned int)arg2 masterResourceOnly:(BOOL)arg3 isPhoto:(BOOL*)arg4;
- (BOOL)_canExternallyTransitionToNewLibraryModeIgnoringPause:(BOOL)arg1 ignoringBatterySaver:(BOOL)arg2 ignoringDiskPressure:(BOOL)arg3;
- (void)_checkForWorkInProgress;
- (void)_cleanupCPLLibrary;
- (void)_closeCPLLibrary;
- (void)_deactivateCPLLibrary;
- (id)_debugNameForMode:(unsigned int)arg1;
- (void)_doPause;
- (void)_doResetSync:(BOOL)arg1;
- (void)_doUnpause;
- (void)_downloadFromCloud;
- (void)_fetchDeletionEventsFromChangeHub;
- (unsigned long long)_fetchLastEventIndexFromChangeHub;
- (BOOL)_hasAvalancheIncomingWork;
- (BOOL)_hasIncomingWorkFileMarker;
- (id /* block */)_idleStateTransitionOneTimeAction;
- (unsigned int)_inq_numberOfOtherItemsToDownload;
- (unsigned int)_inq_numberOfOtherItemsToUpload;
- (unsigned int)_inq_numberOfPhotosToDownload;
- (unsigned int)_inq_numberOfPhotosToUpload;
- (unsigned int)_inq_numberOfVideosToDownload;
- (unsigned int)_inq_numberOfVideosToUpload;
- (BOOL)_isColorAwareResource:(unsigned int)arg1 adjustedResource:(BOOL)arg2;
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;
- (id)_newFetchPendingEventsFromIndex:(unsigned long long)arg1;
- (id)_numberOfOtherItemsDownloaded;
- (id)_numberOfOtherItemsToPush;
- (id)_numberOfPhotosDownloaded;
- (id)_numberOfPhotosToPush;
- (id)_numberOfVideosDownloaded;
- (id)_numberOfVideosToPush;
- (void)_openCPLLibrary;
- (short)_placeHolderKindFromCPLResourceType:(unsigned int)arg1;
- (void)_processColorSpaceForAsset:(id)arg1 resourceURL:(id)arg2 resourceType:(unsigned int)arg3 isAdjustedResource:(BOOL)arg4;
- (void)_processNextTransaction;
- (void)_processUploadBatch;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned int)arg1;
- (void)_reallyDeactivateCPLLibrary;
- (void)_recoverFromPauseUnderDiskPressureIfNeeded;
- (unsigned int)_registerToChangeHubNotification;
- (void)_resetCPLLibrary;
- (void)_resetTotalUploadByteSize;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(id /* block */)arg3;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_runSyncOnIsolationQueueWithBlock:(id /* block */)arg1;
- (void)_setIdleStateTransitionOneTimeAction:(id /* block */)arg1;
- (void)_setInInitialUploadMode:(BOOL)arg1;
- (void)_setNumberOfOtherItemsDownloaded:(id)arg1;
- (void)_setNumberOfOtherItemsToPush:(id)arg1;
- (void)_setNumberOfPhotosDownloaded:(id)arg1;
- (void)_setNumberOfPhotosToPush:(id)arg1;
- (void)_setNumberOfVideosDownloaded:(id)arg1;
- (void)_setNumberOfVideosToPush:(id)arg1;
- (void)_setupHubConnection;
- (BOOL)_setupTimerForUnpause;
- (void)_startWorkInProgressTimer;
- (void)_stopAll;
- (void)_stopUnpauseTimer;
- (void)_stopWorkInProgressTimer;
- (struct CGSize { float x1; float x2; })_targetSizeForInputSize:(struct CGSize { float x1; float x2; })arg1 maxPixelSize:(unsigned int)arg2;
- (void)_transitionToState:(unsigned int)arg1;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updatePendingResetSyncDate;
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updateTransferCounts;
- (void)_updateWithCPLResource:(id)arg1 isHighPriority:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_uploadFullPhotoLibraryToCloud;
- (void)addLogMark:(id)arg1;
- (void)batterySaverModeDidChange:(BOOL)arg1;
- (void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1;
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)arg1;
- (id)cplStatus;
- (void)dealloc;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)diskSpaceLevel;
- (void)doSoftResetSync;
- (void)downloadAsset:(id)arg1 resourceType:(unsigned int)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(id /* block */)arg7 progressBlock:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
- (void)downloadResource:(id)arg1 highPriority:(BOOL)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(id /* block */)arg5 progressBlock:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned int)arg2 masterResourceOnly:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)dumpStatusIncludingDaemon:(BOOL)arg1;
- (void)endUserSessionWithCompletionHandler:(id /* block */)arg1;
- (void)endsSignificantWork;
- (void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchNewEventsFromChangeHub;
- (void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 context:(id)arg3;
- (id)getCPLState;
- (BOOL)inResetSync;
- (id)init;
- (BOOL)isPausedForDownloadRequestHighPriority:(BOOL)arg1;
- (BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;
- (id)lastKnownCloudVersionFromDisk;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManagerDidStartSynchronization:(id)arg1;
- (void)libraryManagerHasChangesToPull:(id)arg1;
- (void)libraryManagerStatusDidChange:(id)arg1;
- (unsigned int)numberOfOtherItemsToDownload;
- (unsigned int)numberOfPhotosToDownload;
- (unsigned int)numberOfPhotosToUpload;
- (unsigned int)numberOfVideosToDownload;
- (unsigned int)numberOfVideosToUpload;
- (void)pause;
- (void)processDownloadBatchWithSession:(id)arg1;
- (void)rampingRequestForResourceType:(unsigned int)arg1 numRequested:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)resetFlags;
- (void)resume;
- (void)saveLastKnownIndexFromChangeHubToDisk;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;
- (void)startAutomaticPrefetchOrPrune;
- (void)stop;
- (void)sync;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)totalSizeOfPushedOriginals;
- (unsigned long long)totalSizeOfUnpushedOriginals;
- (unsigned long long)totalUploadedOriginalSize;
- (void)unpause;
- (void)unregisterToChangeHubNotification;
- (void)updateLastKnownIndexFromChangeHub;
- (void)uploadToCloudForEvents:(id)arg1;

@end
