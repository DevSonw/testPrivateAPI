/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCaptureDevice : NSObject

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) float minimumFrameRate;
@property (nonatomic, readonly) int position;
@property (nonatomic, readonly) NSArray *supportedFormats;

- (int)activeFormatIndex;
- (long)captureStillImageNowWithSettings:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)getCurrentVideoFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; float x23; int x24; int x25; int x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1;
- (float)maximumFrameRate;
- (float)minimumFrameRate;
- (int)position;
- (BOOL)registerStillImageBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (void)setActiveFormatIndex:(int)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (BOOL)startStreamingToSampleBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; float x23; int x24; int x25; int x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg2 deliverOriginalImage:(BOOL)arg3 deliverSushiRaw:(BOOL)arg4 includePreBracketedEV0ForProcessing:(BOOL)arg5 clientBracketSettings:(id)arg6;
- (BOOL)stopStreamingToSampleBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)supportedFormats;
- (BOOL)unregisterStillImageBufferHandler:(id /* block */)arg1 error:(id*)arg2;

@end
