/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface UIMoviePlayerController : NSObject {
    MPMovieAccessLog * _accessLog;
    <MPVideoControllerProtocol> * _activeVideoController;
    UIView * _alternateTextTrackView;
    BOOL  _alwaysAllowHidingControlsOverlay;
    BOOL  _areClosedCaptionsAvailable;
    unsigned int  _audioControlsStyle;
    NSString * _audioSessionModeOverride;
    unsigned int  _autoRotationMask;
    UIImage * _backgroundPlaceholderImage;
    unsigned int  _bufferingState;
    BOOL  _canContinuePlayingInBackground;
    BOOL  _canContinuePlayingWhenLocked;
    NSArray * _closedCaptionData;
    BOOL  _closedCaptioningEnabled;
    NSDate * _currentDate;
    double  _currentTime;
    id  _delegate;
    unsigned int  _desiredParts;
    BOOL  _disableAlternateTextTrackRendering;
    BOOL  _disallowsVideoOut;
    unsigned int  _displayableParts;
    double  _duration;
    MPMovieErrorLog * _errorLog;
    long long  _fileSize;
    BOOL  _fullscreen;
    UIView * _fullscreenView;
    _UIHostedWindow * _hostedWindow;
    unsigned int  _hostedWindowContextID;
    struct __CFBag { } * _ignoredChangeTypes;
    int  _interfaceOrientation;
    int  _interfaceOrientationFromDevice;
    BOOL  _isPreparedForPlayback;
    MPAVItem * _item;
    int  _lastSetUIInterfaceOrientation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _layoutRect;
    BOOL  _limitReadAhead;
    NSString * _moviePath;
    NSString * _movieSubtitle;
    NSString * _movieTitle;
    UIMovieView * _movieView;
    struct { 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int wantsControlsOverlayVis : 1; 
        unsigned int wantsControlsOverlayAnim : 1; 
        unsigned int wantsControlsOverlayDisableAutohide : 1; 
        unsigned int wantsFullscreen : 1; 
        unsigned int alwaysFullscreen : 1; 
        unsigned int canAnimateControlsOverlay : 1; 
        unsigned int autoplayWhenLikelyToKeepUp : 1; 
        unsigned int disallowsVideoOut : 1; 
        unsigned int exited : 1; 
        unsigned int generatingOrientationNotifications : 1; 
        unsigned int forStreaming : 1; 
        unsigned int isExternalTransformationActive : 1; 
        unsigned int controlsVisibleBeforeExternalTransformation : 1; 
        unsigned int isActive : 1; 
        unsigned int resigningActive : 1; 
        unsigned int didResignActive : 1; 
        unsigned int uiPrepared : 1; 
        unsigned int isChangingMoviePath : 1; 
        unsigned int alwaysAllowHidingControlsOverlay : 1; 
        unsigned int schedulePortraitLoadingIndicator : 1; 
        unsigned int clientClearedMoviePath : 1; 
        unsigned int canCommitOverlayChanges : 1; 
        unsigned int usingDebugTestPath : 1; 
        unsigned int allowsWirelessPlayback : 1; 
        unsigned int useHostedWindowWhenFullscreen : 1; 
    }  _mpcBitfield;
    BOOL  _muted;
    struct CGSize { 
        float width; 
        float height; 
    }  _naturalSize;
    unsigned int  _options;
    int  _pendingInterfaceOrientation;
    MPAVItem * _pendingItem;
    MPAVItem * _pendingItemWithDifferentType;
    unsigned int  _playableContentType;
    unsigned int  _playableContentTypeOverride;
    double  _playableDuration;
    double  _playableEndTime;
    double  _playableStartTime;
    NSString * _playbackErrorDescription;
    float  _playbackRate;
    unsigned int  _playbackState;
    MPAVController * _player;
    UINavigationController * _portraitNavigationController;
    UIImage * _posterImage;
    double  _seekableEndTime;
    double  _seekableStartTime;
    BOOL  _stopAtEnd;
    double  _timeToSnapshot;
    double  _timeWhenResignedActive;
    UIViewController * _topViewController;
    int  _transitionCount;
    unsigned int  _unmodifiedDisplayableParts;
    BOOL  _useApplicationAudioSession;
    BOOL  _useHostedWindowWhenFullscreen;
    BOOL  _videoOutActive;
    MPVideoView * _videoView;
    UIView * _view;
    float  _volume;
    NSString * _youTubeVideoID;
}

