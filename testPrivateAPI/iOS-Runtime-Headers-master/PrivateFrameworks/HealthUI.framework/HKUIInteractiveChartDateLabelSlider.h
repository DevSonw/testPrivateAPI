/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUIInteractiveChartDateLabelSlider : UIView {
    HKDateIntervalCache * _dateIntervalCache;
    NSMutableArray * _dateLabels;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _dateRangeInsets;
    int  _granularity;
    UIColor * _labelColor;
    UIFont * _labelFont;
    NSDate * _leftDate;
    BOOL  _needsLabelUpdate;
    NSDate * _rightDate;
    float  _roughGlyphWidth;
    int  _textAlignment;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } dateRangeInsets;
@property (nonatomic) int granularity;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, readonly) NSDate *leftDate;
@property (nonatomic, readonly) NSDate *rightDate;
@property (nonatomic) int textAlignment;

- (void).cxx_destruct;
- (unsigned int)_calendarUnitForGranularity:(int)arg1;
- (id)_dateSpacingForGranularity:(int)arg1;
- (int)_formatTemplateForGranularity:(int)arg1;
- (void)_layoutDateLabelsWithOffsetMultiple:(float)arg1;
- (void)_setNeedsLabelUpdate;
- (void)_updateLabels;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })dateRangeInsets;
- (int)granularity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)labelColor;
- (id)labelFont;
- (void)layoutSubviews;
- (id)leftDate;
- (id)rightDate;
- (void)setDateRange:(id)arg1;
- (void)setDateRangeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGranularity:(int)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (int)textAlignment;

@end
