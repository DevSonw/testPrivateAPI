/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPlatterMenuDynamicsController : NSObject <_UIPlatterMenuPanningTransformerDelegate> {
    UIDynamicAnimator * _animator;
    UIView * _containerView;
    <_UIPlatterMenuDynamicsControllerDelegate> * _delegate;
    int  _didPresentCount;
    UIAttachmentBehavior * _gestureAttachmentBehavior;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialTouchPoint;
    BOOL  _isCurrentlyUnderDirectManipulation;
    BOOL  _leadingSwipeActionViewSelected;
    float  _leadingSwipeEdgeMultiplier;
    _UIPlatterMenuSnapBehavior * _menuDismissedSnapBehavior;
    UIDynamicItemBehavior * _menuItemBehavior;
    _UIPlatterMenuSnapBehavior * _menuPresentedSnapBehavior;
    UIAttachmentBehavior * _menuVerticalLockAttachment;
    UIView * _menuView;
    UIDynamicItemBehavior * _noRotationBehavior;
    _UIDynamicItemObservingBehavior * _observingBehavior;
    _UIPlatterMenuPanningTransformer * _panningLockTransformer;
    UIDynamicItemBehavior * _platterItemBehavior;
    UIAttachmentBehavior * _platterMenuAttachmentBehavior;
    UICollisionBehavior * _platterMenuCollisionBounds;
    UIAttachmentBehavior * _platterMenuSlidingAttachmentBehavior;
    _UIPlatterMenuSnapBehavior * _platterSnapBehavior;
    UIView * _platterView;
    int  _state;
    _UIFeedbackStatesBehavior * _swipeFeedbackBehavior;
    BOOL  _trailingSwipeActionViewSelected;
    float  _trailingSwipeEdgeMultiplier;
}

@property (nonatomic, retain) UIDynamicAnimator *animator;
@property (nonatomic) UIView *containerView;
@property (nonatomic, readonly) struct CGVector { float x1; float x2; } currentTranslation;
@property (nonatomic, readonly) struct CGVector { float x1; float x2; } currentVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPlatterMenuDynamicsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int didPresentCount;
@property (nonatomic, retain) UIAttachmentBehavior *gestureAttachmentBehavior;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { float x1; float x2; } initialTouchPoint;
@property (nonatomic) BOOL isCurrentlyUnderDirectManipulation;
@property (nonatomic) BOOL leadingSwipeActionViewSelected;
@property (nonatomic) float leadingSwipeEdgeMultiplier;
@property (nonatomic, retain) _UIPlatterMenuSnapBehavior *menuDismissedSnapBehavior;
@property (nonatomic, retain) UIDynamicItemBehavior *menuItemBehavior;
@property (nonatomic, retain) _UIPlatterMenuSnapBehavior *menuPresentedSnapBehavior;
@property (nonatomic, retain) UIAttachmentBehavior *menuVerticalLockAttachment;
@property (nonatomic) UIView *menuView;
@property (nonatomic, retain) UIDynamicItemBehavior *noRotationBehavior;
@property (nonatomic, retain) _UIDynamicItemObservingBehavior *observingBehavior;
@property (nonatomic, retain) _UIPlatterMenuPanningTransformer *panningLockTransformer;
@property (nonatomic, retain) UIDynamicItemBehavior *platterItemBehavior;
@property (nonatomic, retain) UIAttachmentBehavior *platterMenuAttachmentBehavior;
@property (nonatomic, retain) UICollisionBehavior *platterMenuCollisionBounds;
@property (nonatomic, retain) UIAttachmentBehavior *platterMenuSlidingAttachmentBehavior;
@property (nonatomic, retain) _UIPlatterMenuSnapBehavior *platterSnapBehavior;
@property (nonatomic) UIView *platterView;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIFeedbackStatesBehavior *swipeFeedbackBehavior;
@property (nonatomic) BOOL trailingSwipeActionViewSelected;
@property (nonatomic) float trailingSwipeEdgeMultiplier;

