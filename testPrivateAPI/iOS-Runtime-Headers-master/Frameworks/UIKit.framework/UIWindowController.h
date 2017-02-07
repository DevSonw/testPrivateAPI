/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWindowController : NSObject {
    BOOL  __interactiveTransition;
    struct CGPoint { 
        float x; 
        float y; 
    }  _beginOriginForToView;
    int  _currentTransition;
    SEL  _didEndSelector;
    struct CGPoint { 
        float x; 
        float y; 
    }  _endOriginForToView;
    UIViewController * _fromViewController;
    <UIViewControllerInteractiveTransitioning> * _interactionController;
    BOOL  _needsDidAppear;
    BOOL  _needsDidDisappear;
    BOOL  _presenting;
    id  _target;
    int  _toModalStyle;
    UIViewController * _toViewController;
    <UIViewControllerAnimatedTransitioning> * _transitionController;
    UITransitionView * _transitionView;
    UIWindow * _window;
}

@property (setter=_setInteractionController:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *_interactionController;
@property (getter=_isInteractiveTransition, setter=_setInteractiveTransition:, nonatomic) BOOL _interactiveTransition;
@property (setter=_setTransitionController:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *_transitionController;
@property (nonatomic) BOOL presenting;
@property (nonatomic, readonly) UITransitionView *transitionView;
@property (nonatomic) UIWindow *window;

+ (id)windowControllerForWindow:(id)arg1;
+ (void)windowWillBeDeallocated:(id)arg1;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })_adjustOrigin:(struct CGPoint { float x1; float x2; })arg1 givenOtherOrigin:(struct CGPoint { float x1; float x2; })arg2 forTransition:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(int)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_interactionController;
- (BOOL)_isInteractiveTransition;
- (struct CGPoint { float x1; float x2; })_originForViewController:(id)arg1 orientation:(int)arg2 actualStatusBarHeight:(float)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)_setInteractionController:(id)arg1;
- (void)_setInteractiveTransition:(BOOL)arg1;
- (void)_setTransitionController:(id)arg1;
- (id)_transitionController;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned int)arg3;
- (void)dealloc;
- (double)durationForTransition:(int)arg1;
- (BOOL)presenting;
- (void)setPresenting:(BOOL)arg1;
- (void)setWindow:(id)arg1;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 animation:(id /* block */)arg6;
- (id)transitionView;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (void)transitionViewDidCancel:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4;
- (void)transitionViewDidStart:(id)arg1;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;
- (id)window;

@end
