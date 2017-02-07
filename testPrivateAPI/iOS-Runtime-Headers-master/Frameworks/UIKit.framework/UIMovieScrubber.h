/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {
    <UIMovieScrubberDataSource> * _dataSource;
    <UIMovieScrubberDelegate> * _delegate;
    float  _edgeInset;
    BOOL  _editable;
    UIMovieScrubberEditingView * _editingView;
    UILabel * _elapsedLabel;
    UIImage * _fillImage;
    float  _hitOffset;
    UIImage * _innerShadowImage;
    UIImage * _maskImage;
    double  _maxTrimmedLength;
    double  _maximumValue;
    double  _minTrimmedLength;
    double  _minimumValue;
    UIPanGestureRecognizer * _panGestureRecognizer;
    UILabel * _remainingLabel;
    UIImage * _shadowImage;
    BOOL  _showTimeViews;
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int needsReload : 1; 
        unsigned int layoutTimeViews : 1; 
        unsigned int computeTrackRect : 1; 
        unsigned int clampingTrimRange; 
        unsigned int zoomed : 1; 
        unsigned int zoomAnimating : 1; 
        unsigned int trackIsPressed : 1; 
        unsigned int trackAnimating : 1; 
        unsigned int thumbIsVisible : 1; 
        unsigned int handleIsPressed : 1; 
        unsigned int willBeginEditing : 1; 
        unsigned int editing : 1; 
        unsigned int editingHandle; 
        unsigned int rotationDisabled; 
        unsigned int isInNavigationBar : 1; 
        unsigned int delegateValueDidChange : 1; 
        unsigned int delegateStartValueDidChange : 1; 
        unsigned int delegateEndValueDidChange : 1; 
        unsigned int delegateWillBeginRequestingThumbnails : 1; 
        unsigned int delegateDidFinishRequestingThumbnails : 1; 
        unsigned int delegateWillBeginEditing : 1; 
        unsigned int delegateDidBeginEditing : 1; 
        unsigned int delegateDidCancelEditing : 1; 
        unsigned int delegateEditingAnimationFinished : 1; 
        unsigned int delegateWidthDeltaOriginXDelta : 1; 
        unsigned int delegateDidBeginAnimatingZoom : 1; 
        unsigned int delegateDidEndAnimatingZoom : 1; 
        unsigned int delegateWillZoom : 1; 
        unsigned int dataSourceRequestThumbnailImageIsSummmary : 1; 
    }  _sliderFlags;
    UIImageView * _thumbView;
    int  _timeComponents;
    struct CGPoint { 
        float x; 
        float y; 
    }  _touchLocationWhenTrackPressBegan;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _trackRect;
    UIMovieScrubberTrackView * _trackView;
    double  _trimEndValue;
    double  _trimStartValue;
    double  _value;
    double  _zoomAnimationDelay;
    double  _zoomAnimationDuration;
    double  _zoomDelay;
}

@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentMargins;
@property (getter=isContinuous, nonatomic) BOOL continuous;
@property (nonatomic) <UIMovieScrubberDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIMovieScrubberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) float edgeInset;
@property (getter=isEditable, nonatomic) BOOL editable;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isInsideNavigationBar;
@property (nonatomic) double maximumTrimLength;
@property (nonatomic) double minimumTrimLength;
@property (nonatomic) BOOL showTimeViews;
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbIsVisible;
@property (nonatomic) double trimEndValue;
@property (nonatomic) double trimStartValue;
@property (nonatomic) double value;
@property (getter=isZoomAnimating, nonatomic, readonly) BOOL zoomAnimating;
@property (nonatomic) double zoomDelay;
@property (nonatomic, readonly) double zoomMaximumValue;
@property (nonatomic, readonly) double zoomMinimumValue;

+ (BOOL)_allowActionsToQueue;
+ (id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(BOOL)arg2 isElapsed:(BOOL)arg3;

- (void).cxx_destruct;
- (id)__distributionStatisticsForUserInteractionDuration;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_animateAfterEdit:(BOOL)arg1;
- (void)_beginTrackPressWithLocatable:(id)arg1 touchesBegan:(BOOL)arg2;
- (void)_cancelTrackPress:(BOOL)arg1;
- (void)_cancelTrackPressIfNeccessaryWithLocatable:(id)arg1;
- (void)_computeTrackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (int)_editingHandleWithLocatable:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingRectForStartTime:(double)arg1 endTime:(double)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_initSubviews;
- (void)_sendDelayedActions;
- (void)_setValue:(double)arg1 andSendAction:(BOOL)arg2;
- (void)_setZoomAnimating:(BOOL)arg1;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_trackPressWasHeld;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateThumbLocation;
- (void)_updateTimes;
- (float)_valueForLocatable:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentMargins;
- (void)animateAfterEdit;
- (void)animateCancelEdit;
- (void)beginTrackingWithLocatable:(id)arg1;
- (BOOL)cancelTouchTracking;
- (void)continueTrackingWithLocatable:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (double)duration;
- (float)edgeInset;
- (void)endTrackingWithLocatable:(id)arg1;
- (void)forceUnzoom;
- (BOOL)forceZoom;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isAnimatingValueChange;
- (BOOL)isContinuous;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isInsideNavigationBar;
- (BOOL)isZoomAnimating;
- (void)layoutSubviews;
- (double)maximumTrimLength;
- (double)minimumTrimLength;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(float)arg2 actualSizeWidthDelta:(float)arg3 originXDelta:(float)arg4 minimumVisibleValue:(float)arg5 maximumVisibleValue:(float)arg6;
- (id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
- (void)movieScrubberTrackViewDidCollapse:(id)arg1;
- (void)movieScrubberTrackViewDidExpand:(id)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewDuration:(id)arg1;
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
- (BOOL)pointInsideThumb:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)setContinuous:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEdgeInset:(float)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaximumTrimLength:(double)arg1;
- (void)setMinimumTrimLength:(double)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setShowTimeViews:(BOOL)arg1;
- (void)setThumbIsVisible:(BOOL)arg1;
- (void)setThumbnailImage:(struct CGImage { }*)arg1 forTimestamp:(id)arg2;
- (void)setTrimEndValue:(double)arg1;
- (void)setTrimStartValue:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 animated:(BOOL)arg2;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)setZoomDelay:(double)arg1;
- (BOOL)showTimeViews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)thumbIsVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForValue:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRect;
- (double)trimEndValue;
- (double)trimStartValue;
- (double)value;
- (double)zoomDelay;
- (double)zoomMaximumValue;
- (double)zoomMinimumValue;

@end