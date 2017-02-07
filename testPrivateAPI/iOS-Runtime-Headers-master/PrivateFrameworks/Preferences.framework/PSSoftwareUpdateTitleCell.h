/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTitleCell : PSTableCell {
    PSSoftwareUpdateAnimatedIcon * _animatedGearView;
    BOOL  _animatingGearView;
    UIImageView * _gearBackgroundImageView;
    UIProgressView * _progressBar;
    int  _progressStyle;
    PSWebContainerView * _releaseNotesSummaryView;
    UILabel * _updateStatusLabel;
    NSLayoutConstraint * _updateStatusLabelVerticalConstraint;
}

@property (nonatomic, readonly) UIImage *gearBackgroundImage;
@property (nonatomic, retain) UIImageView *gearBackgroundImageView;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (nonatomic) int progressDisplayStyle;
@property (nonatomic, readonly) PSWebContainerView *releaseNotesSummaryView;
@property (nonatomic, readonly) UILabel *updateStatusLabel;
@property (nonatomic, retain) NSLayoutConstraint *updateStatusLabelVerticalConstraint;

+ (int)cellStyle;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)configureImageView;
- (void)configureProgressBar;
- (void)configurePublisherLabel;
- (void)configureReleaseNotesSummaryView;
- (void)configureUpdateNameLabel;
- (void)configureUpdateStatusLabel;
- (void)createGearIconConstraints;
- (void)didMoveToSuperview;
- (id)gearBackgroundImage;
- (id)gearBackgroundImageView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)newGearBackgroundImageView;
- (id)newProgressBar;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newUpdateStatusLabel;
- (float)preferredHeightWithTable:(id)arg1;
- (id)progressBar;
- (int)progressDisplayStyle;
- (id)releaseNotesSummaryView;
- (void)setAnimatingGearView:(BOOL)arg1;
- (void)setGearBackgroundImageView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressDisplayStyle:(int)arg1;
- (void)setPublisherText:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setUpdateName:(id)arg1;
- (void)setUpdateStatusLabelVerticalConstraint:(id)arg1;
- (void)setupViews;
- (void)updateConstraints;
- (void)updateProgressTintColor;
- (id)updateStatusLabel;
- (id)updateStatusLabelVerticalConstraint;

@end