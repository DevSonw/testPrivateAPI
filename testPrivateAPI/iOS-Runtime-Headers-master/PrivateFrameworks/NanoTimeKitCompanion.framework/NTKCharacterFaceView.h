/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterFaceView : NTKFaceView <UIGestureRecognizerDelegate> {
    NTKCharacterTimeView * _characterTimeView;
    UIView * _circleView;
    NTKUtilityComplicationFactory * _complicationFactory;
    UIView * _handsView;
    unsigned int  _isContentLoaded;
    int  _prevDataMode;
    UITapGestureRecognizer * _timeTapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)_prewarm;
+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(int)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyDataModeFromOldDataMode:(int)arg1;
- (void)_applyForegroundAlphaForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationFactory;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_faceTapped:(id)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)_supportsTimeScrubbing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tapToSpeakRect;
- (void)_unloadSnapshotContentViews;
- (BOOL)_usesCustomZoom;
- (int)_utilitySlotForSlot:(id)arg1;
- (float)_verticalPaddingForStatusBar;
- (void)applyToForegroundZoomFraction:(float)arg1 faceScale:(float)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
