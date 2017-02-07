/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVErrorResolverDelegate, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate> {
    unsigned int  _activeRewindHoldingAtStart;
    MPAVControllerToAggregateDCommunicator * _aggregateDCommunicator;
    unsigned int  _alwaysPlayWheneverPossible;
    NSString * _audioSessionModeOverride;
    unsigned int  _autoPlayWhenLikelyToKeepUp;
    unsigned int  _autoplayDisabledForCurrentItem;
    unsigned int  _boundaryTimeIndexLastPosted;
    id  _boundaryTimeObserver;
    NSArray * _boundaryTimes;
    unsigned int  _bufferingState;
    unsigned int  _canPlayFastForward;
    unsigned int  _canPlayFastReverse;
    unsigned int  _canSeekFwd;
    unsigned int  _canSeekRev;
    NSMutableSet * _clientsWantingExternalPlayback;
    struct __CFRunLoopTimer { } * _currentItemBookkeepingTimer;
    BOOL  _currentItemDidLoad;
    long long  _currentItemRevisionID;
    BOOL  _currentItemStartedAsCloudItem;
    int  _delayedCurrentTimeOptions;
    double  _delayedCurrentTimeToSet;
    NSNotification * _delayedPlaybackStateNotification;
    unsigned int  _didReachEnd;
    BOOL  _didResolveError;
    BOOL  _disableAirPlayMirroringDuringPlayback;
    BOOL  _disallowsAMRAudio;
    int  _displayOverridePlaybackState;
    unsigned int  _forceDelayedCurrentTimeToSet;
    unsigned int  _hasDelayedCurrentTimeToSet;
    BOOL  _hasPendingRate;
    BOOL  _hasSentTracePlaybackStartDidFinish;
    int  _indexChangeDirection;
    float  _inflightSeekRate;
    BOOL  _isConnectingPlayer;
    unsigned int  _isSeekingOrScrubbing;
    NSDate * _itemDidChangeDate;
    MPAVErrorResolver * _itemErrorResolver;
    unsigned int  _itemIndexAtDeath;
    double  _itemInitialBookmarkTime;
    int  _lastDisconnectReason;
    double  _lastInterruptionEnd;
    double  _lastKnownTimeBeforeDeath;
    double  _lastLoadedTime;
    double  _lastPlaybackIndexChangeTime;
    double  _lastSeekableEnd;
    double  _lastSeekableStart;
    double  _lastSetTime;
    double  _lastSetTimeChangeTime;
    unsigned int  _lastSetTimeMarker;
    BOOL  _limitsBandwidthForCellularAccess;
    BOOL  _managesAirPlayBehaviors;
    double  _maxSeekableFwd;
    double  _maxSeekableRev;
    BOOL  _muted;
    double  _nextFadeOutDuration;
    unsigned int  _numberOfErrorsSinceLastPlay;
    NSMapTable * _observerInfoToCoreMediaObserver;
    NSMutableArray * _observerInfos;
    unsigned int  _pausedDuringInterruption;
    BOOL  _pendingChangeForScanning;
    float  _pendingRate;
    MPAVItem * _pendingRateItem;
    MPAVRoute * _pickedRoute;
    AVPictureInPictureController * _pictureInPictureController;
    unsigned int  _playInBackgroundUserDefaultEnabled;
    int  _playbackMode;
    MPAVPlaylistManager * _playlistManager;
    float  _rateBeforeResignActive;
    float  _rateBeforeSeek;
    unsigned int  _resetRateAfterSeeking;
    int  _resetRateAfterSeekingUpdateDisabled;
    unsigned int  _resumePlaybackWhenActive;
    MPAVRoutingController * _routingController;
    int  _scanDirection;
    unsigned int  _scanLevel;
    double  _secondsSinceUbiquitousCheckpoint;
    double  _seekFwdSlop;
    double  _seekRevSlop;
    int  _seeklessState;
    unsigned int  _shouldAutoclearDisplayOverride;
    BOOL  _shouldEnforceHDCP;
    BOOL  _shouldPreventStateChangesForRateChange;
    BOOL  _shouldResetQueueWhenReachingEnd;
    BOOL  _shouldSkipToNextTrackOnResumeFromInterruption;
    unsigned int  _stallBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> * _stallTimerSource;
    int  _state;
    unsigned int  _stopAtEnd;
    double  _temporaryChapterTime;
    double  _tickInterval;
    struct __CFRunLoopTimer { } * _tickTimer;
    unsigned int  _tickTimerEnabled;
    int  _ubiquitousBookkeepingDisabledCount;
    BOOL  _useAirPlayMusicMode;
    unsigned int  _useApplicationAudioSession;
    BOOL  _usesAudioOnlyModeForExternalPlayback;
    BOOL  _valid;
    AVPlayerLayer * _videoLayer;
    unsigned int  _videoLayerUsageCount;
    MPVideoView * _videoView;
    Class  _videoViewClass;
    BOOL  _wantsPictureInPicture;
    double  _whenSawSeekableEnd;
    double  _whenSawSeekableStart;
}

