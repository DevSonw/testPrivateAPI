/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceLocatorService : NSObject {
    BOOL  _hasAttemptedToFetchState;
    unsigned int  _lastKnownState;
    NSObject<OS_dispatch_queue> * _stateUpdateQueue;
    BOOL  _wantsToEnable;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateStateAndNotify:(BOOL)arg1;
- (void)disableInContext:(unsigned int)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(unsigned int)arg1;
- (id)init;
- (BOOL)isChangingState;
- (BOOL)isEnabled;
- (BOOL)isStateKnown;
- (void)setShouldEnable:(BOOL)arg1;
- (BOOL)shouldEnable;

@end
