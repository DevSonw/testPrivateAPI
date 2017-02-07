/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMultiPaneScrollingContext : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _previousContentInsetAdditions;
    struct CGPoint { 
        float x; 
        float y; 
    }  _previousContentOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _previousContentScrollInsetAdditions;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _previousExternalContentInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _previousMaximumContentSizeScrollIndicatorInsetAdditions;
    float  _previousMaximumHeaderHeight;
    float  _previousStabilizingBottomAdditions;
    int  _snapDecelerationVeloctiyOverrideState;
    float  _snapDownContentOffset;
    int  _snapState;
    float  _snapUpContentOffset;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } previousContentInsetAdditions;
@property (nonatomic) struct CGPoint { float x1; float x2; } previousContentOffset;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } previousContentScrollInsetAdditions;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } previousExternalContentInset;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } previousMaximumContentSizeScrollIndicatorInsetAdditions;
@property (nonatomic) float previousMaximumHeaderHeight;
@property (nonatomic) float previousStabilizingBottomAdditions;
@property (nonatomic) int snapDecelerationVeloctiyOverrideState;
@property (nonatomic) float snapDownContentOffset;
@property (nonatomic) int snapState;
@property (nonatomic) float snapUpContentOffset;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })previousContentInsetAdditions;
- (struct CGPoint { float x1; float x2; })previousContentOffset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })previousContentScrollInsetAdditions;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })previousExternalContentInset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })previousMaximumContentSizeScrollIndicatorInsetAdditions;
- (float)previousMaximumHeaderHeight;
- (float)previousStabilizingBottomAdditions;
- (void)setPreviousContentInsetAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreviousContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPreviousContentScrollInsetAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreviousExternalContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreviousMaximumContentSizeScrollIndicatorInsetAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreviousMaximumHeaderHeight:(float)arg1;
- (void)setPreviousStabilizingBottomAdditions:(float)arg1;
- (void)setSnapDecelerationVeloctiyOverrideState:(int)arg1;
- (void)setSnapDownContentOffset:(float)arg1;
- (void)setSnapState:(int)arg1;
- (void)setSnapUpContentOffset:(float)arg1;
- (int)snapDecelerationVeloctiyOverrideState;
- (float)snapDownContentOffset;
- (int)snapState;
- (float)snapUpContentOffset;

@end
