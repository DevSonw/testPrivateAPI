/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureResource : TSCH3DResource <TSCH3DOptimizedTextureResource, TSCHUnretainedParent> {
    NSNumber * mCachedHash;
    TSCH3DTexture * mParent;
}

- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (void)clearParent;
- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (id)get;
- (unsigned int)hash;
- (id)initWithParent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (id)p_parent;

@end
