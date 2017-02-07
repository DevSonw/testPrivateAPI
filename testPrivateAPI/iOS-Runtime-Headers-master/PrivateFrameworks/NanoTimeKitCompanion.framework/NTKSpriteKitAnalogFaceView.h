/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView {
    NTKAnalogScene * _analogScene;
    UIView * _circleView;
    UIView * _handsView;
    float  _maxZoomingIconDiameter;
    SKView * _sceneHostView;
}

@property (nonatomic, retain) NTKAnalogScene *analogScene;
@property (nonatomic) UIView *circleView;
@property (nonatomic) UIView *handsView;
@property (nonatomic) float maxZoomingIconDiameter;
@property (nonatomic, readonly) UIView *sceneView;
@property (nonatomic) BOOL shouldRasterizeBackground;

+ (void)_prewarm;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleLocaleDidChange;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadLiveBackground;
- (void)_loadScene;
- (BOOL)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (void)_setContentViewsOpaque:(BOOL)arg1;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (BOOL)_shouldFreezeSceneForEditMode:(int)arg1;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_unloadSnapshotContentViews;
- (BOOL)_wantsOpportunisticLiveFaceLoading;
- (id)analogScene;
- (id)circleView;
- (id)handsView;
- (float)maxZoomingIconDiameter;
- (id)sceneView;
- (void)setAnalogScene:(id)arg1;
- (void)setCircleView:(id)arg1;
- (void)setEditView:(id)arg1;
- (void)setHandsView:(id)arg1;
- (void)setMaxZoomingIconDiameter:(float)arg1;
- (void)setShouldRasterizeBackground:(BOOL)arg1;
- (BOOL)shouldRasterizeBackground;

@end
