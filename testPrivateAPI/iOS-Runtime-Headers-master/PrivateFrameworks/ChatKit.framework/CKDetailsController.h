/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsController : CKScrollViewController <CKAttachmentCollectionManagerDelegate, CKAvatarPickerViewControllerDelegate, CKDetailsAddGroupNameViewDelegate, CKDetailsContactsManagerDelegate, CKDetailsContactsTableViewCellDelegate, CKSharedAssetsControllerDelegate, CNAvatarViewDelegate, FMFMapViewControllerDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIViewControllerPreviewingDelegate> {
    CKGroupRecipientSelectionController * _addRecipientsController;
    CKAttachmentCollectionManager * _attachmentCollectionManager;
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKDetailsContactsManager * _contactsManager;
    float  _contentOffsetYShiftAfterKeyboardNotification;
    CKConversation * _conversation;
    unsigned int  _currentAssetType;
    UIViewController<CKSharedAssetsControllerProtocol> * _currentSharedAssetsViewController;
    <CKDetailsControllerDelegate> * _detailsControllerDelegate;
    BOOL  _fmfEnabled;
    BOOL  _fmfRestricted;
    NSTimer * _fmfUpdateTimer;
    CKDetailsGroupNameCell * _groupNameCell;
    BOOL  _isContactsSectionCollapsed;
    CKTranscriptDetailsResizableCell * _locationSendCell;
    CKDetailsLocationShareCell * _locationShareCell;
    UITextView * _locationSharingTextView;
    CKTranscriptDetailsResizableCell * _locationStartShareCell;
    CKDetailsMapViewCell * _mapViewCell;
    FMFMapViewController * _mapViewController;
    CKEntity * _presentedEntity;
    id  _selfWeakWrapper;
    CNContactStore * _suggestionsEnabledContactStore;
    CKDetailsTableView * _tableView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) CKGroupRecipientSelectionController *addRecipientsController;
