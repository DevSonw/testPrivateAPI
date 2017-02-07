/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerView : UIView <NSCoding, UIPickerTableViewContainerDelegate, UIPickerViewScrollTesting, UITableViewDataSource, UITableViewDelegate> {
    UIView * _backgroundView;
    UIImageView * _bottomGradient;
    UIView * _bottomLineView;
    _UIPickerViewTestParameters * _currentTestParameters;
    <UIPickerViewDataSource> * _dataSource;
    <UIPickerViewDelegate> * _delegate;
    NSMutableArray * _dividers;
    BOOL  _enabled;
    UIView * _foregroundView;
    BOOL  _magnifierEnabled;
    UIColor * _magnifierLineColor;
    CALayer * _maskGradientLayer;
    int  _numberOfComponents;
    struct { 
        unsigned int needsLayout : 1; 
        unsigned int delegateRespondsToNumberOfComponentsInPickerView : 1; 
        unsigned int delegateRespondsToNumberOfRowsInComponent : 1; 
        unsigned int delegateRespondsToDidSelectRow : 1; 
        unsigned int delegateRespondsToViewForRow : 1; 
        unsigned int delegateRespondsToTitleForRow : 1; 
        unsigned int delegateRespondsToAttributedTitleForRow : 1; 
        unsigned int delegateRespondsToWidthForComponent : 1; 
        unsigned int delegateRespondsToRowHeightForComponent : 1; 
        unsigned int showsSelectionBar : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowSelectingCells : 1; 
        unsigned int soundsDisabled : 1; 
        unsigned int usesCheckedSelection : 1; 
        unsigned int skipsBackground : 1; 
        unsigned int isInLayoutSubviews : 1; 
    }  _pickerViewFlags;
    _UIFeedbackRetargetBehavior * _retargetBehavior;
    NSMutableArray * _selectionBars;
    NSMutableArray * _tables;
    UIColor * _textColor;
    UIColor * _textShadowColor;
    UIView * _topFrame;
    UIImageView * _topGradient;
    UIView * _topLineView;
    BOOL  _usesModernStyle;
}

@property (setter=_setMagnifierEnabled:, nonatomic) BOOL _magnifierEnabled;
@property (nonatomic) <UIPickerViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_enabled, setter=_setEnabled:, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (getter=_highlightColor, setter=_setHighlightColor:, nonatomic, retain) UIColor *highlightColor;
@property (getter=_magnifierLineColor, setter=_setMagnifierLineColor:, nonatomic, retain) UIColor *magnifierLineColor;
@property (nonatomic, readonly) int numberOfComponents;
@property (getter=_retargetBehavior, setter=_setRetargetBehavior:, nonatomic, retain) _UIFeedbackRetargetBehavior *retargetBehavior;
@property (nonatomic) BOOL showsSelectionIndicator;
@property (readonly) Class superclass;
@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *textColor;
@property (getter=_textShadowColor, setter=_setTextShadowColor:, nonatomic, retain) UIColor *textShadowColor;
@property (getter=_usesModernStyle, setter=_setUsesModernStyle:) BOOL usesModernStyle;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (struct CGSize { float x1; float x2; })defaultSizeForCurrentOrientation;
+ (struct CGSize { float x1; float x2; })defaultSizeForMainScreenTraits;
+ (struct CGSize { float x1; float x2; })defaultSizeForTraits:(id)arg1;
+ (void)initialize;
+ (struct CGSize { float x1; float x2; })sizeForMainScreenTraitsThatFits:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forTraits:(id)arg2;

