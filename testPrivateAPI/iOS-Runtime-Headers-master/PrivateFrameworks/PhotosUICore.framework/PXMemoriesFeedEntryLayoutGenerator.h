/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    NSIndexSet * _geometryKinds;
    BOOL  _isPrepared;
    int  _layoutAxis;
    NSDictionary * _rectsByIndexByKind;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sectionHeaderRect;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    PXMemoriesSpec * _spec;
}

@property (nonatomic) int layoutAxis;

- (void).cxx_destruct;
- (void)_prepareLayoutIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; }*)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withKind:(int)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (int)layoutAxis;
- (unsigned int)numberOfGeometriesWithKind:(int)arg1;
- (void)setLayoutAxis:(int)arg1;
- (struct CGSize { float x1; float x2; })size;

@end