- (void).cxx_destruct;
- (void)_activateFeedbackIfNeeded;
- (void)_animateToPlatterPresentedWithVelocity:(struct CGVector { float x1; float x2; })arg1;
- (void)_beginInYLockedStatePresented;
- (void)_configureAnimator;
- (void)_configureFeedbackBehavior;
- (void)_deactivateFeedbackIfNeeded;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)arg1 finalSelectionState:(BOOL)arg2;
- (BOOL)_isPlatterInYLockedPosition;
- (void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
- (int)_stateForPosition:(struct CGPoint { float x1; float x2; })arg1 offset:(struct CGVector { float x1; float x2; })arg2 velocity:(struct CGVector { float x1; float x2; })arg3;
- (void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)addBehaviorIfNotPresent:(id)arg1;
- (id)animator;
- (void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(int)arg3;
- (struct CGPoint { float x1; float x2; })centerForCurrentPlatterPosition;
- (struct CGPoint { float x1; float x2; })centerForMenuPresentedRelativeToCurrentPlatter;
- (id)containerView;
- (struct CGVector { float x1; float x2; })currentTranslation;
- (struct CGVector { float x1; float x2; })currentVelocity;
- (void)dealloc;
- (id)delegate;
- (void)didBeginPanningWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)didEndPanningWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)didPanWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)didPresentCount;
- (id)gestureAttachmentBehavior;
- (BOOL)hasBeenPresented;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4;
- (struct CGPoint { float x1; float x2; })initialTouchPoint;
- (BOOL)isCurrentlyUnderDirectManipulation;
- (BOOL)isDefaultAnimatorBehavior:(id)arg1;
- (BOOL)isMenuPresented;
- (BOOL)isMenuPresenting;
- (BOOL)isSelectingSwipeAction;
- (BOOL)leadingSwipeActionViewSelected;
- (float)leadingSwipeEdgeMultiplier;
- (void)lockIntoYAxis;
- (struct CGPoint { float x1; float x2; })menuCenter;
- (id)menuDismissedSnapBehavior;
- (id)menuItemBehavior;
- (id)menuPresentedSnapBehavior;
- (id)menuVerticalLockAttachment;
- (id)menuView;
- (struct CGVector { float x1; float x2; })modifiedOffsetForPosition:(struct CGPoint { float x1; float x2; })arg1 offset:(struct CGVector { float x1; float x2; })arg2 touchPosition:(struct CGPoint { float x1; float x2; })arg3 axisLock:(int)arg4;
- (id)noRotationBehavior;
- (id)observingBehavior;
- (id)panningLockTransformer;
- (void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(struct CGPoint { float x1; float x2; })arg2 offsetFromPrevious:(struct CGVector { float x1; float x2; })arg3 velocity:(struct CGVector { float x1; float x2; })arg4;
- (void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)panningTransformer:(id)arg1 didPanToTransformedPosition:(struct CGPoint { float x1; float x2; })arg2 offsetFromPrevious:(struct CGVector { float x1; float x2; })arg3 touchPosition:(struct CGPoint { float x1; float x2; })arg4 velocity:(struct CGVector { float x1; float x2; })arg5 didChangeAxis:(BOOL)arg6 axisLock:(int)arg7;
- (void)performActionsAndEnterState:(int)arg1;
- (void)performActionsAndEnterState:(int)arg1 velocity:(struct CGVector { float x1; float x2; })arg2 underDirectManipulation:(BOOL)arg3;
- (struct CGPoint { float x1; float x2; })platterCenter;
- (id)platterItemBehavior;
- (id)platterMenuAttachmentBehavior;
- (id)platterMenuCollisionBounds;
- (id)platterMenuSlidingAttachmentBehavior;
- (id)platterSnapBehavior;
- (id)platterView;
- (void)resetAnimator;
- (void)resetAnimatorToDefaultBehaviors;
- (void)setAnimator:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidPresentCount:(int)arg1;
- (void)setGestureAttachmentBehavior:(id)arg1;
- (void)setInitialTouchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setIsCurrentlyUnderDirectManipulation:(BOOL)arg1;
- (void)setLeadingSwipeActionViewSelected:(BOOL)arg1;
- (void)setLeadingSwipeEdgeMultiplier:(float)arg1;
- (void)setMenuDismissedSnapBehavior:(id)arg1;
- (void)setMenuItemBehavior:(id)arg1;
- (void)setMenuPresentedSnapBehavior:(id)arg1;
- (void)setMenuVerticalLockAttachment:(id)arg1;
- (void)setMenuView:(id)arg1;
- (void)setNoRotationBehavior:(id)arg1;
- (void)setObservingBehavior:(id)arg1;
- (void)setPanningLockTransformer:(id)arg1;
- (void)setPlatterItemBehavior:(id)arg1;
- (void)setPlatterMenuAttachmentBehavior:(id)arg1;
- (void)setPlatterMenuCollisionBounds:(id)arg1;
- (void)setPlatterMenuSlidingAttachmentBehavior:(id)arg1;
- (void)setPlatterSnapBehavior:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSwipeFeedbackBehavior:(id)arg1;
- (void)setTrailingSwipeActionViewSelected:(BOOL)arg1;
- (void)setTrailingSwipeEdgeMultiplier:(float)arg1;
- (int)state;
- (void)stopObservingBehavior;
- (id)swipeFeedbackBehavior;
- (void)toggleAnimatorDebugState;
- (BOOL)trailingSwipeActionViewSelected;
- (float)trailingSwipeEdgeMultiplier;

@end
