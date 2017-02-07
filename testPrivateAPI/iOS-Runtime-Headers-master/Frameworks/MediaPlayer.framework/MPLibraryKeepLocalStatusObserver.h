/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryKeepLocalStatusObserver : NSObject <MPDownloadProgressObserver, MPStoreDownloadManagerObserver> {
    NSSet * _activeDownloads;
    MPLibraryKeepLocalStatusObserverConfiguration * _configuration;
    struct MPLibraryActiveKeepLocalStatus { 
        int statusType; 
        float downloadProgress; 
    }  _currentStatus;
    id /* block */  _statusBlock;
    BOOL  _useNewProgressReporting;
}

@property (nonatomic, retain) MPLibraryKeepLocalStatusObserverConfiguration *configuration;
@property (nonatomic, readonly) struct MPLibraryActiveKeepLocalStatus { int x1; float x2; } currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ statusBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeDownloadForIdentifierSet:(id)arg1;
- (struct MPLibraryActiveKeepLocalStatus { int x1; float x2; })_calculateCurrentStatus;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (BOOL)_updateActiveDownloadsAllowingDownloadRemoval:(BOOL)arg1;
- (void)_updateCurrentStatus;
- (id)configuration;
- (struct MPLibraryActiveKeepLocalStatus { int x1; float x2; })currentStatus;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddActiveAssetDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2;
- (void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
- (void)downloadManager:(id)arg1 didRemoveAssetDownloads:(id)arg2;
- (void)downloadManager:(id)arg1 didUpdateAssetDownloads:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
- (id)init;
- (void)setConfiguration:(id)arg1;
- (void)setStatusBlock:(id /* block */)arg1;
- (id /* block */)statusBlock;

@end
