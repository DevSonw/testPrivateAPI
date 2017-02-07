/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {
    NSString * _audioCategory;
    NACEventThrottler * _defaultsThrottler;
    <NACVolumeControllerDelegate> * _delegate;
    float  _hapticIntensity;
    BOOL  _prominentHapticEnabled;
    BOOL  _systemMuted;
    NSNumber * _volumeValue;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (readonly) unsigned int hash;
@property (getter=isMuted, nonatomic, readonly) BOOL muted;
@property (getter=isProminentHapticEnabled, nonatomic) BOOL prominentHapticEnabled;
@property (readonly) Class superclass;
@property (getter=isSystemMuted, nonatomic) BOOL systemMuted;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) BOOL volumeControlAvailable;
@property (nonatomic, readonly) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic, readonly) BOOL volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_persistVolumeValue:(id)arg1;
- (void)_setNeedsVolumeReload;
- (id)_volumeDictionary;
- (void)beginObservingVolume;
- (void)dealloc;
- (id)delegate;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (id)init;
- (id)initWithAudioCategory:(id)arg1;
- (BOOL)isMuted;
- (BOOL)isProminentHapticEnabled;
- (BOOL)isSystemMuted;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isVolumeWarningEnabled;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setProminentHapticEnabled:(BOOL)arg1;
- (void)setSystemMuted:(BOOL)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3;
- (float)volumeValue;

@end
