/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDLayerStackRenditionSpec : TDRenditionSpec {
    struct CGSize { 
        float width; 
        float height; 
    }  primitiveCanvasSize;
}

@property (nonatomic, retain) TDImageStackAsset *asset;
@property (nonatomic) struct CGSize { float x1; float x2; } canvasSize;
@property (nonatomic, retain) NSString *canvasSizeString;
@property (nonatomic, retain) TDThemeCompressionType *compressionType;
@property (nonatomic, retain) NSOrderedSet *layerReferences;
@property (nonatomic) struct CGSize { float x1; float x2; } primitiveCanvasSize;

- (void)awakeFromFetch;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (struct CGSize { float x1; float x2; })canvasSize;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;
- (void)prepareForDeletion;
- (struct CGSize { float x1; float x2; })primitiveCanvasSize;
- (void)setCanvasSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPrimitiveCanvasSize:(struct CGSize { float x1; float x2; })arg1;

@end