/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavigationBarCanvasView : UIView {
    UIView * _leftItemView;
    float  _preferredHeight;
    UIView * _rightItemView;
    UIView * _titleView;
}

@property (nonatomic, retain) UIView *leftItemView;
@property (nonatomic) float preferredHeight;
@property (nonatomic, retain) UIView *rightItemView;
@property (nonatomic, retain) UIView *titleView;

+ (float)maxHeight;
+ (float)minHeight;
+ (float)preferredLandscapeHeightForCompactWidth;
+ (float)preferredLandscapeHeightForRegularWidth;

- (void).cxx_destruct;
- (void)clearAllItemViews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 preferredHeight:(float)arg2;
- (void)layoutSubviews;
- (id)leftItemView;
- (float)preferredHeight;
- (id)rightItemView;
- (void)setLeftItemView:(id)arg1;
- (void)setPreferredHeight:(float)arg1;
- (void)setRightItemView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleView;

@end
