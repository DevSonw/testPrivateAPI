/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLongLookTransitionDelegate : NSObject <NCLongLookAnimatorDelegate, NCViewControllerTransitioningDelegate> {
    BOOL  _interactive;
    NCLongLookPresentationController * _longLookPresentationController;
    NCNotificationViewController * _sourceShortLookVC;
    int  _transitionInitiator;
    <NCLongLookTransitionDelegateObserver> * _transitioningDelegateObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isInteractive, nonatomic, readonly) BOOL interactive;
@property (nonatomic, readonly) <NCLongLookAnimator> *longLookAnimator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transitionInitiator;
@property (nonatomic) <NCLongLookTransitionDelegateObserver> *transitioningDelegateObserver;

- (void).cxx_destruct;
- (id)_longLookPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_notifyObserverOfTransitionBegin:(BOOL)arg1 withAnimator:(id)arg2 completed:(BOOL)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initForInteractiveTransition:(BOOL)arg1 withInitiator:(int)arg2 andSourceShortLookViewController:(id)arg3;
- (id)interactionControllerForPresentation:(id)arg1;
- (BOOL)isInteractive;
- (id)longLookAnimator;
- (void)longLookAnimator:(id)arg1 animationEnded:(BOOL)arg2;
- (void)longLookAnimatorAnimationBegan:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setTransitioningDelegateObserver:(id)arg1;
- (void)transitionAnimator:(id)arg1 didCommitToTransitionWithCoordinator:(id)arg2;
- (int)transitionInitiator;
- (id)transitioningDelegateObserver;

@end
