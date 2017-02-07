/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardDetailsView : UIView {
    UITextView * _detailsTextView;
    UILabel * _titleLabel;
}

@property (retain) UITextView *detailsTextView;
@property unsigned int maximumNumberOfLines;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (float)currentTextViewHeight;
- (id)detailsTextView;
- (float)idealTextViewHeightForCurrentWidth;
- (id)initWithTitle:(id)arg1 details:(id)arg2 controller:(id)arg3;
- (unsigned int)maximumNumberOfLines;
- (void)setDetailsTextView:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned int)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
