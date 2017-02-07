/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {
    NSOperation * _afterShrinkCompletionInvocation;
    float  _angle;
    float  _diameter;
    BOOL  _didHaveText;
    CADisplayLink * _displayLink;
    id  _placeholder;
    UITextRange * _range;
    double  _shrinkStartTime;
    BOOL  _shrinking;
    double  _startTime;
    BOOL  _willInsertResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL willInsertResult;

+ (id)activeInstance;
+ (float)diameterForLineHeight:(float)arg1;
+ (int)fallbackPlaceholderLength;
+ (id)sharedInstance;
+ (float)widthForLineHeight:(float)arg1;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)advanceLanding:(id)arg1;
- (void)clearRotation;
- (void)dealloc;
- (BOOL)delegateWasEmpty;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)errorShakeDidFinish;
- (float)fadeOutDuration;
- (BOOL)hasActivePlaceholder;
- (void)hideCursor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)rotateBy:(float)arg1;
- (void)setWillInsertResult:(BOOL)arg1;
- (void)showCursor;
- (void)shrinkWithCompletion:(id)arg1;
- (void)startDisplayLinkIfNecessary;
- (void)startLandingIfNecessary;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)updatePosition;
- (BOOL)willInsertResult;

@end