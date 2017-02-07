/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate> {
    PXUIButton * __deleteButton;
    BOOL  __showsTitleAndSubtitle;
    UILabel * __subtitleLabel;
    UITextField * __titleTextField;
    BOOL  _combinesPhotoDecorations;
    UIView * _customImageView;
    <PUAlbumListCellDelegate> * _delegate;
    unsigned int  _editCapabilities;
    BOOL  _editing;
    BOOL  _enabled;
    BOOL  _highlighted;
    int  _layout;
    BOOL  _showsDeleteButtonWhenEditing;
    PUStackView * _stackView;
    NSString * _subtitle;
    UIFont * _subtitleFont;
    NSString * _title;
    UIFont * _titleFont;
    float  _xInset;
}

@property (setter=_setDeleteButton:, nonatomic, retain) PXUIButton *_deleteButton;
@property (setter=_setShowsTitleAndSubtitle:, nonatomic) BOOL _showsTitleAndSubtitle;
@property (setter=_setSubtitleLabel:, nonatomic, retain) UILabel *_subtitleLabel;
@property (setter=_setTitleTextField:, nonatomic, retain) UITextField *_titleTextField;
@property (nonatomic) BOOL combinesPhotoDecorations;
@property (nonatomic, retain) UIView *customImageView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAlbumListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int editCapabilities;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) int layout;
@property (nonatomic) BOOL showsDeleteButtonWhenEditing;
@property (setter=_setStackView:, nonatomic, retain) PUStackView *stackView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic) float xInset;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (id)_deleteButton;
- (struct CGPoint { float x1; float x2; })_deleteButtonCenter;
- (void)_setDeleteButton:(id)arg1;
- (void)_setShowsTitleAndSubtitle:(BOOL)arg1;
- (void)_setStackView:(id)arg1;
- (void)_setSubtitleLabel:(id)arg1;
- (void)_setTitleTextField:(id)arg1;
- (BOOL)_showsTitleAndSubtitle;
- (id)_subtitleLabel;
- (float)_titleFieldAlpha;
- (id)_titleTextField;
- (int)_titleTextFieldClearButtonModeForLayout:(int)arg1;
- (void)_updateDeleteButtonAnimated:(BOOL)arg1;
- (void)_updateStackViewAnimated:(BOOL)arg1;
- (void)_updateSubtitleLabelAnimated:(BOOL)arg1;
- (void)_updateSubtitleLabelStyle;
- (void)_updateSubviewOrdering;
- (void)_updateTitleFieldAnimated:(BOOL)arg1;
- (void)_updateTitleTextFieldsStyle;
- (void)cancelPerformRetitleAction;
- (BOOL)combinesPhotoDecorations;
- (id)customImageView;
- (id)delegate;
- (unsigned int)editCapabilities;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEditing;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (int)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCombinesPhotoDecorations:(BOOL)arg1;
- (void)setCustomImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditCapabilities:(unsigned int)arg1;
- (void)setEditCapabilities:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLayout:(int)arg1;
- (void)setShowsDeleteButtonWhenEditing:(BOOL)arg1;
- (void)setShowsTitle:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setSubtitleFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setXInset:(float)arg1;
- (BOOL)showsDeleteButtonWhenEditing;
- (id)stackView;
- (id)subtitle;
- (id)subtitleFont;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)title;
- (id)titleFont;
- (float)xInset;

@end