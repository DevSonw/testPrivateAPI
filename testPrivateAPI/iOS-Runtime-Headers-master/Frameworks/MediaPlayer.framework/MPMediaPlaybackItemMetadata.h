/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPlaybackItemMetadata : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _albumArtistName;
    long long  _albumStoreAdamID;
    NSString * _albumTitle;
    BOOL  _allowsCellularNetworking;
    BOOL  _allowsInitiatingPlayWhileDownload;
    NSString * _artistName;
    long long  _artistStoreAdamID;
    NSString * _buyParameters;
    NSString * _composerName;
    NSString * _contentTitle;
    unsigned int  _contentType;
    NSString * _copyrightText;
    long long  _downloadIdentifier;
    int  _endpointType;
    double  _expectedDuration;
    NSString * _genreTitle;
    NSNumber * _iTunesStoreContentDSID;
    NSNumber * _iTunesStoreContentID;
    BOOL  _isExplicitTrack;
    NSURL * _localNetworkContentURL;
    MPMediaItem * _mediaItem;
    long long  _mediaLibraryPersistentID;
    MPModelSong * _modelSong;
    NSURL * _protectedContentSupportStorageURL;
    NSNumber * _rentalIdentifier;
    BOOL  _requiresPlayWhileDownload;
    BOOL  _shouldRememberBookmarkTime;
    BOOL  _shouldReportPlayEventsToStore;
    BOOL  _showComposer;
    unsigned long long  _storeAccountID;
    long long  _storeAdamID;
    unsigned long long  _storeSagaID;
    long long  _storeSubscriptionAdamID;
    float  _volumeNormalization;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (nonatomic, readonly, copy) NSString *albumArtistName;
@property (nonatomic, readonly) long long albumStoreAdamID;
@property (nonatomic, readonly, copy) NSString *albumTitle;
@property (nonatomic, readonly) BOOL allowsAssetCaching;
@property (nonatomic, readonly) BOOL allowsCellularNetworking;
@property (nonatomic, readonly) BOOL allowsInitiatingPlayWhileDownload;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly) long long artistStoreAdamID;
@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly, copy) NSString *composerName;
@property (nonatomic, readonly, copy) NSString *contentTitle;
@property (nonatomic, readonly) unsigned int contentType;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) long long downloadIdentifier;
@property (nonatomic, readonly) int endpointType;
@property (nonatomic, readonly) double expectedDuration;
@property (nonatomic, readonly, copy) NSString *genreTitle;
@property (nonatomic, readonly, copy) NSNumber *iTunesStoreContentDSID;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentDownloadParameters;
@property (nonatomic, readonly, copy) NSNumber *iTunesStoreContentID;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentPurchasedMediaKind;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentType;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentUserAgent;
@property (nonatomic, readonly) BOOL isExplicitTrack;
@property (nonatomic, readonly) int likedState;
@property (nonatomic, readonly, copy) NSURL *localNetworkContentURL;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) long long mediaLibraryPersistentID;
@property (nonatomic, readonly) MPModelSong *modelSong;
@property (nonatomic, readonly, copy) NSURL *protectedContentSupportStorageURL;
@property (getter=_rentalIdentifier, nonatomic, readonly) NSNumber *rentalIdentifier;
@property (nonatomic, readonly) BOOL requiresPlayWhileDownload;
@property (nonatomic, readonly) BOOL shouldRememberBookmarkTime;
@property (nonatomic, readonly) BOOL shouldReportPlayEventsToStore;
@property (nonatomic, readonly) BOOL showComposer;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) unsigned long long storeSagaID;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (nonatomic, readonly) float volumeNormalization;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (BOOL)_shouldRespectMusicCellularDataSetting;
+ (BOOL)_shouldRespectStoreCellularDataSetting;

- (void).cxx_destruct;
- (BOOL)_calculateAllowsCellularNetworking;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (id)_rentalIdentifier;
- (BOOL)_requiresPendingItemDownload;
- (void)_setNeedsAllowsCellularNetworkingUpdate;
- (void)_storeCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (id)_storeRedownloadProductItem;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (BOOL)allowsAssetCaching;
- (BOOL)allowsCellularNetworking;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned int*)arg1 protectionType:(unsigned int*)arg2 usesPurchaseBundle:(BOOL*)arg3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned int)contentType;
- (id)copyrightText;
- (long long)downloadIdentifier;
- (int)endpointType;
- (double)expectedDuration;
- (id)genreTitle;
- (void)getNetworkConstraintsForDownloadKind:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentDownloadParameters;
- (id)iTunesStoreContentID;
- (id)iTunesStoreContentPurchasedMediaKind;
- (id)iTunesStoreContentType;
- (id)iTunesStoreContentUserAgent;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (int)likedState;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (id)localNetworkContentURL;
- (id)mediaItem;
- (long long)mediaLibraryPersistentID;
- (id)modelSong;
- (id)protectedContentSupportStorageURL;
- (BOOL)requiresPlayWhileDownload;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned int)arg2 assetQuality:(unsigned int)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setLikedState:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)shouldRememberBookmarkTime;
- (BOOL)shouldReportPlayEventsToStore;
- (BOOL)showComposer;
- (unsigned long long)storeAccountID;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned int)arg1 assetFlavor:(id)arg2 protectionType:(unsigned int)arg3 pathExtension:(id)arg4;
- (id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)arg1;
- (float)volumeNormalization;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