- (void).cxx_destruct;
- (void)_UIAppearance_setMagnifierLineColor:(id)arg1;
- (void)_UIAppearance_setTextColor:(id)arg1;
- (void)__scalarStatisticsForUserValueChangedEvent;
- (void)_addMagnifierLinesForRowHeight:(float)arg1;
- (void)_completeCurrentTest;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize { float x1; float x2; })_contentSizeForRow:(int)arg1 inComponent:(int)arg2;
- (id)_contentView;
- (id)_createColumnWithTableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rowHeight:(float)arg2;
- (id)_createTableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forComponent:(int)arg2;
- (id)_createViewForPickerPiece:(int)arg1;
- (id)_delegateAttributedTitleForRow:(int)arg1 forComponent:(int)arg2;
- (int)_delegateNumberOfComponents;
- (int)_delegateNumberOfRowsInComponent:(int)arg1;
- (float)_delegateRowHeightForComponent:(int)arg1;
- (id)_delegateTitleForRow:(int)arg1 forComponent:(int)arg2;
- (float)_delegateWidthForComponent:(int)arg1 ofCount:(int)arg2 withSizeLeft:(float)arg3;
- (BOOL)_drawsBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_effectiveTableViewFrameForColumn:(int)arg1;
- (BOOL)_enabled;
- (BOOL)_forceTextAlignmentCentered;
- (id)_highlightColor;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isLandscapeOrientation;
- (void)_iterateOnCurrentTest;
- (BOOL)_magnifierEnabled;
- (id)_magnifierLineColor;
- (BOOL)_needsLayout;
- (void)_noteScrollingFinishedForComponent:(int)arg1;
- (id)_orientationImageSuffix;
- (void)_performScrollTest:(id)arg1 withIterations:(int)arg2 rowsToScroll:(int)arg3 inComponent:(int)arg4;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_perspectiveTransform;
- (id)_popoverSuffix;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetSelectionOfTables;
- (id)_retargetBehavior;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionBarRectForHeight:(float)arg1;
- (id)_selectionBarSuffix;
- (void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
- (void)_sendSelectionChangedForComponent:(int)arg1 notify:(BOOL)arg2;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(BOOL)arg2;
- (void)_setColumnView:(id)arg1 enabled:(BOOL)arg2;
- (void)_setDrawsBackground:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setHighlightColor:(id)arg1;
- (void)_setMagnifierEnabled:(BOOL)arg1;
- (void)_setMagnifierLineColor:(id)arg1;
- (void)_setRetargetBehavior:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextShadowColor:(id)arg1;
- (void)_setUsesCheckedSelection:(BOOL)arg1;
- (void)_setUsesModernStyle:(BOOL)arg1;
- (BOOL)_shouldDrawWithModernStyle;
- (struct CGSize { float x1; float x2; })_sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_soundsEnabled;
- (float)_tableRowHeight;
- (id)_textColor;
- (id)_textShadowColor;
- (void)_updateSelectedRows;
- (void)_updateWithOldSize:(struct CGSize { float x1; float x2; })arg1 newSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)_usesCheckSelection;
- (BOOL)_usesCheckedSelection;
- (BOOL)_usesModernStyle;
- (float)_wheelShift;
- (void)_willPlayClickSound;
- (BOOL)allowsMultipleSelection;
- (int)columnForTableView:(id)arg1;
- (id)createDividerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })defaultSize;
- (id)delegate;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageForPickerPiece:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElementByDefault;
- (void)layoutSubviews;
- (int)numberOfColumns;
- (int)numberOfComponents;
- (int)numberOfRowsInColumn:(int)arg1;
- (int)numberOfRowsInComponent:(int)arg1;
- (id)pickerImageNamePrefix;
- (void)reload;
- (void)reloadAllComponents;
- (void)reloadAllPickerPieces;
- (void)reloadComponent:(int)arg1;
- (void)reloadData;
- (void)reloadDataForColumn:(int)arg1;
- (struct CGSize { float x1; float x2; })rowSizeForComponent:(int)arg1;
- (double)scrollAnimationDuration;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(BOOL)arg3;
- (void)selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3;
- (int)selectedRowForColumn:(int)arg1;
- (int)selectedRowInComponent:(int)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setShowsSelectionIndicator:(BOOL)arg1;
- (void)setSoundsEnabled:(BOOL)arg1;
- (BOOL)showsSelectionIndicator;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableViewForColumn:(int)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForRow:(int)arg1 forComponent:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleRowsForColumn:(int)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
