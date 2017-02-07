/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIArtraceShortcut : CCUIShortcutModule <TCArtraceSessionDelegate> {
    TCArtraceSession * _traceSession;
    NSArray * _traceStartScenes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)displayName;
+ (id)identifier;
+ (BOOL)isInternalButton;
+ (BOOL)isSupported:(int)arg1;

- (void).cxx_destruct;
- (void)_startRecording;
- (void)_stopRecording;
- (BOOL)_toggleState;
- (void)activate;
- (void)artraceSession:(id)arg1 didReceiveOutput:(id)arg2;
- (void)artraceSessionDidComplete:(id)arg1;
- (void)deactivate;
- (id)glyphImageForState:(int)arg1;
- (id)statusUpdate;

@end
