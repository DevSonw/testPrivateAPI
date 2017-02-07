/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputTraits : NSObject <NSCopying, UITextInputTraits, UITextInputTraits_Private> {
    NSIndexSet * PINEntrySeparatorIndexes;
    BOOL  acceptsDictationSearchResults;
    BOOL  acceptsEmoji;
    BOOL  acceptsFloatingKeyboard;
    BOOL  acceptsSplitKeyboard;
    int  autocapitalizationType;
    NSString * autocorrectionContext;
    int  autocorrectionType;
    BOOL  contentsIsSingleValue;
    BOOL  deferBecomingResponder;
    BOOL  disableInputBars;
    BOOL  disablePrediction;
    BOOL  displaySecureEditsUsingPlainText;
    BOOL  displaySecureTextUsingPlainText;
    int  emptyContentReturnKeyType;
    BOOL  enablesReturnKeyAutomatically;
    BOOL  enablesReturnKeyOnNonWhiteSpaceContent;
    BOOL  forceDefaultDictationInfo;
    int  forceDictationKeyboardType;
    BOOL  forceDisableDictation;
    BOOL  forceEnableDictation;
    BOOL  hasDefaultContents;
    UIInputContextHistory * inputContextHistory;
    UIColor * insertionPointColor;
    unsigned int  insertionPointWidth;
    BOOL  isCarPlayIdiom;
    BOOL  isSingleLineDocument;
    unsigned int  keyboardAppearance;
    unsigned int  keyboardType;
    BOOL  learnsCorrections;
    NSString * recentInputIdentifier;
    NSString * responseContext;
    BOOL  returnKeyGoesToNextResponder;
    int  returnKeyType;
    BOOL  secureTextEntry;
    UIColor * selectionBarColor;
    UIImage * selectionDragDotImage;
    UIColor * selectionHighlightColor;
    int  shortcutConversionType;
    int  spellCheckingType;
    BOOL  suppressReturnKeyStyling;
    NSString * textContentType;
    int  textLoupeVisibility;
    int  textScriptType;
    int  textSelectionBehavior;
    id  textSuggestionDelegate;
    struct __CFCharacterSet { } * textTrimmingSet;
    BOOL  useInterfaceLanguageForLocalization;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  validTextRange;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int dictationInfoKeyboardType;
@property (nonatomic, readonly) int dictationKeyboardType;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) int forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned int insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } validTextRange;

+ (int)accessibleAppearanceForAppearance:(int)arg1;
+ (int)configuredAppearanceForAppearance:(int)arg1 withTraitEnvironment:(id)arg2;
+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;

- (void).cxx_destruct;
- (id)PINEntrySeparatorIndexes;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (BOOL)acceptsDictationSearchResults;
- (BOOL)acceptsEmoji;
- (BOOL)acceptsFloatingKeyboard;
- (BOOL)acceptsSplitKeyboard;
- (int)autocapitalizationType;
- (id)autocorrectionContext;
- (int)autocorrectionType;
- (BOOL)contentsIsSingleValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)deferBecomingResponder;
- (id)description;
- (int)dictationInfoKeyboardType;
- (int)dictationKeyboardType;
- (id)dictionaryRepresentation;
- (BOOL)disableInputBars;
- (BOOL)disablePrediction;
- (BOOL)displaySecureEditsUsingPlainText;
- (BOOL)displaySecureTextUsingPlainText;
- (int)emptyContentReturnKeyType;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
- (BOOL)forceDefaultDictationInfo;
- (int)forceDictationKeyboardType;
- (BOOL)forceDisableDictation;
- (BOOL)forceEnableDictation;
- (BOOL)hasDefaultContents;
- (id)init;
- (id)inputContextHistory;
- (id)insertionPointColor;
- (unsigned int)insertionPointWidth;
- (BOOL)isCarPlayIdiom;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSecureTextEntry;
- (BOOL)isSingleLineDocument;
- (int)keyboardAppearance;
- (int)keyboardType;
- (BOOL)learnsCorrections;
- (BOOL)publicTraitsMatchTraits:(id)arg1;
- (id)recentInputIdentifier;
- (id)responseContext;
- (BOOL)returnKeyGoesToNextResponder;
- (int)returnKeyType;
- (id)selectionBarColor;
- (id)selectionDragDotImage;
- (id)selectionHighlightColor;
- (void)setAcceptsDictationSearchResults:(BOOL)arg1;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setAcceptsFloatingKeyboard:(BOOL)arg1;
- (void)setAcceptsSplitKeyboard:(BOOL)arg1;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setAutocorrectionType:(int)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setDeferBecomingResponder:(BOOL)arg1;
- (void)setDisableInputBars:(BOOL)arg1;
- (void)setDisablePrediction:(BOOL)arg1;
- (void)setDisplaySecureEditsUsingPlainText:(BOOL)arg1;
- (void)setDisplaySecureTextUsingPlainText:(BOOL)arg1;
- (void)setEmptyContentReturnKeyType:(int)arg1;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1;
- (void)setForceDefaultDictationInfo:(BOOL)arg1;
- (void)setForceDictationKeyboardType:(int)arg1;
- (void)setForceDisableDictation:(BOOL)arg1;
- (void)setForceEnableDictation:(BOOL)arg1;
- (void)setHasDefaultContents:(BOOL)arg1;
- (void)setInputContextHistory:(id)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setInsertionPointWidth:(unsigned int)arg1;
- (void)setIsCarPlayIdiom:(BOOL)arg1;
- (void)setIsSingleLineDocument:(BOOL)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLearnsCorrections:(BOOL)arg1;
- (void)setPINEntrySeparatorIndexes:(id)arg1;
- (void)setRecentInputIdentifier:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectionBarColor:(id)arg1;
- (void)setSelectionDragDotImage:(id)arg1;
- (void)setSelectionHighlightColor:(id)arg1;
- (void)setShortcutConversionType:(int)arg1;
- (void)setSpellCheckingType:(int)arg1;
- (void)setSuppressReturnKeyStyling:(BOOL)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextScriptType:(int)arg1;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (void)setUseInterfaceLanguageForLocalization:(BOOL)arg1;
- (void)setValidTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)shortcutConversionType;
- (int)spellCheckingType;
- (BOOL)suppressReturnKeyStyling;
- (void)takeTraitsFrom:(id)arg1;
- (id)textContentType;
- (int)textLoupeVisibility;
- (int)textScriptType;
- (int)textSelectionBehavior;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (int)updateResultComparedToTraits:(id)arg1;
- (BOOL)useInterfaceLanguageForLocalization;
- (struct _NSRange { unsigned int x1; unsigned int x2; })validTextRange;

@end