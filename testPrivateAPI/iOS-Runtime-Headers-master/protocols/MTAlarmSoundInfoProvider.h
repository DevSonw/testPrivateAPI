/* Generated by RuntimeBrowser.
 */

@protocol MTAlarmSoundInfoProvider <NSObject>

@required

- (NSString *)alarmSoundIdentifier;
- (int)alarmSoundType;
- (NSNumber *)alarmSoundVolume;
- (void)setAlarmSoundIdentifier:(NSString *)arg1 ofType:(int)arg2;
- (void)setAlarmSoundVolume:(NSNumber *)arg1;
- (void)setVibrationID:(NSString *)arg1;
- (NSString *)vibrationID;

@end
