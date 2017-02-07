/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchViewController : UIViewController <SPSearchAgentDelegate, SPUISearchHeaderDelegate, SPUISearchResultHandlerDelegate, SPUITableViewDelegate, SearchUIFirstTimeExperienceDelegate> {
    NSTimer * _clearResultsTimer;
    BOOL  _clearSearchFieldAfterDismissal;
    <SPUISearchViewControllerDelegate> * _delegate;
    SPUISearchFirstTimeViewController * _firstTimeExperienceViewController;
    SPUILockScreenFooterView * _footerView;
    BOOL  _internetOverrideForPPT;
    BOOL  _isBeingPresented;
    _UILegibilitySettings * _legibilitySettings;
    unsigned int  _presentationMode;
    unsigned long long  _queryStartTime;
    NSTimer * _queryUpdateTimer;
    UIView * _replicatorView;
    SPUISearchResultHandler * _resultHandler;
    SPUISearchHeader * _searchHeader;
    NSMutableArray * _searchRatingSessionFeedback;
    SPUITableViewController * _searchTableViewController;
    double  _statusBarDismissTime;
    BOOL  _wasVisibleWhenPresented;
    SPUITableViewController * _zeroKeywordTableViewController;
}

@property (retain) NSTimer *clearResultsTimer;
@property BOOL clearSearchFieldAfterDismissal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPUISearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float distanceToTopOfAppIcons;
@property (retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController;
@property (retain) SPUILockScreenFooterView *footerView;
@property (readonly) unsigned int hash;
@property BOOL internetOverrideForPPT;
@property BOOL isBeingPresented;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property unsigned int presentationMode;
@property (retain) UIView *replicatorView;
@property (retain) SPUISearchResultHandler *resultHandler;
@property (retain) SPUISearchHeader *searchHeader;
@property (retain) NSMutableArray *searchRatingSessionFeedback;
@property (retain) SPUITableViewController *searchTableViewController;
@property double statusBarDismissTime;
@property (readonly) Class superclass;
@property BOOL wasVisibleWhenPresented;
@property (retain) SPUITableViewController *zeroKeywordTableViewController;

- (void).cxx_destruct;
- (void)activateFirstTimeExperienceViewAnimate:(BOOL)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateViewController:(id)arg1 animate:(BOOL)arg2;
- (id)activeViewController;
- (BOOL)allowInternet;
- (void)cancelButtonPressed;
- (id)clearResultsTimer;
- (BOOL)clearSearchFieldAfterDismissal;
- (void)clearSearchResults;
- (void)clearSearchResultsPrefsChanged;
- (void)clearTimerExpired;
- (id)contentScrollView;
- (id)currentQuery;
- (id)delegate;
- (void)didBeginEditing;
- (void)didBeginScrollingInTableView;
- (void)didPullDownTableView;
- (void)didSelectResult:(id)arg1 withFeedback:(id)arg2 wasPop:(BOOL)arg3;
- (void)didSwipeUpOnTableView;
- (void)didTapInEmptyAreaOfTableView;
- (float)distanceToTopOfAppIcons;
- (void)enableUpdates:(id)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)firstTimeExperienceViewController;
- (id)footerView;
- (id)headerNextResponder;
- (void)hideKeyboard;
- (void)hideSeparator;
- (id)init;
- (BOOL)internetOverrideForPPT;
- (BOOL)isBeingPresented;
- (BOOL)isVisible;
- (id)legibilitySettings;
- (void)numberOfRowsDidChange:(id)arg1;
- (void)performSearchWithQuery:(id)arg1;
- (unsigned int)presentationMode;
- (void)queryContextDidChange:(id)arg1 allowZKW:(BOOL)arg2;
- (BOOL)queryIsPresent;
- (id)replicatorView;
- (id)resultHandler;
- (void)scrollSearchTable:(id)arg1 iterations:(unsigned int)arg2 delta:(unsigned int)arg3;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentReceivedSuggestions:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)searchForSuggestedQuery:(id)arg1;
- (id)searchHeader;
- (id)searchRatingSessionFeedback;
- (id)searchTableViewController;
- (void)searchViewDidDismissWithReason:(unsigned int)arg1;
- (void)searchViewDidPresentFromSource:(unsigned int)arg1;
- (void)searchViewWillDismissWithReason:(unsigned int)arg1;
- (void)searchViewWillPresentFromSource:(unsigned int)arg1;
- (void)sendRatingFeedback;
- (void)setClearResultsTimer:(id)arg1;
- (void)setClearSearchFieldAfterDismissal:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstTimeExperienceViewController:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setInternetOverrideForPPT:(BOOL)arg1;
- (void)setInternetOverrideToDisable:(BOOL)arg1;
- (void)setIsBeingPresented:(BOOL)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPresentationMode:(unsigned int)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setResultHandler:(id)arg1;
- (void)setSearchHeader:(id)arg1;
- (void)setSearchRatingSessionFeedback:(id)arg1;
- (void)setSearchTableViewController:(id)arg1;
- (void)setStatusBarDismissTime:(double)arg1;
- (void)setWasVisibleWhenPresented:(BOOL)arg1;
- (void)setZeroKeywordTableViewController:(id)arg1;
- (void)settingsChanged;
- (double)statusBarDismissTime;
- (id)tableViewControllerWithSearchModel:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)update:(id)arg1;
- (id)viewControllerForPresenting;
- (BOOL)wasVisibleWhenPresented;
- (id)zeroKeywordTableViewController;

@end
