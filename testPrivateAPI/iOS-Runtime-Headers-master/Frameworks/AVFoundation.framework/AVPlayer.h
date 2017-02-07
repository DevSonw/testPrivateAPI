/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayer : NSObject <AVAudioSessionParticipant> {
    AVPlayerInternal * _player;
}

@property (getter=_isPIPModePossible, nonatomic, readonly) BOOL PIPModePossible;
@property (setter=_setDisplaysUsedForPlayback:, nonatomic, copy) NSArray *_displaysUsedForPlayback;
@property (nonatomic, readonly) int _externalProtectionStatus;
@property (nonatomic) BOOL allowsOutOfBandTextTrackRendering;
@property (nonatomic) BOOL allowsPixelBufferPoolSharing;
@property (nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically;
@property (nonatomic, copy) NSString *audioOutputDeviceUniqueID;
@property (getter=isAudioPlaybackEnabledAtAllRates, nonatomic, readonly) BOOL audioPlaybackEnabledAtAllRates;
@property (retain) AVAudioSession *audioSession;
@property (getter=_cachedValueForPIPModePossible, nonatomic, readonly) BOOL cachedValueForPIPModePossible;
@property (nonatomic) BOOL disallowsAMRAudio;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) float maxRateForAudioPlayback;
@property (nonatomic) float minRateForAudioPlayback;
@property (nonatomic, copy) NSString *multichannelAudioStrategy;
@property (nonatomic, readonly) int status;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (long)_createFigPlayerWithType:(int)arg1 player:(struct OpaqueFigPlayer {}**)arg2;
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfUserVolume;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (BOOL)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+ (void)initialize;
+ (BOOL)isIAPDExtendedModeActive;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;

