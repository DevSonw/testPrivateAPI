/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate> {
    NSString * __lastMultiContributorsSectionFooterTitle;
    NSString * __lastPublicURLSectionFooterTitle;
    PLCloudSharedAlbumInvitationRecord * __selectedSubscriberInvitationRecord;
    BOOL  __shouldScrollToTopOnNextViewLayout;
    unsigned int  _addSubscribersRow;
    BOOL  _adjustedInsetsForKeyboard;
    PLCloudSharedAlbum * _album;
    BOOL  _albumIsFamilyStream;
    NSString * _albumName;
    UIBarButtonItem * _cancelButton;
    PLComposeRecipientViewController * _composeRecipientController;
    <PLAlbumStreamingOptionsViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    ACAccountStore * _familyAccountStore;
    AAUIProfilePictureStore * _familyMemberPictureStore;
    NSArray * _familyMembers;
    NSMutableDictionary * _familyProfilePictures;
    NSOperationQueue * _familyRequestQueue;
    BOOL  _isPresentedModally;
    UITableView * _optionsTableView;
    BOOL  _showShareLink;
    BOOL  _streamOwner;
    NSArray * _visibleInvitationRecords;
    NSString * _visiblePublicURL;
    UISwitch * _wantsAcceptCloudNotificationSwitch;
    UISwitch * _wantsMultipleContributorsSwitch;
    UISwitch * _wantsPublicWebsiteSwitch;
}

@property (setter=_setLastMultiContributorsSectionFooterTitle:, nonatomic, copy) NSString *_lastMultiContributorsSectionFooterTitle;
@property (setter=_setLastPublicURLSectionFooterTitle:, nonatomic, copy) NSString *_lastPublicURLSectionFooterTitle;
@property (setter=_setSelectedSubscriberInvitationRecord:, nonatomic, retain) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord;
@property (setter=_setShouldScrollToTopOnNextViewLayout:, nonatomic) BOOL _shouldScrollToTopOnNextViewLayout;
@property (nonatomic, retain) PLCloudSharedAlbum *album;
@property (nonatomic) BOOL albumIsFamilyStream;
@property (nonatomic, copy) NSString *albumName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLAlbumStreamingOptionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isPresentedModally;
@property (nonatomic) BOOL streamOwner;
@property (readonly) Class superclass;

- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_cancelAction:(id)arg1;
- (void)_changeWantsAcceptCloudNotification:(id)arg1;
- (void)_changeWantsMultipleContributors:(id)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_deletePhotoStream;
- (void)_displayActivitySheet;
- (void)_displayConfirmationForRemovalOfSelectedSubscriber;
- (void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(id /* block */)arg3;
- (void)_displayDeleteConfirmation:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_handleCompletionWithReason:(int)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_lastMultiContributorsSectionFooterTitle;
- (id)_lastPublicURLSectionFooterTitle;
- (BOOL)_multipleContributorsEnabled;
- (id)_personMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 outMatchingKey:(id*)arg5 outMatchingIdentifier:(id*)arg6 keysToFetch:(id)arg7;
- (id)_personViewControllerWithEmail:(id)arg1 phone:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 canResendInvitation:(BOOL)arg5 canRemoveSubscriber:(BOOL)arg6;
- (BOOL)_publicURLEnabled;
- (void)_removeSelectedSubscriber;
- (void)_resendInvitationToSelectedSubscriber;
- (id)_selectedSubscriberInvitationRecord;
- (void)_setLastMultiContributorsSectionFooterTitle:(id)arg1;
- (void)_setLastPublicURLSectionFooterTitle:(id)arg1;
- (void)_setSelectedSubscriberInvitationRecord:(id)arg1;
- (void)_setShouldScrollToTopOnNextViewLayout:(BOOL)arg1;
- (void)_setShowingMultipleContributorSpinner:(BOOL)arg1;
- (void)_setShowingPublicURLActivitySpinner:(BOOL)arg1;
- (BOOL)_shouldScrollToTopOnNextViewLayout;
- (BOOL)_shouldShowPublicURLActivitySpinner;
- (id)_suppresionContexts;
- (void)_updateAllControls;
- (void)_updateMultipleContributorsState;
- (void)_updatePublicURLStateIfNecessaryAnimated:(BOOL)arg1;
- (void)_updateWantsAcceptCloudNotificationField;
- (void)_updateWantsMultipleContributorsField;
- (void)_updateWantsPublicWebsiteField;
- (id)_visibleInvitationRecordsForStreamOwner:(BOOL)arg1;
- (id)album;
- (BOOL)albumIsFamilyStream;
- (id)albumName;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (id)initWithAlbum:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (BOOL)isPresentedModally;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setAlbumIsFamilyStream:(BOOL)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPresentedModally:(BOOL)arg1;
- (void)setStreamOwner:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)streamOwner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end