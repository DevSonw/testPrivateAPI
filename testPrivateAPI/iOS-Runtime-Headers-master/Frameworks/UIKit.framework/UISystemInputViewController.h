/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate> {
    NSMutableDictionary * _accessoryConstraints;
    NSMutableDictionary * _accessoryViewControllers;
    int  _blurEffectStyle;
    UILexicon * _cachedRecents;
    UITraitCollection * _containingResponderTraitCollection;
    UIView * _containingView;
    UIView * _contentLayoutView;
    BOOL  _didDisplayRecents;
    UIButton * _doneButton;
    NSArray * _editorConstraints;
    UIKBSystemLayoutViewController * _editorVC;
    NSLayoutConstraint * _horizontalAlignment;
    UIViewController * _inputVC;
    BOOL  _isAutomaticResponderTransition;
    BOOL  _isVisible;
    UIKeyboard * _keyboard;
    NSArray * _keyboardConstraints;
    UICompatibilityInputViewController * _keyboardVC;
    BOOL  _needsSetupAgain;
    UIResponder<UITextInput> * _nextInputDelegate;
    UIResponder<UITextInput> * _persistentDelegate;
    UILabel * _promptLabel;
    UIRecentsInputViewController * _recentsVC;
    BOOL  _supportsRecentInputsIntegration;
    BOOL  _supportsTouchInput;
    <UISystemInputViewControllerDelegate> * _systemInputViewControllerDelegate;
    UITextInputTraits * _textInputTraits;
    NSLayoutConstraint * _verticalAlignment;
    BOOL  _willPresentFullscreen;
}

@property (nonatomic, retain) UILabel *_promptLabel;
@property (nonatomic) int blurEffectStyle;
@property (nonatomic, retain) UILexicon *cachedRecents;
@property (nonatomic, retain) UITraitCollection *containingResponderTraitCollection;
@property (nonatomic, retain) UIView *containingView;
@property (nonatomic, retain) UIView *contentLayoutView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisplayRecents;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) NSArray *editorConstraints;
@property (nonatomic, retain) UIKBSystemLayoutViewController *editorVC;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalAlignment;
@property (nonatomic, retain) UIViewController *inputVC;
@property (nonatomic) BOOL isAutomaticResponderTransition;
@property (nonatomic, retain) UIKeyboard *keyboard;
@property (nonatomic, retain) NSArray *keyboardConstraints;
@property (nonatomic, retain) UICompatibilityInputViewController *keyboardVC;
@property (nonatomic, retain) UIResponder<UITextInput> *nextInputDelegate;
@property (nonatomic, retain) UIResponder<UITextInput> *persistentDelegate;
@property (nonatomic, retain) UIRecentsInputViewController *recentsVC;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsRecentInputsIntegration;
@property (nonatomic) BOOL supportsTouchInput;
@property (nonatomic) <UISystemInputViewControllerDelegate> *systemInputViewControllerDelegate;
@property (nonatomic, retain) UITextInputTraits *textInputTraits;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } unfocusedFocusGuideOutsets;
@property (nonatomic, retain) NSLayoutConstraint *verticalAlignment;
@property (nonatomic) BOOL willPresentFullscreen;

+ (id)_canonicalTraitsForResponder:(id)arg1;
+ (BOOL)canUseSystemInputViewControllerForResponder:(id)arg1;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;

- (id)_accessoryViewControllerForEdge:(int)arg1;
- (void)_addAccessoryViewController:(id)arg1;
- (void)_addChildInputViewController;
- (void)_clearCursorLocationIfNotFirstResponder;
- (void)_createKeyboardIfNecessary;
- (void)_didSuspend:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_dismissSystemInputViewController;
- (id)_effectView;
- (unsigned int)_horizontalLayoutTypeForEdge:(int)arg1;
- (id)_promptLabel;
- (void)_removeAccessoryViewController:(id)arg1;
- (void)_resetDelegate;
- (void)_returnButtonPressed;
- (void)_setNonInputViewVisibility:(BOOL)arg1;
- (id)_traitCollectionForUserInterfaceStyle;
- (void)_updateRemoteTextEditingSession;
- (unsigned int)_verticalLayoutTypeForEdge:(int)arg1;
- (void)_willResume:(id)arg1;
- (id)accessoryViewControllerForEdge:(int)arg1;
- (id)alignmentConstraintForAxis:(int)arg1;
- (int)blurEffectStyle;
- (id)cachedRecents;
- (void)configureRecentsVCIfNecessary;
- (id)constraintFromView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4;
- (id)constraintsForEdge:(int)arg1;
- (id)containingResponderTraitCollection;
- (id)containingView;
- (id)contentLayoutView;
- (void)dealloc;
- (BOOL)didDisplayRecents;
- (void)didSelectRecentInput;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)doneButton;
- (id)doneButtonStringForCurrentInputDelegate;
- (id)editorConstraints;
- (id)editorVC;
- (void)findNextInputDelegate;
- (id)horizontalAlignment;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (id)inputVC;
- (BOOL)isAutomaticResponderTransition;
- (id)keyboard;
- (id)keyboardConstraints;
- (id)keyboardVC;
- (id)nextInputDelegate;
- (void)notifyDelegateWithAccessoryVisibility:(BOOL)arg1;
- (id)persistentDelegate;
- (void)populateCoreHierarchy;
- (id)preferredFocusEnvironments;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentsVC;
- (void)reloadInputViewsForPersistentDelegate;
- (void)setAccessoryViewController:(id)arg1 forEdge:(int)arg2;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(int)arg2;
- (void)setBlurEffectStyle:(int)arg1;
- (void)setCachedRecents:(id)arg1;
- (void)setConstraints:(id)arg1 forEdge:(int)arg2;
- (void)setContainingResponderTraitCollection:(id)arg1;
- (void)setContainingView:(id)arg1;
- (void)setContentLayoutView:(id)arg1;
- (void)setDidDisplayRecents:(BOOL)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditorConstraints:(id)arg1;
- (void)setEditorVC:(id)arg1;
- (void)setHorizontalAlignment:(id)arg1;
- (void)setInputVC:(id)arg1;
- (void)setIsAutomaticResponderTransition:(BOOL)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setKeyboardConstraints:(id)arg1;
- (void)setKeyboardVC:(id)arg1;
- (void)setNextInputDelegate:(id)arg1;
- (void)setPersistentDelegate:(id)arg1;
- (void)setRecentsVC:(id)arg1;
- (void)setSupportsRecentInputsIntegration:(BOOL)arg1;
- (void)setSupportsTouchInput:(BOOL)arg1;
- (void)setSystemInputViewControllerDelegate:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setVerticalAlignment:(id)arg1;
- (void)setWillPresentFullscreen:(BOOL)arg1;
- (void)set_promptLabel:(id)arg1;
- (void)setupKeyboard;
- (BOOL)supportsRecentInputsIntegration;
- (BOOL)supportsTouchInput;
- (void)switchToKeyboard;
- (id)systemInputViewControllerDelegate;
- (id)textInputTraits;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })unfocusedFocusGuideOutsets;
- (void)updateAlignmentConstraints;
- (void)updateViewConstraints;
- (id)verticalAlignment;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)willPresentFullscreen;
- (BOOL)willShowRecentsList;

@end
