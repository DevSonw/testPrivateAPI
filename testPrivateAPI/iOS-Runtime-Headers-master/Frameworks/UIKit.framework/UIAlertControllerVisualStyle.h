/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyle : NSObject {
    UIAlertControllerDescriptor * _descriptor;
    int  _forcedInterfaceIdiom;
    UIInterfaceActionVisualStyle * _interfaceActionVisualStyle;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, retain) UIAlertControllerDescriptor *descriptor;
@property (nonatomic) int forcedInterfaceIdiom;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *interfaceActionVisualStyle;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (int)interfaceActionPresentationStyle;

- (void).cxx_destruct;
- (id)_detailMessageFont;
- (id)_keyCommandInputForCancelAction;
- (float)_marginAboveDetailMessageFirstBaseline;
- (void)_reloadInterfaceActionVisualStyle;
- (float)_scaledMarginAboveDetailMessageFirstBaseline;
- (float)_scaledMarginAboveMessageLabelFirstBaseline;
- (float)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1;
- (float)_scaledMarginBelowLastLabelLastBaseline;
- (float)_scaledMarginBelowMessageLabelLastBaseline;
- (float)_scaledMarginBelowTitleLabelLastBaseline;
- (BOOL)_shouldReverseActions;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })actionImageMarginForAction;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })actionSequenceEdgeInsets;
- (float)actionWidthForMinimumActionWidth:(float)arg1;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(id /* block */)arg5;
- (struct CGSize { float x1; float x2; })collectionViewOutsetSize;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (float)contentHorizontalMargin;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)defaultActionFont;
- (id)descriptor;
- (id)dimmingViewForAlertController:(id)arg1;
- (int)forcedInterfaceIdiom;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (id)init;
- (id)interactionProgressForTransitionOfType:(int)arg1 forAlertController:(id)arg2;
- (id)interfaceActionVisualStyle;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (BOOL)isEqual:(id)arg1;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginBelowTitleLabelLastBaseline;
- (float)maximumHeightForDisplayOnScreen:(id)arg1;
- (int)maximumNumberOfLinesInMessageLabel;
- (int)maximumNumberOfLinesInTitleLabel;
- (float)maximumWidth;
- (float)maximumWidthForTitleAndMessageContentView;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (struct CGSize { float x1; float x2; })minimumActionContentSize;
- (float)minimumWidth;
- (int)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (id)preferredActionFont;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (id)regularActionFont;
- (void)setDescriptor:(id)arg1;
- (void)setForcedInterfaceIdiom:(int)arg1;
- (void)setTraitCollection:(id)arg1;
- (BOOL)shouldOccludeDuringPresentation;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textFieldContentInset;
- (float)textFieldHorizontalMargin;
- (id)tintColorForAlertController:(id)arg1;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (id)traitCollection;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;
- (BOOL)transitionOfType:(int)arg1 shouldBeInteractiveForAlertController:(id)arg2;

@end