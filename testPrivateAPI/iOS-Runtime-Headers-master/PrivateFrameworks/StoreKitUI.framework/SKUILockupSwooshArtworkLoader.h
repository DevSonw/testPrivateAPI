/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {
    SKUIItemArtworkContext * _context;
    SKUIVideoImageDataConsumer * _videoImageConsumer;
    UIImage * _videoPlaceholderImage;
}

@property (nonatomic, readonly) SKUILockupSwooshViewController *swooshViewController;

- (void).cxx_destruct;
- (id)cachedImageForItem:(id)arg1;
- (id)cachedImageForVideo:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (BOOL)loadImageForItem:(id)arg1 reason:(int)arg2;
- (BOOL)loadImageForVideo:(id)arg1 reason:(int)arg2;
- (void)loadImagesForNextPageWithReason:(int)arg1;
- (id)placeholderImageForItem:(id)arg1;
- (id)placeholderImageForVideo:(id)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;

@end
