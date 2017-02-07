/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineLibrary : NSObject <CPLAbstractObject> {
    NSHashTable * _attachedObjects;
    NSDate * _cachedLastQuarantineCountReportDate;
    NSURL * _clientLibraryBaseURL;
    BOOL  _closed;
    NSURL * _cloudLibraryResourceStorageURL;
    NSURL * _cloudLibraryStateStorageURL;
    NSArray * _components;
    CPLConfiguration * _configuration;
    CPLEngineFeedbackManager * _feedback;
    NSString * _libraryIdentifier;
    BOOL  _libraryIsCorrupted;
    NSError * _openingError;
    CPLPlatformObject * _platformObject;
    NSObject<OS_dispatch_queue> * _queue;
    CPLEngineScheduler * _scheduler;
    CPLStatus * _status;
    CPLEngineStore * _store;
    CPLEngineSyncManager * _syncManager;
    CPLEngineSystemMonitor * _systemMonitor;
    unsigned int  _totalAssetCount;
    BOOL  _totalAssetCountHasBeenCalculated;
    CPLEngineTransport * _transport;
}

@property (nonatomic, readonly, copy) NSURL *clientLibraryBaseURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryResourceStorageURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryStateStorageURL;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *exitDeleteTime;
@property (nonatomic, readonly) CPLEngineFeedbackManager *feedback;
@property (nonatomic) BOOL hasChangesToProcess;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (nonatomic) BOOL isExceedingQuota;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly) BOOL libraryIsCorrupted;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) CPLEngineScheduler *scheduler;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLEngineSyncManager *syncManager;
@property (nonatomic, readonly) CPLEngineSystemMonitor *systemMonitor;
@property (nonatomic, readonly) CPLEngineTransport *transport;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_closeNextComponent:(id)arg1 deactivate:(BOOL)arg2 lastError:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_openNextComponent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_performBlockWithLibrary:(BOOL)arg1 enumerateAttachedObjects:(id /* block */)arg2;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
- (void)attachObject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)clientLibraryBaseURL;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudLibraryResourceStorageURL;
- (id)cloudLibraryStateStorageURL;
- (id)componentName;
- (id)configuration;
- (id)corruptionInfo;
- (id)description;
- (void)detachObject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)exitDeleteTime;
- (id)feedback;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)hasAssetCountOnServer;
- (BOOL)hasChangesToProcess;
- (BOOL)iCloudLibraryExists;
- (BOOL)iCloudLibraryHasBeenWiped;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (BOOL)isExceedingQuota;
- (id)libraryIdentifier;
- (BOOL)libraryIsCorrupted;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned int)arg3 numberOfVideos:(unsigned int)arg4 numberOfOtherItems:(unsigned int)arg5;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (void)reportLibraryCorrupted;
- (void)reportQuarantineCountIfNecessary;
- (void)reportRadar:(unsigned int)arg1;
- (void)reportUnsuccessfulSync;
- (void)requestAttachedLibrary;
- (id)scheduler;
- (void)setExitDeleteTime:(id)arg1;
- (void)setHasChangesToProcess:(BOOL)arg1;
- (void)setICloudLibraryExists:(BOOL)arg1;
- (void)setICloudLibraryHasBeenWiped:(BOOL)arg1;
- (void)setIsExceedingQuota:(BOOL)arg1;
- (void)startSyncSession;
- (id)store;
- (id)syncManager;
- (id)systemMonitor;
- (unsigned int)totalAssetCountOnServer;
- (id)transport;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)updateInitialSyncDate:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;

@end