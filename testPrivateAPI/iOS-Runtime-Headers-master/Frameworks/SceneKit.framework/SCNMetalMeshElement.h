/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalMeshElement : NSObject {
    SCNMTLBuffer * _indexBuffer;
    int  _indexCount;
    unsigned int  _indexType;
    unsigned int  _instanceCount;
    int  _offset;
    unsigned int  _primitiveType;
}

@property (nonatomic, retain) SCNMTLBuffer *indexBuffer;
@property (nonatomic) int indexCount;
@property (nonatomic) unsigned int indexType;
@property (nonatomic) unsigned int instanceCount;
@property (nonatomic) int offset;
@property (nonatomic, readonly) int primitiveCount;
@property (nonatomic) unsigned int primitiveType;

- (void)dealloc;
- (id)indexBuffer;
- (int)indexCount;
- (unsigned int)indexType;
- (unsigned int)instanceCount;
- (int)offset;
- (int)primitiveCount;
- (unsigned int)primitiveType;
- (void)setIndexBuffer:(id)arg1;
- (void)setIndexCount:(int)arg1;
- (void)setIndexType:(unsigned int)arg1;
- (void)setInstanceCount:(unsigned int)arg1;
- (void)setOffset:(int)arg1;
- (void)setPrimitiveType:(unsigned int)arg1;
- (void)setupWithElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; } x8; struct { BOOL x_9_1_1; struct __CFData {} *x_9_1_2; unsigned int x_9_1_3; } x9; void *x10; struct __C3DMeshSource {} *x11; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x12[2]; }*)arg1;

@end