@property (nonatomic, readonly) int _displayPlaybackState;
@property (nonatomic, readonly) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;
@property (nonatomic, readonly) float _playerRate;
@property (nonatomic, readonly) int activeRepeatType;
@property (nonatomic, readonly) int activeShuffleType;
@property (nonatomic) BOOL alwaysPlayWheneverPossible;
@property (nonatomic, retain) NSString *audioSessionModeOverride;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (nonatomic, readonly) MPQueuePlayer *avPlayer;
@property (nonatomic, readonly) unsigned int bufferingState;
@property (nonatomic) BOOL closedCaptioningEnabled;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic, readonly) BOOL currentItemIsRental;
@property (nonatomic, readonly) MPMediaItem *currentMediaItem;
@property (nonatomic, readonly) MPMediaQuery *currentMediaQuery;
@property (nonatomic, readonly) double currentMonotonousTime;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=destinationIsTVOut, setter=setDestinationIsTVOut:, nonatomic) BOOL destinationIsTVOut;
@property (nonatomic) BOOL disableAirPlayMirroringDuringPlayback;
@property (nonatomic) BOOL disallowsAMRAudio;
@property (nonatomic) int displayOverridePlaybackState;
@property (nonatomic, readonly) double durationOfCurrentItemIfAvailable;
@property (nonatomic, readonly) int externalPlaybackType;
@property (nonatomic, copy) NSString *externalPlaybackVideoGravity;
@property (nonatomic, readonly) MPQueueFeeder *feeder;
@property (nonatomic, readonly) BOOL hasVolumeControl;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCurrentItemReady;
@property (nonatomic, readonly) BOOL isExternalPlaybackActive;
@property (nonatomic) BOOL limitsBandwidthForCellularAccess;
@property (nonatomic) BOOL managesAirPlayBehaviors;
@property (nonatomic, readonly) BOOL muted;
@property (nonatomic) double nextFadeOutDuration;
@property (nonatomic, readonly) AVPictureInPictureController *pictureInPictureController;
@property (nonatomic, readonly) double playableDurationOfCurrentItemIfAvailable;
@property (nonatomic) int playbackMode;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (getter=_playlistManager, nonatomic, retain) MPAVPlaylistManager *playlistManager;
@property (nonatomic, readonly) float rate;
@property (nonatomic) int repeatType;
@property (getter=isRewindHoldingAtStart, nonatomic, readonly) BOOL rewindHoldingAtStart;
@property (nonatomic, readonly) NSString *routeNameForVolumeControl;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (nonatomic) BOOL shouldEnforceHDCP;
@property (nonatomic) BOOL shouldResetQueueWhenReachingEnd;
@property (nonatomic) BOOL shouldSkipToNextTrackOnResumeFromInterruption;
@property (nonatomic, readonly) BOOL showPlaybackStateOverlaysOnTVOut;
@property (nonatomic) int shuffleType;
@property (getter=isShuffled, nonatomic, readonly) BOOL shuffled;
@property (nonatomic) int state;
@property (nonatomic) BOOL stopAtEnd;
@property (readonly) Class superclass;
@property (getter=isTickTimerEnabled, nonatomic, readonly) BOOL tickTimerEnabled;
@property (nonatomic) BOOL ubiquitousBookkeepingEnabled;
@property (nonatomic) BOOL useAirPlayMusicMode;
@property (nonatomic) BOOL useApplicationAudioSession;
@property (nonatomic) BOOL usesAudioOnlyModeForExternalPlayback;
@property (getter=isValid, nonatomic, readonly) BOOL valid;
@property (nonatomic, readonly) AVPlayerLayer *videoLayer;
@property (nonatomic, readonly) MPVideoView *videoView;
@property (nonatomic) float volume;
@property (nonatomic) BOOL wantsPictureInPicture;