- (BOOL)_CALayerDestinationIsTVOut;
- (int)_actionAtItemEnd;
- (void)_addFPListeners;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;
- (void)_addLayer:(id)arg1;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_advanceToNextItem;
- (BOOL)_airPlayVideoActive;
- (BOOL)_allowsExternalPlayback;
- (BOOL)_allowsPixelBufferPoolSharing;
- (id)_ancillaryPerformanceInformationForDisplay;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_appliesMediaSelectionCriteriaAutomatically;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(id /* block */)arg1;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachVideoLayersToFigPlayer;
- (id)_audioOutputDeviceUniqueID;
- (id)_avPlayerLayers;
- (BOOL)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (struct CGSize { float x1; float x2; })_cachedPresentationSizeOfCurrentItem;
- (id)_cachedValueForKey:(id)arg1;
- (BOOL)_cachedValueForPIPModePossible;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id /* block */)arg1;
- (BOOL)_carplayIsActive;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_clientName;
- (int)_clientPriority;
- (id)_closedCaptionLayers;
- (struct OpaqueFigPlayer { }*)_copyFigPlayer;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_createAndConfigureFigPlayerWithType:(int)arg1 completionHandler:(id /* block */)arg2;
- (int)_createPrerollID;
- (int)_defaultActionAtItemEnd;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_didChangeValueForTimeControlStatusAndReason;
- (void)_didFinishSuspension:(id)arg1;
- (BOOL)_disallowsAMRAudio;
- (BOOL)_disallowsHardwareAcceleratedVideoDecoder;
- (id)_displaysUsedForPlayback;
- (BOOL)_dynamicallyChoosesInitialVariant;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (BOOL)_externalPlaybackActive;
- (int)_externalProtectionStatus;
- (int)_externalProtectionStatusWithCodeVerification:(BOOL)arg1;
- (int)_extractFPExternalProtectionStatus:(id)arg1 withCodeVerification:(BOOL)arg2;
- (id)_fpNotificationNames;
- (BOOL)_hasAssociatedAVPlayerLayerInPIPMode;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (int)_inferredTimeControlStatusAndWaitingReason:(id*)arg1 forRate:(float)arg2;
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)_isChangingValueForKey:(id)arg1;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (BOOL)_isDisplayingClosedCaptions;
- (BOOL)_isIAPDExtendedModeActive;
- (BOOL)_isMuted;
- (BOOL)_isPIPModePossible;
- (void)_itemIsReadyToPlay:(id)arg1;
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (id)_items;
- (id)_items_invokeOnIvarAccessQueue;
- (BOOL)_limitsBandwidthForCellularAccess;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (struct CGSize { float x1; float x2; })_maximumAVPlayerLayerDisplaySize;
- (id)_multichannelAudioStrategy;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;
- (BOOL)_outputObscuredDueToInsufficientExternalProtectionPerformingCodeVerification:(BOOL)arg1;
- (id)_pendingFigPlayerProperties;
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;
- (id)_pixelBufferAttributeMediator;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)arg1;
- (id)_playbackDisplaysForFigPlayer;
- (void)_playerLayer:(id)arg1 replaceVideoLayer:(id)arg2 with:(id)arg3;
- (float)_playerVolume;
- (BOOL)_preventsSleepDuringVideoPlayback;
- (id)_propertyStorage;
- (float)_rate;
- (id)_reasonForWaitingToPlay;
- (void)_removeAllItems;
- (void)_removeAllLayers;
- (void)_removeFPListeners;
- (void)_removeItem:(id)arg1;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(id /* block */)arg1 modificationBlock:(id /* block */)arg2;
- (void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)arg1;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)_setClientName:(id)arg1;
- (void)_setClientPriority:(int)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (void)_setDynamicallyChoosesInitialVariant:(BOOL)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_setLimitsBandwidthForCellularAccess:(BOOL)arg1;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(BOOL)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (BOOL)_shouldDetachVideoLayersFromFigPlayer;
- (BOOL)_shouldLogPerformanceData;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_stateDispatchQueue;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_subtitleLayers;
- (id)_synchronizeWithNewCurrentItem;
- (int)_timeControlStatus;
- (int)_timeControlStatusAndWaitingReason:(id*)arg1;
- (int)_timeControlStatusAndWaitingReason:(id*)arg1 forPlaybackState:(int)arg2;
- (id /* block */)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (float)_userVolume;
- (BOOL)_usesAudioOnlyModeForExternalPlayback;
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)_usesLegacyAutomaticWaitingBehavior;
- (id)_videoLayers;
- (id)_weakReference;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_willChangeValueForTimeControlStatusAndReason;
- (void)_willEnterForeground:(id)arg1;
- (int)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (BOOL)allowsAirPlayVideo;
- (BOOL)allowsExternalPlayback;
- (BOOL)allowsOutOfBandTextTrackRendering;
- (BOOL)allowsPixelBufferPoolSharing;
- (BOOL)appliesMediaSelectionCriteriaAutomatically;
- (id)audioOutputDeviceUniqueID;
- (id)audioSession;
- (BOOL)autoSwitchStreamVariants;
- (BOOL)automaticallyWaitsToMinimizeStalling;
- (void)cancelPendingPrerolls;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })dimensionsOfReservedVideoMemory;
- (BOOL)disallowsAMRAudio;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (id)dispatchQueue;
- (id)error;
- (id)expectedAssetTypes;
- (int)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (void)finalize;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isAirPlayVideoActive;
- (BOOL)isAudioPlaybackEnabledAtAllRates;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)isDisplayingClosedCaptions;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isMuted;
- (BOOL)isPIPModePossible;
- (struct OpaqueCMClock { }*)masterClock;
- (float)maxRateForAudioPlayback;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (float)minRateForAudioPlayback;
- (id)multichannelAudioStrategy;
- (id)outputContext;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (void)playImmediatelyAtRate:(float)arg1;
- (id)playerAVAudioSession;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (void)prerollAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (float)rate;
- (id)reasonForWaitingToPlay;
- (void)removeAudioPlaybackRateLimits;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)seekToDate:(id)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setActionAtItemEnd:(int)arg1;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAllowsOutOfBandTextTrackRendering:(BOOL)arg1;
- (void)setAllowsPixelBufferPoolSharing:(BOOL)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(BOOL)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setAutoSwitchStreamVariants:(BOOL)arg1;
- (void)setAutomaticallyWaitsToMinimizeStalling:(BOOL)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { float x1; float x2; })arg1;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (void)setMultichannelAudioStrategy:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playImmediately:(BOOL)arg3;
- (void)setShouldReduceResourceUsage:(BOOL)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)setUsesDedicatedNotificationQueueForMediaServices:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVibrationPattern:(id)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)shouldReduceResourceUsage;
- (int)status;
- (int)timeControlStatus;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (BOOL)usesDedicatedNotificationQueueForMediaServices;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (id)valueForKeyForKVO:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vibrationPattern;
- (float)volume;
- (void)willChangeValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_generateSnapshotImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
