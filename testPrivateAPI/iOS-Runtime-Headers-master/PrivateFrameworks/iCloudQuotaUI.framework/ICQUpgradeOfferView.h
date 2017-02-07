/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeOfferView : ICQPageView <UITextViewDelegate> {
    UILayoutGuide * _abovePurchaseLayoutGuide;
    NSArray * _activeConstraints;
    UILayoutGuide * _belowPurchaseLayoutGuide;
    <ICQPageDelegate> * _delegate;
    _ICQTextView * _finePrintView;
    BOOL  _isResizingFonts;
    BOOL  _layoutGuideProblem;
    UIButton * _learnMoreButton;
    ICQLink * _learnMoreLink;
    UILabel * _messageLabel;
    UILayoutGuide * _navigationBarLayoutGuide;
    UIButton * _purchaseButton;
    ICQLink * _purchaseLink;
    NSArray * _serviceViews;
    UIActivityIndicatorView * _spinner;
    BOOL  _suppressResizingFonts;
    UILabel * _titleLabel;
    float  _titleTopMargin;
    NSLayoutConstraint * _titleTopMarginConstraint;
    int  _upgradeMode;
    _ICQUpgradeOfferPageSpecification * _upgradeOfferPageSpecification;
}

@property (nonatomic, readonly) UILayoutGuide *abovePurchaseLayoutGuide;
@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) UILayoutGuide *belowPurchaseLayoutGuide;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _ICQTextView *finePrintView;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic, readonly) ICQLink *learnMoreLink;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, readonly) UILayoutGuide *navigationBarLayoutGuide;
@property (nonatomic, retain) UIButton *purchaseButton;
@property (nonatomic, readonly) ICQLink *purchaseLink;
@property (nonatomic, retain) NSArray *serviceViews;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) float titleTopMargin;
@property (nonatomic, readonly) NSLayoutConstraint *titleTopMarginConstraint;
@property (nonatomic) int upgradeMode;
@property (nonatomic, retain) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;

- (void).cxx_destruct;
- (void)_resetAdjustableItems;
- (BOOL)_shrinkFontOfLabel:(id)arg1;
- (void)_shrinkTopMargin;
- (float)_superGetTopMargin;
- (id)abovePurchaseLayoutGuide;
- (id)activeConstraints;
- (id)belowPurchaseLayoutGuide;
- (id)delegate;
- (id)finePrintAttributes;
- (id)finePrintParagraphStyle;
- (id)finePrintParagraphStyleAttributes;
- (id)finePrintView;
- (id)finePrintViewAttributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (void)learnMoreButtonTapped:(id)arg1;
- (id)learnMoreLink;
- (id)messageLabel;
- (id)navigationBarLayoutGuide;
- (id)purchaseButton;
- (void)purchaseButtonTapped:(id)arg1;
- (id)purchaseLink;
- (id)serviceViews;
- (void)setActiveConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinePrintView:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setPurchaseButton:(id)arg1;
- (void)setServiceViews:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleTopMargin:(float)arg1;
- (void)setUpgradeMode:(int)arg1;
- (void)setUpgradeOfferPageSpecification:(id)arg1;
- (id)spinner;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)titleLabel;
- (float)titleTopMargin;
- (id)titleTopMarginConstraint;
- (void)updateConstraints;
- (int)upgradeMode;
- (id)upgradeOfferPageSpecification;
- (id)upgradeOfferSpecification;

@end
