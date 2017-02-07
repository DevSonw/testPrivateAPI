/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {
    UILabel * _descriptionLabel;
    UIView * _footerView;
    BOOL  _published;
    UILabel * _publishingLabel;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *footerView;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL published;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_publishChanged:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (id)calendarTitle;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (float)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (void)layoutForWidth:(float)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (unsigned int)numberOfSubitems;
- (id)pubishURL;
- (BOOL)published;
- (void)reset;
- (void)setPublished:(BOOL)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;

@end
