/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCoordinatorNode : BWNode <BWBracketSettingsProvider, BWFigVideoCaptureStreamStillImageCaptureDelegate> {
    BOOL  _alwaysRequestsPreBracketedEV0;
    BWFigVideoCaptureDevice * _captureDevice;
    int  _captureType;
    <BWBracketSettingsProvider> * _clientBracketSettingsProvider;
    int  _clientExpectedImagesOrErrorsForRequest;
    int  _clientReceivedImagesOrErrorsForRequest;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    BWNodeInput * _defaultInput;
    BWNodeOutput * _defaultOutput;
    BWNodeOutput * _defaultTelephotoOutput;
    int  _expectedImagesOrErrorsForRequest;
    int  _expectedTelephotoImagesOrErrorsForRequest;
    unsigned int  _firedDelegateCallbackFlags;
    <BWBracketSettingsProvider> * _hdrBracketSettingsProvider;
    BWNodeOutput * _hdrOutput;
    <BWBracketSettingsProvider> * _oisBracketSettingsProvider;
    struct opaqueCMSimpleQueue { } * _prepareStillImageCaptureQueue;
    int  _receivedImagesOrErrorsForRequest;
    BOOL  _receivedQuadraHighResError;
    int  _receivedTelephotoImagesOrErrorsForRequest;
    <BWBracketSettingsProvider> * _sisBracketSettingsProvider;
    BWNodeOutput * _sisOutput;
    <BWStillImageCaptureStatusDelegate> * _stillImageCaptureStatusDelegate;
    NSObject<OS_dispatch_group> * _stillImageDispatchGroup;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    BOOL  _stillImageGraphSupportsMultipleInflightCaptures;
    BOOL  _stillImageInputActive;
    struct opaqueCMSimpleQueue { } * _stillImageRequestQueue;
    BWNodeInput * _telephotoInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BWNodeInput *defaultInput;
@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *defaultTelephotoOutput;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BWNodeOutput *hdrOutput;
@property (nonatomic, readonly) BWNodeOutput *sisOutput;
@property (nonatomic) <BWStillImageCaptureStatusDelegate> *stillImageCaptureStatusDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BWNodeInput *telephotoInput;

+ (void)initialize;

- (void)_beginCapture;
- (void)_captureDevicePreparedToCaptureStillImageNow;
- (int)_captureTypeForSettings:(id)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; float x23; int x24; int x25; int x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg2;
- (void)_completeCaptureWithStatus:(long)arg1;
- (void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
- (void)_didCaptureStillImageWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long)_enqueueStillImageRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(BOOL)arg2;
- (void)_flushStillImageRequestWithError:(long)arg1;
- (id)_outputForMultiframeStereoFusionCaptureWithNodeInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3;
- (id)_outputForNodeInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3;
- (void)_serviceNextStillImageRequest;
- (void)_servicePrepareStillImageCaptureQueue;
- (id)_stillImageDispatchQueue;
- (void)_unpackNextStillImageRequest;
- (void)_willBeginCapture;
- (void)_willCaptureStillImage;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; float x23; int x24; int x25; int x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg2 stillImageSettings:(id)arg3;
- (long)captureStillImageNowWithSettings:(id)arg1;
- (void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)captureStream:(id)arg1 didCompleteStillImageCaptureWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
- (void)captureStream:(id)arg1 stillImageCaptureError:(long)arg2;
- (void)captureStreamWillBeginStillImageCapture:(id)arg1;
- (void)clientReceivedPayloadForSettings:(id)arg1 status:(long)arg2 clientIsMidStillImageGraph:(BOOL)arg3;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)defaultInput;
- (id)defaultOutput;
- (id)defaultTelephotoOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)hdrOutput;
- (id)initWithCaptureDevice:(id)arg1 hdrBracketSettingsProvider:(id)arg2 sisBracketSettingsProvider:(id)arg3 oisBracketSettingsProvider:(id)arg4 shareOutputForSingleStillSISAndOIS:(BOOL)arg5 shareOutputsForSingleStillsAndHDR:(BOOL)arg6;
- (id)nodeSubType;
- (id)nodeType;
- (long)prepareStillImageCaptureNowWithSettings:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1;
- (void)setStillImageCaptureStatusDelegate:(id)arg1;
- (void)setStillImageGraphSupportsMultipleInflightCaptures:(BOOL)arg1;
- (id)sisOutput;
- (id)stillImageCaptureStatusDelegate;
- (BOOL)stillImageGraphSupportsMultipleInflightCaptures;
- (id)telephotoInput;
- (void)willStopGraph:(BOOL)arg1;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;
- (int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1;

@end
