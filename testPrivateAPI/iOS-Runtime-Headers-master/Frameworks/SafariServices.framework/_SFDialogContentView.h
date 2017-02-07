/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDialogContentView : UIView {
    UIStackView * _actionButtonsView;
    _SFDialogView * _dialogView;
    BOOL  _hasSecondaryAction;
    NSArray * _layoutConstraintsWhenPromptIsVisible;
    _SFDialogTextView * _messageTextView;
    UIButton * _primaryActionButton;
    UITextField * _promptTextField;
    UIButton * _secondaryActionButton;
    UIView * _separatorView;
}

@property (nonatomic) _SFDialogView *dialogView;

- (void).cxx_destruct;
- (void)_invokeDelegateWithPrimaryAction:(BOOL)arg1;
- (void)_invokePrimaryAction;
- (void)_invokeSecondaryAction;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (BOOL)canBecomeFirstResponder;
- (id)dialogView;
- (void)endEditingInPrompt;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyCommands;
- (void)layoutSubviews;
- (void)setDialogView:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setPrimaryActionTitle:(id)arg1 secondaryActionTitle:(id)arg2;
- (void)setPromptText:(id)arg1;
- (void)updateConstraints;

@end
