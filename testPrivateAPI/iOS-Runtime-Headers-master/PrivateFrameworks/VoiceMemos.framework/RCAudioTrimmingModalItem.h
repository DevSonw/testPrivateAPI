/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioTrimmingModalItem : NSObject {
    BOOL  _cancelTrimRequested;
    <RCAudioTrimmingModalItemDelegate> * _delegate;
    BOOL  _deletesDestinationPathWhenDone;
    NSString * _destinationPath;
    AVAssetExportSession * _exportSession;
    BOOL  _isBeingDismissed;
    double  _maximumTrimmedDuration;
    BOOL  _playing;
    RCActionSheetController * _presentedActionSheetController;
    RCSavedRecording * _recording;
    NSString * _sourcePath;
    RCTrimTimeRangeOperation * _trimOperation;
    NSOperationQueue * _trimOperationQueue;
    RCAudioTrimmingModalItemViewController * _trimmingViewController;
}

@property (nonatomic) <RCAudioTrimmingModalItemDelegate> *delegate;
@property (nonatomic) BOOL deletesDestinationPathWhenDone;
@property (nonatomic, readonly, copy) NSString *destinationPath;
@property (nonatomic) double maximumTrimmedDuration;
@property (nonatomic, readonly) RCSavedRecording *recording;
@property (nonatomic, readonly, copy) NSString *sourcePath;

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_handleTrimSheetActionWithClickedButtonIndex:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (BOOL)deletesDestinationPathWhenDone;
- (id)destinationPath;
- (void)dismiss;
- (id)init;
- (id)initWithDelegate:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (double)maximumTrimmedDuration;
- (id)recording;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDestinationPathWhenDone:(BOOL)arg1;
- (void)setMaximumTrimmedDuration:(double)arg1;
- (void)showWithPresentationViewController:(id)arg1 message:(id)arg2 trimButtonTitle:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)sourcePath;

@end
