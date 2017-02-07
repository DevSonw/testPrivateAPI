/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipientTextView : MFComposeHeaderView <MFComposeRecipientAtomDelegate, MFMultiDragDestination, MFMultiDragSource, NSLayoutManagerDelegate, UITextViewDelegate> {
    UIButton * _addButton;
    BOOL  _allowsDragAndDrop;
    UIView * _atomContainerView;
    NSMutableDictionary * _atomLayoutOptionsByRecipient;
    NSMutableDictionary * _atomPresentationOptionsByRecipient;
    int  _atomViewAnimationDepth;
    NSMutableArray * _atomViews;
    UIFont * _baseFont;
    NSTimer * _collapsableUpdateTimer;
    BOOL  _collapsedStateInitialized;
    BOOL  _didIgnoreFirstResponderResign;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _dragSourceRange;
    BOOL  _editable;
    BOOL  _expanded;
    int  _hideLastAtomComma;
    UIColor * _inactiveTextColor;
    UITextView * _inactiveTextView;
    BOOL  _indicatesUnsafeRecipientsWhenCollapsed;
    BOOL  _isTextFieldCollapsed;
    int  _maxRecipients;
    BOOL  _notifyDelegateOfSizeChange;
    BOOL  _parentIsClosing;
    <MFDraggableItem> * _pivotItem;
    _MFAtomTextAttachment * _placeholderAttachment;
    NSArray * _properties;
    NSMutableArray * _recipientsBeingRemoved;
    BOOL  _separatorHidden;
    _MFAtomTextView * _textView;
    BOOL  _textViewExclusionPathsAreValid;
    NSUndoManager * _undoManager;
}

@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic) BOOL allowsDragAndDrop;
@property (nonatomic, readonly) UIView *atomContainerView;
@property (nonatomic, retain) UIFont *baseFont;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL didIgnoreFirstResponderResign;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned int hash;
@property (nonatomic) int hideLastAtomComma;
@property (nonatomic, retain) UIColor *inactiveTextColor;
@property (nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed;
@property (nonatomic) int maxRecipients;
@property (nonatomic, readonly) unsigned int numberOfRowsOfTextInField;
@property (nonatomic, readonly) float offsetForRowWithTextField;
@property (nonatomic, retain) _MFAtomTextAttachment *placeholderAttachment;
@property (nonatomic, copy) NSArray *recipients;
@property (getter=isSeparatorHidden, nonatomic) BOOL separatorHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly, copy) NSArray *uncommentedAddresses;

+ (id)defaultFont;

- (void)_addAddressAtomSubview:(id)arg1;
- (void)_addButtonTapped:(id)arg1;
- (void)_addRecord:(void*)arg1 identifier:(int)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (unsigned int)_atomPresentationOptionsForRecipient:(id)arg1;
- (id)_atomViewAtCharacterIndex:(unsigned int)arg1;
- (void)_beginAtomViewAnimations;
- (BOOL)_canAddAdditionalAtoms;
- (BOOL)_delegateRespondsToSizeChange;
- (void)_didRemoveRecipient:(id)arg1;
- (BOOL)_hasUnsafeRecipients;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned int)arg2;
- (void)_invalidateAtomPresentationOptionsCache;
- (void)_invalidateTextContainerExclusionPaths;
- (BOOL)_isAddButtonVisible;
- (BOOL)_isTextViewCollapsed;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_notifyDelegateOfNewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_notifyDelegateOfSizeChange;
- (id)_placeholderAttachmentForRecipient:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_placeholderAttachmentRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeForComposeRecipientAtom:(id)arg1;
- (void)_recomputeTextContainerExclusionPaths;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_removeAllRecipients;
- (void)_resetSelectionState;
- (void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (BOOL)_shouldAnimateAtomViewChanges;
- (void)_tapGestureRecognized:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (BOOL)_textViewContainsAtomizedRecipients;
- (void)_updateInactiveTextView;
- (BOOL)_useRightToLeftLayout;
- (id)_userEnteredTextWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)addAddress:(id)arg1;
- (id)addButton;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned int)arg2 animate:(BOOL)arg3;
- (void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (id)addresses;
- (BOOL)allowsDrag;
- (BOOL)allowsDragAndDrop;
- (void)animatePlaceholderForDragFailureWithItems:(id)arg1;
- (id)atomContainerView;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(int)arg2;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (id)atomViewsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)baseFont;
- (BOOL)becomeFirstResponder;
- (void)clearText;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (BOOL)containsAddress:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (id)destinationViewForDrop;
- (BOOL)didIgnoreFirstResponderResign;
- (void)dragCompletedWithItems:(id)arg1 success:(BOOL)arg2;
- (void)dragEnteredAtPoint:(struct CGPoint { float x1; float x2; })arg1 withItems:(id)arg2;
- (void)dragExitedWithItems:(id)arg1;
- (void)dragMovedToPoint:(struct CGPoint { float x1; float x2; })arg1 withItems:(id)arg2;
- (void)dragStartedWithItems:(id)arg1;
- (void)dropItems:(id)arg1;
- (BOOL)editable;
- (BOOL)expanded;
- (BOOL)finishEnteringRecipient;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDraggedItem:(id)arg1 isPivotView:(out BOOL*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDroppedItem:(id)arg1;
- (BOOL)hasContent;
- (int)hideLastAtomComma;
- (id)inactiveTextColor;
- (BOOL)indicatesUnsafeRecipientsWhenCollapsed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateAtomPresentationOptions;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)isSeparatorHidden;
- (id)itemsForDragAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutSubviews;
- (int)maxRecipients;
- (unsigned int)numberOfRowsOfTextInField;
- (float)offsetForRowWithTextField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)placeholderAttachment;
- (id)recipients;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (void)removeRecipient:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)setAddresses:(id)arg1;
- (void)setAllowsDragAndDrop:(BOOL)arg1;
- (void)setBaseFont:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExpanded:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideLastAtomComma:(int)arg1;
- (void)setInactiveTextColor:(id)arg1;
- (void)setIndicatesUnsafeRecipientsWhenCollapsed:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(int)arg1;
- (void)setPlaceholderAttachment:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSeparatorHidden:(BOOL)arg1;
- (BOOL)shouldCollapseMultipleItems;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)supportedDropTypes:(id)arg1;
- (id)text;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (id)textView;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)uncommentedAddresses;
- (id)undoManager;
- (id)viewForDragSource;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (void)willDropItems:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end