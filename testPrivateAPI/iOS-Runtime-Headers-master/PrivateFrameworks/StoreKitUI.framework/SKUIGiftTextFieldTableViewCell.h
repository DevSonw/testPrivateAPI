/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {
    UILabel * _label;
    UITextField * _textField;
    UIView * _topBorderView;
}

@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) UIControl *textField;
@property (nonatomic) <UITextFieldDelegate> *textFieldDelegate;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)attributedPlaceholder;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEnabled;
- (int)keyboardType;
- (id)label;
- (void)layoutSubviews;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setTextFieldDelegate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)textField;
- (id)textFieldDelegate;
- (id)value;

@end