@property (nonatomic, retain) CKAttachmentCollectionManager *attachmentCollectionManager;
@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKDetailsContactsManager *contactsManager;
@property (nonatomic) float contentOffsetYShiftAfterKeyboardNotification;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) unsigned int currentAssetType;
@property (nonatomic, retain) UIViewController<CKSharedAssetsControllerProtocol> *currentSharedAssetsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKDetailsControllerDelegate> *detailsControllerDelegate;
@property (nonatomic) BOOL fmfEnabled;
@property (nonatomic) BOOL fmfRestricted;
@property (nonatomic, retain) NSTimer *fmfUpdateTimer;
@property (nonatomic, retain) CKDetailsGroupNameCell *groupNameCell;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isContactsSectionCollapsed;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationSendCell;
@property (nonatomic, retain) CKDetailsLocationShareCell *locationShareCell;
@property (nonatomic, retain) UITextView *locationSharingTextView;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationStartShareCell;
@property (nonatomic, retain) CKDetailsMapViewCell *mapViewCell;
@property (nonatomic, retain) FMFMapViewController *mapViewController;
@property (nonatomic, retain) CKEntity *presentedEntity;
@property (nonatomic, retain) id selfWeakWrapper;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKDetailsTableView *tableView;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (BOOL)_canLeaveConversation;
- (void)_configureSeparatorForCell:(id)arg1 indexPath:(id)arg2;
- (BOOL)_fmfExpirationDateIsValid;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (void)_presentRemoveRecipientSheetForHandle:(id)arg1 fromView:(id)arg2;
- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(BOOL)arg4;
- (void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2;
- (void)_toggleSharingStateFromABCard;
- (id)addRecipientsController;
- (void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void*)annotationABRecordForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (void)assetsTabDidChange:(id)arg1;
- (id)attachmentCollectionManager;
- (void)attachmentCollectionManagerDidUpdateAttachmentItems:(id)arg1;
- (id)avatarPickerViewController;
- (void)avatarPickerViewControllerDidSelectEntity:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (BOOL)canBecomeFirstResponder;
- (id)chatOptionsCellForIndexPath:(id)arg1;
- (id)childViewController:(id)arg1 cellForIndexPath:(id)arg2;
- (void)collapseContactsSection;
- (void)contactsCellDidTapFaceTimeVideoButton:(id)arg1;
- (void)contactsCellDidTapMessagesButton:(id)arg1;
- (void)contactsCellDidTapPhoneButton:(id)arg1;
- (id)contactsManager;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(BOOL)arg5;
- (id)contactsManagerCellForIndexPath:(id)arg1;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (float)contentOffsetYShiftAfterKeyboardNotification;
- (id)contentScrollView;
- (id)conversation;
- (BOOL)conversationHasLeft;
- (unsigned int)currentAssetType;
- (id)currentSharedAssetsViewController;
- (id)currentlyActiveFMFDevice;
- (void)dealloc;
- (void)detailsAddGroupNameView:(id)arg1 didCommitGroupName:(id)arg2;
- (id)detailsControllerDelegate;
- (void)doNotDisturbValueChange:(id)arg1;
- (id)editConversationCellForIndexPath:(id)arg1;
- (void)expandContactsSection;
- (BOOL)fmfEnabled;
- (id)fmfHandlesFromIMHandles:(id)arg1;
- (BOOL)fmfRestricted;
- (id)fmfUpdateTimer;
- (id)fmfViewControllerCellForIndexPath:(id)arg1;
- (id)groupNameCell;
- (id)groupNameCellForIndexPath:(id)arg1;
- (void)handleActiveDeviceChanged:(id)arg1;
- (void)handleCancelAction:(id)arg1;
- (void)handleDoneAction:(id)arg1;
- (void)handleFriendshipStatusChanged:(id)arg1;
- (void)handleTapOnChromeAvatar:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (void)initializeLocationSharingTextViewIfNecessary;
- (void)initializeSharedAssetsViewControllerIfNecessary;
- (id)inputAccessoryViewController;
- (BOOL)isContactsSectionCollapsed;
- (BOOL)isContactsSectionCollapsible;
- (id)leaveCellForIndexPath:(id)arg1;
- (void)loadView;
- (id)locationFooterViewForSection:(int)arg1;
- (id)locationSendCell;
- (id)locationShareCell;
- (id)locationShareCellForIndexPath:(id)arg1;
- (id)locationSharingTextView;
- (id)locationStartShareCell;
- (id)mapViewCell;
- (id)mapViewController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)presentFullFMFMapViewController;
- (void)presentGroupRecipientSelectionController;
- (void)presentLeaveActionSheetFromView:(id)arg1;
- (void)presentSharingActionSheetCurrentlySharing:(BOOL)arg1 fromView:(id)arg2;
- (id)presentedEntity;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)readReceiptsSwitchValueChanged:(id)arg1;
- (int)rowForAddMemberCell;
- (int)rowForShowMoreContactsCell;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)segmentedControlCellForIndexPath:(id)arg1;
- (id)selfWeakWrapper;
- (void)sendCurrentLocation;
- (void)setAddRecipientsController:(id)arg1;
- (void)setAttachmentCollectionManager:(id)arg1;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setContentOffsetYShiftAfterKeyboardNotification:(float)arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentAssetType:(unsigned int)arg1;
- (void)setCurrentSharedAssetsViewController:(id)arg1;
- (void)setDetailsControllerDelegate:(id)arg1;
- (void)setFmfEnabled:(BOOL)arg1;
- (void)setFmfRestricted:(BOOL)arg1;
- (void)setFmfUpdateTimer:(id)arg1;
- (void)setGroupNameCell:(id)arg1;
- (void)setIsContactsSectionCollapsed:(BOOL)arg1;
- (void)setLocationSendCell:(id)arg1;
- (void)setLocationShareCell:(id)arg1;
- (void)setLocationSharingTextView:(id)arg1;
- (void)setLocationStartShareCell:(id)arg1;
- (void)setMapViewCell:(id)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setPresentedEntity:(id)arg1;
- (void)setSelfWeakWrapper:(id)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (void)setupContactsManager;
- (void)setupFMF;
- (void)setupFMFTimerIfNecessary;
- (void)sharedAssetsController:(id)arg1 didDeleteAttachmentItems:(id)arg2;
- (void)sharedAssetsControllerContentSizeDidChange:(id)arg1;
- (id)sharedAssetsViewControllerCellForIndexPath:(id)arg1;
- (BOOL)shouldDisplayHeaderForSection:(unsigned int)arg1;
- (BOOL)shouldShowActiveDeviceSwitchFooter;
- (BOOL)shouldShowEnhancedGroupFeatures;
- (BOOL)shouldShowFMFView;
- (BOOL)shouldShowGroupAddNameField;
- (id)suggestionsEnabledContactStore;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)updateTimedFMFState;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (int)visibleContactsRows;
- (id)visualEffectView;

@end