@property (nonatomic, readonly) MPMovieAccessLog *accessLog;
@property (nonatomic, readonly) UIView *alternateTextTrackView;
@property (nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property (nonatomic, readonly) BOOL areClosedCaptionsAvailable;
@property (nonatomic) unsigned int audioControlsStyle;
@property (nonatomic, retain) NSString *audioSessionModeOverride;
@property (nonatomic, retain) UIImage *backgroundPlaceholderImage;
@property (nonatomic, readonly) unsigned int bufferingState;
@property (nonatomic, readonly) BOOL canContinuePlayingInBackground;
@property (nonatomic, readonly) BOOL canContinuePlayingWhenLocked;
@property (nonatomic) BOOL closedCaptioningEnabled;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic) double currentTime;
@property (nonatomic) id delegate;
@property (nonatomic) BOOL disableAlternateTextTrackRendering;
@property (nonatomic) BOOL disallowsVideoOut;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) MPMovieErrorLog *errorLog;
@property (nonatomic, readonly) long long fileSize;
@property (getter=isFullscreen, nonatomic) BOOL fullscreen;
@property (nonatomic, readonly) UIView *fullscreenView;
@property (nonatomic, readonly) _UIHostedWindow *hostedWindow;
@property (nonatomic, readonly) unsigned int hostedWindowContextID;
@property (nonatomic, readonly) BOOL isPreparedForPlayback;
@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic) BOOL limitReadAhead;
@property (nonatomic, copy) NSString *moviePath;
@property (nonatomic, copy) NSString *movieSubtitle;
@property (nonatomic, copy) NSString *movieTitle;
@property (nonatomic, readonly) UIMovieView *movieView;
@property (nonatomic, readonly) BOOL muted;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic) unsigned int options;
@property (nonatomic) unsigned int playableContentType;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) double playableEndTime;
@property (nonatomic, readonly) double playableStartTime;
@property (nonatomic, copy) NSString *playbackErrorDescription;
@property (nonatomic) float playbackRate;
@property (nonatomic, readonly) unsigned int playbackState;
@property (nonatomic, retain) UIImage *posterImage;
@property (nonatomic, readonly) double seekableEndTime;
@property (nonatomic, readonly) double seekableStartTime;
@property (nonatomic) BOOL stopAtEnd;
@property (nonatomic) BOOL useApplicationAudioSession;
@property (nonatomic) BOOL useHostedWindowWhenFullscreen;
@property (nonatomic, readonly) BOOL videoOutActive;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) float volume;
@property (nonatomic, copy) NSString *youTubeVideoID;

- (void).cxx_destruct;
- (id)accessLog;
- (id)alternateTextTrackView;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (BOOL)areClosedCaptionsAvailable;
- (unsigned int)audioControlsStyle;
- (id)audioSessionModeOverride;
- (id)backgroundPlaceholderImage;
- (unsigned int)bufferingState;
- (BOOL)canContinuePlayingInBackground;
- (BOOL)canContinuePlayingWhenLocked;
- (BOOL)closedCaptioningEnabled;
- (id)currentDate;
- (double)currentTime;
- (id)delegate;
- (BOOL)disableAlternateTextTrackRendering;
- (BOOL)disallowsVideoOut;
- (double)duration;
- (id)errorLog;
- (long long)fileSize;
- (id)fullscreenView;
- (id)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (BOOL)isFullscreen;
- (BOOL)isPreparedForPlayback;
- (id)item;
- (BOOL)limitReadAhead;
- (id)moviePath;
- (id)movieSubtitle;
- (id)movieTitle;
- (id)movieView;
- (BOOL)muted;
- (struct CGSize { float x1; float x2; })naturalSize;
- (unsigned int)options;
- (unsigned int)playableContentType;
- (double)playableDuration;
- (double)playableEndTime;
- (double)playableStartTime;
- (id)playbackErrorDescription;
- (float)playbackRate;
- (unsigned int)playbackState;
- (id)posterImage;
- (double)seekableEndTime;
- (double)seekableStartTime;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (void)setAudioControlsStyle:(unsigned int)arg1;
- (void)setAudioSessionModeOverride:(id)arg1;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (void)setClosedCaptioningEnabled:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAlternateTextTrackRendering:(BOOL)arg1;
- (void)setDisallowsVideoOut:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setLimitReadAhead:(BOOL)arg1;
- (void)setMoviePath:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setPlayableContentType:(unsigned int)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setStopAtEnd:(BOOL)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setYouTubeVideoID:(id)arg1;
- (BOOL)stopAtEnd;
- (BOOL)useApplicationAudioSession;
- (BOOL)useHostedWindowWhenFullscreen;
- (BOOL)videoOutActive;
- (id)view;
- (float)volume;
- (id)youTubeVideoID;

@end