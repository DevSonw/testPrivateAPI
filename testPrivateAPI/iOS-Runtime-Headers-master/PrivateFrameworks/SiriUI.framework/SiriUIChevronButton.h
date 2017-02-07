/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIChevronButton : UIButton {
    UIImageView * _chevronImageView;
    float  _chevronRightInset;
    BOOL  _hasChevron;
    SiriUIKeyline * _keyline;
    int  _keylineType;
    float  _leftSubviewInset;
    UIView * _subview;
}

@property (nonatomic) float chevronRightInset;
@property (nonatomic) BOOL hasChevron;
@property (nonatomic) int keylineType;
@property (nonatomic) float leftSubviewInset;
@property (nonatomic, retain) UIView *subview;

- (void).cxx_destruct;
- (float)chevronRightInset;
- (BOOL)hasChevron;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)keylineType;
- (void)layoutSubviews;
- (float)leftSubviewInset;
- (void)setChevronRightInset:(float)arg1;
- (void)setHasChevron:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setKeylineType:(int)arg1;
- (void)setLeftSubviewInset:(float)arg1;
- (void)setSubview:(id)arg1;
- (id)subview;

@end
