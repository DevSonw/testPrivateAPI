/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiteMetadataImageCache : NSObject {
    NSMutableDictionary * _cacheSettings;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > { 
        struct __compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > { 
            struct CoalescedAsynchronousWriter {} *__first_; 
        } __ptr_; 
    }  _cacheSettingsWriter;
    <WBSSiteMetadataImageCacheDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    NSURL * _imageDirectoryURL;
    NSCountedSet * _imageRetainCounts;
    int  _imageType;
    NSMutableDictionary * _imagesForKeyStrings;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _missingImageKeyStrings;
    NSCountedSet * _negativeImageRetainCounts;
    NSMutableSet * _pendingKeyStringRequests;
    BOOL  _terminating;
}

@property (nonatomic) <WBSSiteMetadataImageCacheDelegate> *delegate;
@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (nonatomic, readonly) int imageType;
@property (getter=isTerminating, nonatomic, readonly) BOOL terminating;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_cacheSettingsFileURL;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2;
- (id)_diskAccessQueueName;
- (void)_dispatchDiskAccessBlock:(id /* block */)arg1;
- (void)_emptyCacheDirectory;
- (id)_fileLocationForKeyString:(id)arg1;
- (id)_fileNameForKeyString:(id)arg1;
- (id)_internalImageForKeyString:(id)arg1;
- (int)_internalImageStateForKeyString:(id)arg1;
- (void)_internalPurgeUnneededImages;
- (void)_internalQueueDispatchAsync:(id /* block */)arg1;
- (void)_internalQueueDispatchBarrierAsync:(id /* block */)arg1;
- (void)_internalQueueDispatchSync:(id /* block */)arg1;
- (id)_internalQueueName;
- (void)_internalReleaseImageForKeyString:(id)arg1;
- (void)_internalRemoveAllImages;
- (void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1;
- (void)_internalRetainImageForKeyString:(id)arg1;
- (void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2;
- (void)_internalSetImageState:(int)arg1 forKeyString:(id)arg2;
- (void)_internalSetSetting:(id)arg1 forKey:(id)arg2;
- (void)_internalSetUpImageCache;
- (id)_internalSettingForKey:(id)arg1;
- (id)_loadImageFromDiskForKeyString:(id)arg1;
- (void)_notifyDidFinishLoadingSettings;
- (void)_removeImagesPassingTest:(id /* block */)arg1;
- (void)_requestImageForKeyString:(id)arg1;
- (void)_saveCacheSettingsSoon;
- (id)delegate;
- (void)emptyCache;
- (id)imageDirectoryURL;
- (id)imageForKeyString:(id)arg1;
- (int)imageStateForKeyString:(id)arg1;
- (int)imageType;
- (id)init;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(int)arg2;
- (BOOL)isImageRetainedForKeyString:(id)arg1;
- (BOOL)isTerminating;
- (void)purgeUnneededImages;
- (void)releaseImageForKeyString:(id)arg1;
- (void)releaseImageWithKeyStringProvider:(id /* block */)arg1;
- (void)releaseImagesForKeyStrings:(id)arg1;
- (void)removeAllImages;
- (void)removeImagesFromCacheForKeyStrings:(id)arg1;
- (void)retainImageForKeyString:(id)arg1;
- (void)retainImageWithKeyStringProvider:(id /* block */)arg1;
- (void)retainImagesForKeyStrings:(id)arg1;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2;
- (void)savePendingChangesBeforeTermination;
- (void)setDelegate:(id)arg1;
- (void)setImageState:(int)arg1 forKeyString:(id)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (void)setUpImageCache;
- (id)settingForKey:(id)arg1;

@end
