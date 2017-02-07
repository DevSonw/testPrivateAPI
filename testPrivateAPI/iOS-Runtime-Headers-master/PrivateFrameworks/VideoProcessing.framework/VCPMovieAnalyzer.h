/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    AVAsset * _avAsset;
    BOOL  _irisFlash;
    float  _irisPhotoExposureSec;
    float  _irisPhotoOffsetSec;
    BOOL  _isIris;
    BOOL  _isSlowmo;
    unsigned int  _requestedAnalyses;
    int  _status;
}

@property (readonly) int status;

+ (BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)movieForAsset:(id)arg1;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1 throttle:(id /* block */)arg2;
- (long)analyzeVideoSegment:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 cancel:(id /* block */)arg3 throttle:(id /* block */)arg4;
- (long)analyzeVideoTrack:(id)arg1 start:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cancel:(id /* block */)arg3 throttle:(id /* block */)arg4;
- (id)createDecoderForTrack:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)createFaceDetector:(id)arg1 cancel:(id /* block */)arg2;
- (id)createVideoAnalyzer:(id)arg1;
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned int)arg2;
- (id)initWithIrisAVAsset:(id)arg1 irisPhotoOffsetSec:(float)arg2 irisPhotoExposureSec:(float)arg3 irisFlashFired:(BOOL)arg4 forAnalysisTypes:(unsigned int)arg5;
- (id)initWithPHAsset:(id)arg1 existingAnalysis:(id)arg2 forAnalysisTypes:(unsigned int)arg3;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned int)arg2;
- (int)status;

@end
