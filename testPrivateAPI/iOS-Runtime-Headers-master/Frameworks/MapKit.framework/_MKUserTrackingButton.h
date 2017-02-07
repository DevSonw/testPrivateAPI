/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {
    _MKUserTrackingButtonController * _controller;
    NSMutableDictionary * _customImageEdgeInsets;
    NSMutableDictionary * _customImages;
    NSMutableDictionary * _customLandscapeImagePhones;
    BOOL  _explicitlyEnabled;
    BOOL  _inMiniBar;
    BOOL  _internallyEnabled;
    BOOL  _selectsWhenTracking;
}

@property (nonatomic, readonly) unsigned int behavior;
@property (nonatomic, readonly) _MKUserTrackingButtonController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL inMiniBar;
@property (nonatomic, retain) MKMapView *mapView;
@property (getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:, nonatomic) BOOL selectsWhenTracking;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MKUserTrackingView> *userTrackingView;

+ (Class)_activityIndicatorClass;
+ (id)buttonWithMapView:(id)arg1;
+ (id)buttonWithUserTrackingView:(id)arg1;
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(int)arg2;

- (void).cxx_destruct;
- (int)_activityIndicatorStyle;
- (id)_defaultImageForUserTrackingMode:(int)arg1 controlState:(unsigned int)arg2;
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(int)arg1 controlState:(unsigned int)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_imageEdgeInsetsForUserTrackingMode:(int)arg1;
- (id)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
- (id)_imageForUserTrackingMode:(int)arg1 controlState:(unsigned int)arg2;
- (BOOL)_isHighlightedForState:(int)arg1;
- (id)_landscapeImagePhoneForUserTrackingMode:(int)arg1 controlState:(unsigned int)arg2;
- (void)_repositionViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectedIndicatorBounds;
- (BOOL)_selectsWhenTracking;
- (void)_setImage:(id)arg1 forUserTrackingMode:(int)arg2 controlState:(unsigned int)arg3;
- (void)_setImageEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 forUserTrackingMode:(int)arg2;
- (void)_setInternallyEnabled:(BOOL)arg1;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(int)arg2 controlState:(unsigned int)arg3;
- (void)_setSelectsWhenTracking:(BOOL)arg1;
- (void)_setState:(int)arg1;
- (int)_state;
- (void)_updateForState:(int)arg1;
- (unsigned int)behavior;
- (id)controller;
- (BOOL)inMiniBar;
- (id)mapView;
- (void)setEnabled:(BOOL)arg1;
- (void)setMapView:(id)arg1;
- (void)setUserTrackingView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateForMiniBarState:(BOOL)arg1;
- (id)userTrackingView;

@end