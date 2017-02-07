/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPMediaCollectionDownloadObserver : MPUMediaDownloadObserver {
    BOOL  _callingProgressHandler;
    NSMutableArray * _downloadObservers;
}

- (void).cxx_destruct;
- (void)_callProgressHandler;
- (void)_onQueue_invalidate;
- (void)dealloc;
- (double)downloadProgress;
- (unsigned int)downloadsCount;
- (id)initWithCollection:(id)arg1;
- (BOOL)isCurrentlyPlayable;
- (BOOL)isPaused;
- (BOOL)isPurchasing;

@end