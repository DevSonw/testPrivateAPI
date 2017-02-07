/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSelectionBadgeUIViewTile : UIImageView <PXReusableObject, PXUIViewBasicTile> {
    BOOL  __selected;
    struct { 
        BOOL imageView; 
    }  _needsUpdateFlags;
}

@property (setter=_setSelected:, nonatomic) BOOL _selected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize { float x1; float x2; })preferredSize;

- (void)_invalidateImageView;
- (BOOL)_selected;
- (void)_setSelected:(BOOL)arg1;
- (void)_updateImageViewIfNeeded;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id)view;

@end
