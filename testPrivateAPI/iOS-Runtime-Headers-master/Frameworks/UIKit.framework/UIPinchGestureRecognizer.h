/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    BOOL  __enableNestedHysteresis;
    struct CGPoint { 
        float x; 
        float y; 
    }  _anchorSceneReferencePoint;
    unsigned int  _endsOnSingleTouch;
    float  _hysteresis;
    float  _initialTouchDistance;
    float  _initialTouchScale;
    double  _lastTouchTime;
    unsigned int  _loggedPinchStatistic;
    unsigned int  _loggedZoomStatistic;
    float  _previousVelocity;
    float  _scaleThreshold;
    UITouch * _touches;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transform;
    id  _transformAnalyzer;
    float  _velocity;
}

@property (nonatomic) BOOL _enableNestedHysteresis;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } anchorPoint;
@property (getter=_hysteresis, setter=_setHysteresis:, nonatomic) float hysteresis;
@property (nonatomic) float scale;
@property (nonatomic) float scaleThreshold;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property (nonatomic, readonly) float velocity;

+ (BOOL)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (BOOL)_enableNestedHysteresis;
- (BOOL)_endsOnSingleTouch;
- (float)_hysteresis;
- (void)_logStatisticsForScale:(float)arg1;
- (void)_resetGestureRecognizer;
- (void)_setEndsOnSingleTouch:(BOOL)arg1;
- (void)_setHysteresis:(float)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (float)scale;
- (float)scaleThreshold;
- (void)setScale:(float)arg1;
- (void)setScaleThreshold:(float)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)set_enableNestedHysteresis:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (float)velocity;

@end