+ (id)_itemKeysToObserve;
+ (id)_playerKeysToObserve;
+ (void)initialize;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (BOOL)outputSupportsAC3;
+ (Class)playlistManagerClass;

- (void).cxx_destruct;
- (void)_addObserverInfo:(id)arg1 forCoreMediaObserver:(id)arg2 forInitialCreation:(BOOL)arg3;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyAirPlayMusicMode;
- (void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)_applyCellularAccessSettings;
- (void)_attemptAutoPlay;
- (BOOL)_canPlayItem:(id)arg1;
- (void)_cancelStallTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)arg1;
- (void)_checkForBoundaryTimeCrossing;
- (void)_clearLastSetTimeIfPlayerTimeIsValid;
- (void)_clearResetRateAfterSeeking;
- (void)_clearSeekingIntervalsForStreaming;
- (void)_clearVideoLayer:(BOOL)arg1;
- (void)_configureAVPlaylistManager;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_connectAVPlayer;
- (unsigned int)_currentIndexInBoundaryCMTimes:(id)arg1;
- (double)_currentTimeWithPreloadedPlayerTime:(BOOL)arg1 value:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_delayedSetCurrentTime;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (void)_disconnectAVPlayerWithReason:(int)arg1;
- (int)_displayPlaybackState;
- (void)_durationDidChange:(id)arg1;
- (void)_endSeekAndChangeRate:(BOOL)arg1;
- (id)_expectedAssetTypesForPlaybackMode:(int)arg1;
- (id)_extractImageFromMetadata:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (BOOL)_hasEnoughDataToPlay;
- (BOOL)_hasValidPlayerTime;
- (BOOL)_isChangingPlayerProperties;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (BOOL)_isVideoLayerAttachedToPlayer;
- (void)_itemAssetIsLoadedNotification:(id)arg1;
- (void)_itemBookmarkTimeDidChangeNotification:(id)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemFailedToPlayToEnd:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (BOOL)_itemIsRestricted:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemPlaybackModeAvailableNotification:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_networkChangedNotification:(id)arg1;
- (void)_pauseBookkeepingTimer;
- (void)_pausePlaybackIfNecessary;
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)arg1;
- (void)_pauseTickTimer;
- (void)_pauseWithFadeout:(float)arg1 forScanning:(BOOL)arg2;
- (id)_pickedRoute;
- (void)_playWithOptions:(unsigned int)arg1 allowsEnablingAutoPlay:(BOOL)arg2;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2;
- (id)_playerAVAudioSession;
- (id)_playerFailedToQueueNotification:(id)arg1;
- (float)_playerRate;
- (id)_playlistManager;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(int)arg1 newState:(int)arg2 delayable:(BOOL)arg3;
- (void)_prepareToPlayItem:(id)arg1;
- (void)_rateDidChange:(id)arg1;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_registerForPlaylistManager:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_resetInternalState;
- (void)_resumeBookkeepingTimer;
- (void)_resumePlaybackIfNecessary;
- (void)_resumeTickTimer;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
- (int)_seeklessStateForState:(int)arg1;
- (void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setActionAtEndAttributeForState:(int)arg1;
- (void)_setBufferingState:(unsigned int)arg1;
- (void)_setItemErrorResolver:(id)arg1;
- (void)_setLastSetTime:(double)arg1;
- (BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2;
- (BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2 withItem:(id)arg3;
- (void)_setState:(int)arg1;
- (void)_setValid:(BOOL)arg1;
- (void)_setVideoLayerAttachedToPlayer:(BOOL)arg1 force:(BOOL)arg2 pauseIfNecessary:(BOOL)arg3;
- (BOOL)_showsPlayingWhenInState:(int)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_streamBufferFull:(id)arg1;
- (void)_streamLikelyToKeepUp:(id)arg1;
- (void)_streamRanDry:(id)arg1;
- (void)_streamUnlikelyToKeepUp:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_timedMetadataAvailable:(id)arg1;
- (void)_tracksDidChange:(id)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_unregisterForPlayer:(id)arg1;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)_updateCurrentItemBookkeepingForTimerCallback;
- (void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(BOOL)arg1;
- (void)_updateLastSetTimeForCurrentItemIfNeeded;
- (void)_updatePlaybackModeForItem:(id)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer { }*)arg1;
- (void)_updateScanningRate;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_updateTypeForItem:(id)arg1;
- (void)_verifyDisplayProtection;
- (void)_volumeDidChangeNotification:(id)arg1;
- (int)activeRepeatType;
- (int)activeShuffleType;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(id /* block */)arg2;
- (void)airPlayFailedRentalDownloadRequired;
- (void)airPlayVideoEnded;
- (BOOL)allowsExternalPlayback;
- (BOOL)alwaysPlayWheneverPossible;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (id)audioSessionModeOverride;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (void)autoclearDisplayOverride;
- (id)avPlayer;
- (void)beginInterruption;
- (void)beginSeek:(int)arg1;
- (void)beginTickTimerWithInterval:(double)arg1;
- (void)beginUsingVideoLayer;
- (unsigned int)bufferingState;
- (BOOL)canPlayFastReverse;
- (BOOL)canSeekBackwards;
- (BOOL)canSeekForwards;
- (BOOL)canSkipToSeekableEnd;
- (void)changePlaybackIndexBy:(int)arg1;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3;
- (void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingUnskippableContent:(BOOL)arg4;
- (BOOL)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingUnskippableContent:(BOOL)arg4 error:(id*)arg5;
- (BOOL)closedCaptioningEnabled;
- (id)currentItem;
- (BOOL)currentItemIsRental;
- (id)currentMediaItem;
- (id)currentMediaQuery;
- (double)currentMonotonousTime;
- (double)currentTime;
- (double)currentTimeForBookmarking;
- (void)dealloc;
- (BOOL)destinationIsTVOut;
- (BOOL)disableAirPlayMirroringDuringPlayback;
- (void)disableAutoplayForCurrentItem;
- (BOOL)disallowsAMRAudio;
- (int)displayOverridePlaybackState;
- (double)durationOfCurrentItemIfAvailable;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)enableAutoplayForCurrentItem;
- (void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned int)arg3;
- (void)endPlayback;
- (void)endSeek;
- (void)endTickTimer;
- (void)endUsingVideoLayer;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(int)arg3;
- (int)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (id)feeder;
- (void)finalizeBookkeepingNow;
- (BOOL)forceRestartPlaybackIfNecessary;
- (BOOL)hasVolumeControl;
- (id)init;
- (BOOL)isCurrentItemReady;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isLiveStreaming;
- (BOOL)isPlaying;
- (BOOL)isRewindHoldingAtStart;
- (BOOL)isSeekingOrScrubbing;
- (BOOL)isShuffled;
- (BOOL)isTickTimerEnabled;
- (BOOL)isValid;
- (BOOL)limitsBandwidthForCellularAccess;
- (BOOL)managesAirPlayBehaviors;
- (BOOL)muted;
- (double)nextFadeOutDuration;
- (void)notifyAVPlayerItemDidChange:(id)arg1;
- (void)notifyAVPlayerItemWillChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (id)pictureInPictureController;
- (void)play;
- (void)playChapterTimeMarkerAtIndex:(unsigned int)arg1;
- (void)playChapterTimeMarkerAtIndex:(unsigned int)arg1 withOptions:(unsigned int)arg2;
- (void)playItemAtIndex:(unsigned int)arg1;
- (void)playItemAtIndex:(unsigned int)arg1 forceRestart:(BOOL)arg2;
- (void)playItemAtIndex:(unsigned int)arg1 withOptions:(unsigned int)arg2;
- (void)playWithOptions:(unsigned int)arg1;
- (double)playableDurationOfCurrentItemIfAvailable;
- (int)playbackMode;
- (void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4;
- (id)preferredLanguages;
- (float)rate;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTimeObserver:(id)arg1;
- (int)repeatType;
- (id)routeNameForVolumeControl;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setAlwaysPlayWheneverPossible:(BOOL)arg1;
- (void)setAudioSessionModeOverride:(id)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setAutoclearingDisplayOverridePlaybackState:(int)arg1;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2 shouldIgnorePlaybackQueueTransactions:(BOOL)arg3;
- (void)setClosedCaptioningEnabled:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (void)setDestinationIsTVOut:(BOOL)arg1;
- (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1;
- (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (void)setDisplayOverridePlaybackState:(int)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setLimitsBandwidthForCellularAccess:(BOOL)arg1;
- (void)setManagesAirPlayBehaviors:(BOOL)arg1;
- (void)setNextFadeOutDuration:(double)arg1;
- (void)setPlaybackIndex:(int)arg1;
- (void)setPlaybackIndex:(int)arg1 selectionDirection:(int)arg2;
- (void)setPlaybackMode:(int)arg1;
- (void)setPlaylistManager:(id)arg1;
- (BOOL)setRate:(float)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)setRepeatType:(int)arg1;
- (void)setShouldEnforceHDCP:(BOOL)arg1;
- (void)setShouldResetQueueWhenReachingEnd:(BOOL)arg1;
- (void)setShouldSkipToNextTrackOnResumeFromInterruption:(BOOL)arg1;
- (void)setShuffleType:(int)arg1;
- (void)setState:(int)arg1;
- (void)setStopAtEnd:(BOOL)arg1;
- (void)setUbiquitousBookkeepingEnabled:(BOOL)arg1;
- (void)setUseAirPlayMusicMode:(BOOL)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)setVolume:(float)arg1;
- (void)setWantsPictureInPicture:(BOOL)arg1;
- (BOOL)shouldDisplayAsPlaying;
- (BOOL)shouldEnforceHDCP;
- (BOOL)shouldHaveNoActionAtEndForState:(int)arg1;
- (BOOL)shouldResetQueueWhenReachingEnd;
- (BOOL)shouldSkipToNextTrackOnResumeFromInterruption;
- (BOOL)showPlaybackStateOverlaysOnTVOut;
- (int)shuffleType;
- (void)skipToSeekableEnd;
- (void)skipToSeekableStart;
- (int)state;
- (BOOL)stopAtEnd;
- (void)tickTimerFired;
- (double)timeOfPlayableEnd;
- (double)timeOfPlayableStart;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (void)togglePlayback;
- (void)togglePlaybackWithOptions:(unsigned int)arg1;
- (BOOL)ubiquitousBookkeepingEnabled;
- (void)updateBookkeepingNow;
- (BOOL)useAirPlayMusicMode;
- (BOOL)useApplicationAudioSession;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (id)videoLayer;
- (id)videoView;
- (float)volume;
- (BOOL)wantsPictureInPicture;

@end
