/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISwooshArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {
    SKUIResourceLoader * _artworkLoader;
    NSMapTable * _artworkRequestIDs;
    SKUIImageDataConsumer * _imageDataConsumer;
    NSMutableIndexSet * _outstandingRequestIDs;
    UIImage * _placeholderImage;
    SKUISwooshViewController * _swooshViewController;
}

@property (nonatomic, readonly) SKUIResourceLoader *artworkLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUIImageDataConsumer *imageDataConsumer;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUISwooshViewController *swooshViewController;

- (void).cxx_destruct;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (unsigned int)artworkRequestIdentifierForObject:(id)arg1;
- (id)cachedImageForObject:(id)arg1;
- (void)cancelImageLoading;
- (void)deprioritizePendingImageLoads;
- (id)imageDataConsumer;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (BOOL)loadImageForObject:(id)arg1 URL:(id)arg2 reason:(int)arg3;
- (BOOL)loadImageForObject:(id)arg1 artworkRequest:(id)arg2 reason:(int)arg3;
- (void)loadImagesForNextPageWithReason:(int)arg1;
- (id)placeholderImage;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)setImageDataConsumer:(id)arg1;
- (void)setPlaceholderColorWithColorScheme:(id)arg1;
- (id)swooshViewController;

@end