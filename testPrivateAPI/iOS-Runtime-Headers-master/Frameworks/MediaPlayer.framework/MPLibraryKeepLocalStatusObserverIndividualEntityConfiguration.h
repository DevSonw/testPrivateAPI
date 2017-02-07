/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {
    BOOL  _collectionType;
    BOOL  _hasNonPurgeableAsset;
    int  _managedStatus;
    BOOL  _storeRedownloadable;
}

@property (getter=isCollectionType, nonatomic) BOOL collectionType;
@property (nonatomic) BOOL hasNonPurgeableAsset;
@property (nonatomic) int managedStatus;
@property (getter=isStoreRedownloadable, nonatomic) BOOL storeRedownloadable;

- (BOOL)hasNonPurgeableAsset;
- (BOOL)isCollectionType;
- (BOOL)isStoreRedownloadable;
- (int)managedStatus;
- (void)setCollectionType:(BOOL)arg1;
- (void)setHasNonPurgeableAsset:(BOOL)arg1;
- (void)setManagedStatus:(int)arg1;
- (void)setStoreRedownloadable:(BOOL)arg1;

@end
