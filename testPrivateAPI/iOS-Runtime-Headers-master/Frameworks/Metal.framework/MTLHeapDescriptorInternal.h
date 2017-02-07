/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; } * _private;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cpuCacheMode;
- (void)dealloc;
- (id)description;
- (const struct MTLHeapDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; }*)descriptorPrivate;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)setCpuCacheMode:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setStorageMode:(unsigned int)arg1;
- (unsigned int)size;
- (unsigned int)storageMode;
- (BOOL)validateWithDevice:(id)arg1;

@end
