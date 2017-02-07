/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventVisibilityEditItem : EKEventEditItem {
    EKEventAvailabilityEditItem * _availabilityEditItem;
    unsigned int  _lastKnownNumberOfSubitems;
    EKEventPrivacyLevelInlineEditItem * _privacyLevelEditItem;
    EKEventEditItem * _subitemOfLastDetailViewControllerRequested;
}

- (void).cxx_destruct;
- (id)_editItemForIndex:(unsigned int)arg1;
- (id)_lowestEditItem;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (float)footerHeightForWidth:(float)arg1;
- (id)footerTitle;
- (id)footerView;
- (BOOL)forceTableReloadOnSave;
- (id)init;
- (unsigned int)numberOfSubitems;
- (BOOL)requiresReconfigurationOnSave;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1;

@end
