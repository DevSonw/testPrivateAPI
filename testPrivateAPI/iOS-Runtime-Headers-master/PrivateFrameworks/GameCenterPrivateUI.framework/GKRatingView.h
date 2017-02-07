/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRatingView : UIView {
    UIImageView * _backgroundImageView;
    UIImageView * _foregroundImageView;
    NSLayoutConstraint * _foregroundWidthConstraint;
    float  _value;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) UIImageView *foregroundImageView;
@property (nonatomic, retain) NSLayoutConstraint *foregroundWidthConstraint;
@property (nonatomic) float value;

- (void)awakeFromNib;
- (id)backgroundImageView;
- (void)commonSetup;
- (void)dealloc;
- (id)foregroundImageView;
- (id)foregroundWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setBackgroundImageView:(id)arg1;
- (void)setForegroundImageView:(id)arg1;
- (void)setForegroundWidthConstraint:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
