/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char  _assertionState;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(BOOL)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;
- (id)init;
- (BOOL)isEnabled;

@end
