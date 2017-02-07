/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerActionView : UIView <UIAlertActionViewRepresentation_Internal, UIGestureRecognizerDelegate> {
    UIAlertAction * _action;
    UIAlertController * _alertController;
    NSLayoutConstraint * _checkToMarginConstraint;
    UIImageView * _checkView;
    NSArray * _contentViewControllerConstraints;
    UIView * _contentViewControllerContainerView;
    UILabel * _descriptiveLabel;
    NSLayoutConstraint * _descriptiveLabelTrailingToContainerCenterConstraint;
    NSLayoutConstraint * _descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint * _descriptiveLabelWidthConstraint;
    BOOL  _hasDescriptiveText;
    NSArray * _havingDescriptiveLabelConstraints;
    BOOL  _highlighted;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewBottomConstraint;
    NSLayoutConstraint * _imageViewTopConstraint;
    UILabel * _label;
    NSLayoutConstraint * _labelCenterLeadingConstraint;
    NSLayoutConstraint * _labelContainerCenterXConstraint;
    NSLayoutConstraint * _labelContainerLeadingConstraint;
    NSLayoutConstraint * _labelContainerLeadingPinConstraint;
    NSLayoutConstraint * _labelContainerTrailingConstraint;
    NSLayoutConstraint * _labelContainerTrailingPinConstraint;
    UIView * _labelContainerView;
    NSLayoutConstraint * _labelWidthConstraint;
    NSLayoutConstraint * _marginToImageConstraint;
    _UIAlertControllerActionViewMetrics * _metrics;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSArray * _notHavingDescriptiveLabelConstraints;
    UIAlertControllerVisualStyle * _visualStyle;
}

@property (nonatomic, copy) UIAlertAction *action;
@property (nonatomic) UIAlertController *alertController;
@property (readonly) float currentDescriptiveLabelTextWidth;
@property (readonly) float currentLabelTextWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic, readonly) BOOL highlighted;
@property (retain) NSLayoutConstraint *labelContainerCenterXConstraint;
@property (retain) NSLayoutConstraint *labelContainerLeadingPinConstraint;
@property (retain) NSLayoutConstraint *labelContainerTrailingPinConstraint;
@property (readonly) Class superclass;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2;
- (void)_action:(id)arg1 changedToChecked:(BOOL)arg2;
- (void)_action:(id)arg1 changedToEnabled:(BOOL)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(int)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_buildCheckViewConstraints;
- (void)_buildConstraints;
- (void)_buildContentViewControllerContainerConstraints;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_buildImageViewConstraints;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (void)_contentSizeChanged;
- (int)_effectiveTitleTextAlignment;
- (id)_interfaceActionViewState;
- (void)_loadCheckView;
- (void)_loadContentViewControllerContainerViewIfNecessary;
- (void)_loadContentViewControllerView;
- (void)_loadDescriptiveLabel;
- (void)_loadImageView;
- (void)_prepareConstraintsForHavingDescriptiveText:(BOOL)arg1;
- (void)_recomputeColors;
- (void)_removeContentViewControllerView;
- (void)_updateCheckImageView;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateDescriptiveText;
- (void)_updateHavingDescriptiveLabelConstraints;
- (void)_updateImageMargins;
- (void)_updateImageView;
- (void)_updateImageViewAttributes;
- (void)_updateLabelAttributes;
- (void)_updateLabelContainerConstraints;
- (void)_updateMinimumHeight;
- (void)_updateStyle;
- (void)_updateTextAlignmentForHavingDescriptiveText:(BOOL)arg1 titleTextAlignment:(int)arg2;
- (id)action;
- (id)alertController;
- (void)applyMetrics:(id)arg1;
- (BOOL)canBecomeFocused;
- (float)currentDescriptiveLabelTextWidth;
- (float)currentLabelTextWidth;
- (void)dealloc;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (id)labelContainerCenterXConstraint;
- (id)labelContainerLeadingPinConstraint;
- (id)labelContainerTrailingPinConstraint;
- (void)setAction:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLabelContainerCenterXConstraint:(id)arg1;
- (void)setLabelContainerLeadingPinConstraint:(id)arg1;
- (void)setLabelContainerTrailingPinConstraint:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)tintColor;
- (void)tintColorDidChange;
- (void)underlyingInterfaceActionRepresentationDidChange;
- (id)visualStyle;

@end