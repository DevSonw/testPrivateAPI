/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

+ (int)interfaceActionPresentationStyle;

- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)defaultActionBackgroundColorWhenSeparate;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginBelowTitleLabelLastBaseline;
- (float)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (int)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;

@end
