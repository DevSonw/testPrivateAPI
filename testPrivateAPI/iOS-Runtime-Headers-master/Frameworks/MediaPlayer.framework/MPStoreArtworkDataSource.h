/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)sharedStoreArtworkDataSource;

- (id)_bestURLForCatalog:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)existingArtworkEffectResultForEffectType:(int)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (BOOL)wantsBackgroundImageDecompression;

@end
