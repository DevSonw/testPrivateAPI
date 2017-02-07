/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersViewController : ABAbstractViewController <ABMembersControllerDelegate, ABNewPersonViewControllerDelegate, ABPersonEditDelegate, ABViewControllerBannerViewProtocol, CNAvatarCardControllerDelegate, CNContactViewControllerAddContactPresenter> {
    _UIAccessDeniedView * _accessDeniedView;
    CNAvatarCardController * _cardController;
    CNContactStore * _contactStore;
    id  _insertionLabel;
    int  _insertionProperty;
    id  _insertionValue;
    int  _leftButtonBehavior;
    ABMembersController * _membersController;
    int  _rightButtonBehavior;
    BOOL  _shouldHandleExternalChangeOnPersonViewControllers;
}

@property (nonatomic, readonly) _UIAccessDeniedView *accessDeniedView;
@property (readonly) BOOL allowsCancel;
@property (readonly) BOOL allowsCardEditing;
@property (nonatomic, retain) CNAvatarCardController *cardController;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isSearchingWithNoContactSelected;
@property (readonly) BOOL shouldShowGroups;
@property (readonly) Class superclass;
@property (readonly) CNContact *unsavedContact;

- (void)_applicationEnteringBackground;
- (void)_applicationEnteringForeground;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (void)_updateForModel;
- (int)abViewControllerType;
- (id)accessDeniedView;
- (id)addContactPresenter;
- (void)addPerson:(id)arg1;
- (void)addPersonWithContact:(id)arg1 animated:(BOOL)arg2;
- (BOOL)allowsCancel;
- (BOOL)allowsCardEditing;
- (BOOL)allowsShowingPersonsCards;
- (void)applicationDidResume;
- (int)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)cancel:(id)arg1;
- (void)cancelRefreshingAccount;
- (void)cancelSearching:(id)arg1;
- (id)cardController;
- (id)contactStore;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultPNGName;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)handleExternalChangeOnPersonViewControllers;
- (id)indexPathForMember:(void*)arg1;
- (id)initWithModel:(id)arg1;
- (void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3;
- (BOOL)isNavigationButtonEnabled:(int)arg1;
- (BOOL)isSearchingWithNoContactSelected;
- (void)linksUpdatedForPerson:(void*)arg1;
- (void)loadState;
- (void)loadView;
- (id)membersController;
- (BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)membersControllerDidEndSearching:(id)arg1;
- (void)membersControllerDidEndServerSearch:(id)arg1;
- (void)membersControllerWillEndSearching:(id)arg1;
- (void)membersControllerWillStartSearching:(id)arg1;
- (id)model;
- (void)model:(id)arg1 localChangeWithInfo:(struct __CFDictionary { }*)arg2;
- (void)modelDatabaseChange:(id)arg1;
- (void)nameUpdatedForPerson:(void*)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void*)arg3;
- (void)personWasDeleted;
- (void)personWasSelected:(void*)arg1;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentGroupsViewController;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)refreshEverythingNow;
- (void)resetInsertionData;
- (void)resetStateForDisplayedFilterChange;
- (void)scrollMemberToTop:(void*)arg1;
- (BOOL)selectAndScrollMemberVisible:(void*)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setCardController:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldShowGroups;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 selectAndScrollToPerson:(BOOL)arg3;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 selectAndScrollToPerson:(BOOL)arg4;
- (void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2;
- (void)startRefreshingAccount;
- (id)styleProvider;
- (id)tableView;
- (id)unsavedContact;
- (void)updateLeftNavigationButtonAnimated:(BOOL)arg1;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateTitle;
- (void)updateView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
