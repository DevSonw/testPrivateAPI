/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSDictionary * _axisBoundsOverrides;
    HKValueRange * _defaultAxisBounds;
    int  _portraitPrettyNumberRule;
    BOOL  _shouldExpandBoundsForOutliers;
}

@property (nonatomic, readonly) NSDictionary *axisBoundsOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HKValueRange *defaultAxisBounds;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int portraitPrettyNumberRule;
@property (nonatomic) BOOL shouldExpandBoundsForOutliers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_valueRangeForZoomLevel:(int)arg1;
- (id)axisBoundsOverrides;
- (id)defaultAxisBounds;
- (id)init;
- (int)portraitPrettyNumberRule;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(int)arg2 allowedDecimalPrecision:(int)arg3;
- (void)setPortraitPrettyNumberRule:(int)arg1;
- (void)setShouldExpandBoundsForOutliers:(BOOL)arg1;
- (BOOL)shouldExpandBoundsForOutliers;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(int)arg2;

@end
