/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHLivePhotoView : UIView <ISChangeObserver> {
    ISPlayerItem * __playerItem;
    BOOL  __playingVitality;
    int  _currentPlaybackStyle;
    <PHLivePhotoViewDelegate> * _delegate;
    struct { 
        BOOL respondsToWillBeginPlaybackWithStyle; 
        BOOL respondsToDidEndPlayback; 
    }  _delegateFlags;
    struct { 
        BOOL respondsToDidEndPlayingVitality; 
        BOOL respondsToDidBeginHinting; 
    }  _delegatePrivateFlags;
    PHLivePhoto * _livePhoto;
    BOOL  _muted;
    UIView * _photoView;
    ISLivePhotoPlayer * _player;
    ISLivePhotoUIView * _playerView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _scaleAnchorOffset;
    BOOL  _shouldApplyTargetReadiness;
    BOOL  _showsStatusBorder;
    int  _targetReadiness;
}

@property (setter=_setPlayerItem:, nonatomic, retain) ISPlayerItem *_playerItem;
@property (setter=_setPlayingVitality:, nonatomic) BOOL _playingVitality;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHLivePhotoViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (nonatomic, retain) UIView *photoView;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (nonatomic, retain) ISLivePhotoPlayer *player;
@property (nonatomic, retain) ISLivePhotoUIView *playerView;
@property (nonatomic) struct CGPoint { float x1; float x2; } scaleAnchorOffset;
@property (nonatomic) BOOL shouldApplyTargetReadiness;
@property (nonatomic) BOOL showsStatusBorder;
@property (readonly) Class superclass;
@property (nonatomic) int targetReadiness;

+ (id)livePhotoBadgeImageWithOptions:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_commonPHLivePhotoViewInitialization;
- (void)_handlePlayerItemStatusChanged;
- (void)_playerDidBeginHinting;
- (id)_playerItem;
- (BOOL)_playingVitality;
- (void)_setPlayerItem:(id)arg1;
- (void)_setPlayingVitality:(BOOL)arg1;
- (void)_updateCurrentPlaybackStyle;
- (void)_updatePlayerAudioEnabled;
- (void)_updatePlayerItemLoadingTarget;
- (void)_updatePlayingVitality;
- (void)_updateStatusBorder;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isMuted;
- (id)livePhoto;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (id)photoView;
- (id)playbackGestureRecognizer;
- (id)player;
- (id)playerView;
- (struct CGPoint { float x1; float x2; })scaleAnchorOffset;
- (void)setContentMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setScaleAnchorOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShouldApplyTargetReadiness:(BOOL)arg1;
- (void)setShowsStatusBorder:(BOOL)arg1;
- (void)setTargetReadiness:(int)arg1;
- (BOOL)shouldApplyTargetReadiness;
- (BOOL)showsStatusBorder;
- (void)startPlaybackWithStyle:(int)arg1;
- (void)stopPlayback;
- (int)targetReadiness;

@end
