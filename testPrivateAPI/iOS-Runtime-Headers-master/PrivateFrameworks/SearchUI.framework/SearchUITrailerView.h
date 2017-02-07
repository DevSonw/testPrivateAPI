/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITrailerView : UIView {
    SearchUICardViewController * _controller;
    SKUIPlayButton * _playButton;
    SFPunchout * _punchout;
    SFMediaPlayerCardSection * _section;
    UILabel * _titleLabel;
}

@property SearchUICardViewController *controller;
@property (retain) SKUIPlayButton *playButton;
@property (retain) SFPunchout *punchout;
@property (retain) SFMediaPlayerCardSection *section;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)controller;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithMediaItem:(id)arg1 controller:(id)arg2 section:(id)arg3;
- (id)playButton;
- (void)playTrailer;
- (id)punchout;
- (id)section;
- (void)setController:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
