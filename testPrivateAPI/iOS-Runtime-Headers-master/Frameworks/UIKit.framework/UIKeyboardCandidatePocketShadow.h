/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView {
    BOOL  _drawsShadow;
    BOOL  _shadowFadesToBottom;
    BOOL  _showsInDarkBackground;
}

@property (nonatomic) BOOL drawsShadow;
@property (nonatomic) BOOL shadowFadesToBottom;
@property (nonatomic) BOOL showsInDarkBackground;

+ (id)leftShadowImage;
+ (float)widthWithShadow:(BOOL)arg1;

- (void)applyLayoutAttributes:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDrawsShadow:(BOOL)arg1;
- (void)setShadowFadesToBottom:(BOOL)arg1;
- (void)setShowsInDarkBackground:(BOOL)arg1;
- (BOOL)shadowFadesToBottom;
- (BOOL)showsInDarkBackground;

@end