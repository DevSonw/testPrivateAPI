/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageScalerNode : BWNode {
    BOOL  _defersCropToPhotoEncoderWhenPossible;
    struct { 
        int width; 
        int height; 
    }  _nativeOutputDimensions;
    BWVideoFormat * _outputFormat;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    BWPixelBufferPool * _pool;
    int  _poolCapacity;
    struct OpaqueVTPixelTransferSession { } * _scalingSession;
}

+ (void)initialize;

- (long)_buildScalingSession;
- (void)_purgeResources;
- (long)_rebuildBufferPoolWithWidth:(unsigned long)arg1 height:(unsigned long)arg2;
- (BOOL)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 scaledDenormalizedInputCropRectOut:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)dealloc;
- (BOOL)defersCropToPhotoEncoderWhenPossible;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithPoolCapacity:(int)arg1;
- (struct { int x1; int x2; })nativeOutputDimensions;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDefersCropToPhotoEncoderWhenPossible:(BOOL)arg1;
- (void)setNativeOutputDimensions:(struct { int x1; int x2; })arg1;

@end