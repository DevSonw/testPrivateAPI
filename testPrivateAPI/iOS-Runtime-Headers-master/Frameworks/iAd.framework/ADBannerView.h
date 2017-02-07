/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate> {
    ADAdSpace * _adSpace;
    int  _adType;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    BOOL  _bannerViewActionInProgress;
    float  _constraintBasedWidth;
    BOOL  _createdForIBInternal;
    BOOL  _debugHighlightEnabled;
    BOOL  _determiningConstraintBasedWidth;
    BOOL  _dimmed;
    ADDimmerView * _dimmerView;
    int  _displayMode;
    BOOL  _displayed;
    UIView * _highlightClippedView;
    UIView * _highlightHittableView;
    NSTimer * _highlightUpdateTimer;
    BOOL  _imageUpdateEnabled;
    BOOL  _inSecondConstraintsPass;
    int  _internalAdType;
    int  _options;
    ADPrivacyButton * _privacyButton;
    BOOL  _scrolling;
    NSURL * _serverURL;
    int  _state;
    id /* block */  _stateChangedBlock;
    <ADBannerViewDelegate> * _weakDelegate;
    <ADBannerViewInternalDelegate> * _weakInternalDelegate;
}

@property (nonatomic, retain) ADAdSpace *adSpace;
@property (nonatomic, readonly) UIView *adSpaceView;
@property (nonatomic, readonly) int adType;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (getter=isBannerLoaded, nonatomic, readonly) BOOL bannerLoaded;
@property (getter=isBannerViewActionInProgress, nonatomic) BOOL bannerViewActionInProgress;
@property (nonatomic) float constraintBasedWidth;
@property (nonatomic, readonly) BOOL createdForIBInternal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugHighlightEnabled;
@property (nonatomic) <ADBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL determiningConstraintBasedWidth;
@property (nonatomic) BOOL dimmed;
@property (nonatomic, retain) ADDimmerView *dimmerView;
@property (nonatomic) int displayMode;
@property (nonatomic) BOOL displayed;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *highlightClippedView;
@property (nonatomic, retain) UIView *highlightHittableView;
@property (nonatomic, retain) NSTimer *highlightUpdateTimer;
@property (nonatomic) BOOL imageUpdateEnabled;
@property (nonatomic) BOOL inSecondConstraintsPass;
@property (nonatomic, readonly) int internalAdType;
@property (nonatomic, readonly) int options;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, retain) ADPrivacyButton *privacyButton;
@property (nonatomic) BOOL scrolling;
@property (nonatomic, copy) NSURL *serverURL;
@property (nonatomic) int state;
@property (nonatomic, copy) id /* block */ stateChangedBlock;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adWindowBounds;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameThatFits:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3;
+ (struct CGSize { float x1; float x2; })_landscapeBannerSize;
+ (struct CGSize { float x1; float x2; })_portraitBannerSize;
+ (struct CGSize { float x1; float x2; })_sizeThatFitsSize:(struct CGSize { float x1; float x2; })arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3;
+ (BOOL)requiresConstraintBasedLayout;
+ (void)setServerURL:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeFromBannerContentSizeIdentifier:(id)arg1;

- (id)_accessibilityUserTestingElementAttributes;
- (void)_commonInit;
- (void)_forwardErrorToDelegate:(id)arg1;
- (id)_initWithInternalAdType:(int)arg1 options:(int)arg2;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_resetHighlightTimer;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(BOOL)arg1;
- (void)_updateHighlight:(id)arg1;
- (int)action;
- (id)adSpace;
- (id)adSpaceView;
- (int)adType;
- (id)advertisingSection;
- (id)audioURL;
- (id)authenticationUserName;
- (void)bannerDidAppear;
- (void)bannerDidDisappear;
- (void)bannerTappedAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginAction;
- (void)cancelBannerViewAction;
- (void)cancelScheduledAd;
- (void)changeBannerViewState:(int)arg1;
- (float)constraintBasedWidth;
- (id)context;
- (BOOL)createdForIBInternal;
- (id)currentContentSizeIdentifier;
- (void)cycleImpressionImmediately;
- (void)dealloc;
- (BOOL)debugHighlightEnabled;
- (id)delegate;
- (id)descriptionForLCD;
- (BOOL)determiningConstraintBasedWidth;
- (void)didMoveToWindow;
- (BOOL)dimmed;
- (id)dimmerView;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (int)displayMode;
- (BOOL)displayed;
- (BOOL)enableDimmerView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAction;
- (BOOL)hasTransparencyDetails;
- (id)headlineForLCD;
- (id)highlightClippedView;
- (id)highlightHittableView;
- (id)highlightUpdateTimer;
- (id)identifier;
- (BOOL)imageUpdateEnabled;
- (BOOL)inSecondConstraintsPass;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 adType:(int)arg2;
- (id)initWithAdType:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)internalAdType;
- (id)internalDelegate;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isBannerLoaded;
- (BOOL)isBannerViewActionInProgress;
- (BOOL)isiAdContentServer;
- (void)layoutSubviews;
- (void)loadAd:(id)arg1;
- (id)logoImageURL;
- (id)nativeMetadata;
- (int)options;
- (void)pauseBannerMedia;
- (void)playbackFailed:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)playbackStartedForImpressionSource:(int)arg1;
- (void)prerollDidStart;
- (void)prerollDidStop;
- (id)presentingViewController;
- (id)privacyButton;
- (void)privacyButtonWasTapped;
- (id)publicImpressionAttributes;
- (void)reportNativeClickEvent;
- (id)requiredContentSizeIdentifiers;
- (void)resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)resumeBannerMedia;
- (void)resumeImpressionCycling;
- (void)scheduleAd;
- (BOOL)scrolling;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (id)serverURL;
- (void)setAdSpace:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBannerViewActionInProgress:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setConstraintBasedWidth:(float)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (void)setDebugHighlightEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeterminingConstraintBasedWidth:(BOOL)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDimmerView:(id)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setDisplayed:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHighlightClippedView:(id)arg1;
- (void)setHighlightHittableView:(id)arg1;
- (void)setHighlightUpdateTimer:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageUpdateEnabled:(BOOL)arg1;
- (void)setInSecondConstraintsPass:(BOOL)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setPrivacyButton:(id)arg1;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
- (void)setScrolling:(BOOL)arg1;
- (void)setServerURL:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStateChangedBlock:(id /* block */)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)skipThreshold;
- (int)state;
- (id /* block */)stateChangedBlock;
- (id)staticImageURL;
- (void)storyboardViewControllerDidPresent;
- (void)suspendImpressionCycling;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateConstraints;
- (void)updatePlaceholderImage;
- (void)userDidSkipPreroll;
- (id)videoAssets;

@end