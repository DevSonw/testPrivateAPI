/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {
    UIColor * _boxBackgroundColor;
    UIColor * _boxBorderColor;
    UIFont * _font;
    int  _keyboardType;
    NSMutableArray * _labels;
    BOOL  _needsLabelReload;
    int  _numberOfCharacters;
    BOOL  _secureTextEntry;
    NSMutableString * _text;
    UIColor * _textColor;
    SKUIViewElement * _viewElement;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic, copy) UIColor *boxBackgroundColor;
@property (nonatomic, copy) UIColor *boxBorderColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, readonly) BOOL hasText;
@property (readonly) unsigned int hash;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) int numberOfCharacters;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;

+ (float)_defaultBoxSizeForFont:(id)arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_reloadLabelSubviews;
- (void)_sendValueChangeEvents;
- (void)_setNeedsReloadLayout;
- (int)autocorrectionType;
- (BOOL)becomeFirstResponder;
- (id)boxBackgroundColor;
- (id)boxBorderColor;
- (BOOL)canBecomeFirstResponder;
- (void)deleteBackward;
- (id)font;
- (BOOL)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (BOOL)isSecureTextEntry;
- (int)keyboardType;
- (void)layoutSubviews;
- (int)numberOfCharacters;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (BOOL)resignFirstResponder;
- (void)setAutocorrectionType:(int)arg1;
- (void)setBoxBackgroundColor:(id)arg1;
- (void)setBoxBorderColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFont:(id)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setKeyboardType:(int)arg1;
- (void)setNumberOfCharacters:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSpellCheckingType:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)spellCheckingType;
- (id)text;
- (id)textColor;
- (void)tintColorDidChange;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end