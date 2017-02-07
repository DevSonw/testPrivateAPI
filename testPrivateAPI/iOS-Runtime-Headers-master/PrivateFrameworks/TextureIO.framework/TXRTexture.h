/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRTexture : NSObject <NSCopying> {
    unsigned int  _alphaInfo;
    <TXRBufferAllocator> * _bufferAllocator;
    BOOL  _cubemap;
    void _dimensions;
    NSMutableArray * _mipmapLevels;
    unsigned int  _pixelFormat;
}

@property (nonatomic, readonly) unsigned int alphaInfo;
@property (nonatomic, readonly) BOOL cubemap;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, readonly) NSArray *mipmapLevels;
@property (nonatomic, readonly) unsigned int pixelFormat;

- (void).cxx_destruct;
- (unsigned int)alphaInfo;
- (id)copyWithPixelFormat:(unsigned int)arg1 options:(id)arg2 bufferAllocator:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)cubemap;
- (void)dimensions;
- (void)exportToURL:(id)arg1 error:(id*)arg2;
- (id)exportToXCAssetWithName:(id)arg1 setAttributes:(id)arg2 textureConfigList:(id)arg3 location:(id)arg4 error:(id*)arg5;
- (void)generateMipmapsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 filter:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithDataSourceProvider:(id)arg1;
- (id)initWithDimensions:(void *)arg1 pixelFormat:(void *)arg2 alphaInfo:(void *)arg3 mipmapLevelCount:(void *)arg4 arrayLength:(void *)arg5 cubemap:(void *)arg6 bufferAllocator:(void *)arg7; // needs 7 arg types, found 6: unsigned int, unsigned int, unsigned int, unsigned int, BOOL, id
- (id)mipmapLevels;
- (unsigned int)pixelFormat;
- (void)reformat:(unsigned int)arg1 gammaDegamma:(BOOL)arg2 bufferAllocator:(id)arg3 error:(id*)arg4;

@end
