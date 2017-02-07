/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    double  _duration;
    BOOL  _interactive;
    float  _interactiveProgress;
    UIPercentDrivenInteractiveTransition * _interactiveTransition;
    BOOL  _startedInteractively;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned int hash;
@property (getter=isInteractive, setter=_setInteractive:, nonatomic) BOOL interactive;
@property (setter=_setInteractiveProgress:, nonatomic) float interactiveProgress;
@property (nonatomic) BOOL startedInteractively;
@property (readonly) Class superclass;

+ (id)interactionControllerForAnimationController:(id)arg1;

- (void).cxx_destruct;
- (id)_newInteractiveTransition;
- (void)_setInteractive:(BOOL)arg1;
- (void)_setInteractiveProgress:(float)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)arg1;
- (id)containerView;
- (double)duration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFromViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalToViewFrame;
- (void)finishInteractiveTransition;
- (id)fromViewController;
- (id)initWithDuration:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFromViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialToViewFrame;
- (float)interactiveProgress;
- (id)interactiveTransition;
- (BOOL)isInteractive;
- (void)setStartedInteractively:(BOOL)arg1;
- (BOOL)startedInteractively;
- (id)toViewController;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransitionProgress:(float)arg1;

@end
