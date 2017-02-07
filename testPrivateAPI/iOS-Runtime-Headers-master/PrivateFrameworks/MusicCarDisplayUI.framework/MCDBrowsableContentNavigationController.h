/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDBrowsableContentNavigationController : UITabBarController <MCDPCContainerDelegate, UITabBarControllerDelegate> {
    NSString * _bundleID;
    MCDPCContainer * _container;
    BOOL  _deferReload;
    BOOL  _didFinishInitialLoad;
    AVExternalDevice * _externalDevice;
    BOOL  _hasCarScreen;
    UITabBarController * _hostTabBarController;
    MCDPCModel * _model;
    UIButton * _nowPlayingButton;
    UITabBarController * _tabBarController;
    BOOL  _visible;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) MCDPCContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferReload;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishInitialLoad;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (nonatomic) BOOL hasCarScreen;
@property (readonly) unsigned int hash;
@property (nonatomic) UITabBarController *hostTabBarController;
@property (nonatomic, retain) MCDPCModel *model;
@property (nonatomic, retain) UIButton *nowPlayingButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITabBarController *tabBarController;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (id)_hostTabAtIndex:(unsigned int)arg1 dummyTab:(BOOL)arg2;
- (void)_loadAllHostTabs;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_updateNowPlayingButtonVisibility;
- (id)bundleID;
- (id)container;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (BOOL)deferReload;
- (BOOL)didFinishInitialLoad;
- (id)externalDevice;
- (BOOL)hasCarScreen;
- (id)hostTabBarController;
- (id)initWithBundleID:(id)arg1 model:(id)arg2;
- (id)model;
- (id)nowPlayingButton;
- (void)reloadTabs;
- (void)setBundleID:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDeferReload:(BOOL)arg1;
- (void)setDidFinishInitialLoad:(BOOL)arg1;
- (void)setExternalDevice:(id)arg1;
- (void)setHasCarScreen:(BOOL)arg1;
- (void)setHostTabBarController:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNowPlayingButton:(id)arg1;
- (void)setTabBarController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)tabBarController;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleAndTabBarItemsAtIndexes:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)visible;

@end
