/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNData : NSObject {
    VCPCNNMetalContext * _context;
    float * _data;
    MPSImage * _mpsImg;
    NSMutableArray * _size;
}

@property VCPCNNMetalContext *context;
@property float*data;
@property (retain) MPSImage *mpsImg;
@property (retain) NSMutableArray *size;

- (void).cxx_destruct;
- (long)allocBuffers:(BOOL)arg1;
- (long)bufferAllocCPU;
- (long)bufferAllocGPU;
- (id)context;
- (long)convertCPUData2GPU;
- (long)convertGPUData2CPU;
- (float*)data;
- (void)dealloc;
- (id)init;
- (id)initWithGPUContext:(id)arg1;
- (long)initWithImage:(struct __CVBuffer { }*)arg1;
- (id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;
- (id)mpsImg;
- (long)normalization;
- (long)randInit;
- (long)readFromDisk:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 quantFactor:(short)arg2;
- (void)setContext:(id)arg1;
- (void)setData:(float*)arg1;
- (void)setMpsImg:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
