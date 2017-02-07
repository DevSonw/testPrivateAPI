/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, UISelectionInteractionAssistant, _UIKeyboardTextSelectionGestureControllerDelegate> {
    BOOL  _enabled;
    UILongPressGestureRecognizer * _forcePressGestureRecognizer;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIWebSelectionView * _selectionView;
    UITapAndAHalfRecognizer * _tapAndAHalfGestureRecognizer;
    _UIKeyboardTextSelectionController * _textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController * _textSelectionGestureController;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (nonatomic, retain) UILongPressGestureRecognizer *forcePressGestureRecognizer;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) UIWebSelection *selection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionFrame;
@property (nonatomic, retain) UIWebSelectionView *selectionView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;
@property (nonatomic, readonly) UIView *view;

- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (void)addSelectionViewIfNeeded;
- (void)clearSelection;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (void)dealloc;
- (void)didEndScrollingOrZoomingPage;
- (void)didEndScrollingOverflow;
- (void)didRotate:(id)arg1;
- (BOOL)enabled;
- (id)forcePressGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasSelectablePositionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)hideCallout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (id)initWithView:(id)arg1;
- (void)initializeSelectionView;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)longPressGestureRecognizer;
- (void)makeWebSelection:(id)arg1;
- (void)rangedMagnifierWithState:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)resignedFirstResponder;
- (void)scaleChanged;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (id)scrollView;
- (id)selection;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (id)selectionView;
- (void)setEnabled:(BOOL)arg1;
- (void)setForcePressGestureRecognizer:(id)arg1;
- (void)setGestureRecognizers;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setSelectionView:(id)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 toBegin:(BOOL)arg3;
- (void)showSelectionCommands;
- (void)tap:(id)arg1;
- (id)taskQueue;
- (id)textSelectionController;
- (void)updateSelectionRects:(BOOL)arg1;
- (id)view;
- (void)willBeginGesture;
- (void)willRotate:(id)arg1;
- (void)willStartScrollingOrZoomingPage;
- (void)willStartScrollingOverflow;

@end