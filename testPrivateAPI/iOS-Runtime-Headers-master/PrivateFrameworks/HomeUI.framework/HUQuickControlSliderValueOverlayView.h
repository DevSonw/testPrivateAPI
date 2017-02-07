/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSliderValueOverlayView : UIView {
    BOOL  _off;
    BOOL  _showsSecondGrabber;
}

@property (nonatomic, readonly) CAShapeLayer *layer;
@property (getter=isOff, nonatomic) BOOL off;
@property (nonatomic) BOOL showsSecondGrabber;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBlendMode;
- (void)_updateShape;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOff;
- (void)layoutSubviews;
- (void)setOff:(BOOL)arg1;
- (void)setShowsSecondGrabber:(BOOL)arg1;
- (BOOL)showsSecondGrabber;

@end
