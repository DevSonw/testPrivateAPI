/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface _NCWidgetViewControllerView : SBUISizeObservingView <UIScrollViewDelayedTouchesBeganGestureRecognizerClient>

@property (getter=_canScrollX, nonatomic, readonly) BOOL canScrollX;
@property (getter=_canScrollY, nonatomic, readonly) BOOL canScrollY;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BOOL delaysContentTouches;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_scrollHysteresis, nonatomic, readonly) float scrollHysteresis;
@property (readonly) Class superclass;
@property (getter=_touchDelayForScrollDetection, nonatomic, readonly) double touchDelayForScrollDetection;

- (BOOL)_canScrollX;
- (BOOL)_canScrollY;
- (float)_scrollHysteresis;
- (double)_touchDelayForScrollDetection;
- (BOOL)delaysContentTouches;
- (void)didMoveToWindow;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;

@end