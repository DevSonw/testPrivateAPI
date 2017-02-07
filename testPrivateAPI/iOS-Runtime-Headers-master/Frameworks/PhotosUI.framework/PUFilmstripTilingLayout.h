/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripTilingLayout : PUTilingLayout {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _contentBounds;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    struct CGSize { 
        float width; 
        float height; 
    }  _itemSize;
    NSCache * _layoutInfoCache;
    int  _numberOfItems;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } contentSize;

- (void).cxx_destruct;
- (id)_layoutInfoForTileWithIndex:(int)arg1 kind:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)initWithContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)preferredScrollInfo;
- (void)prepareLayout;

@end
