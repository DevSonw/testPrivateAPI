/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (nonatomic, copy) MTLStencilDescriptor *backFaceStencil;
@property (nonatomic) unsigned int depthCompareFunction;
@property (readonly) const /* Warning: unhandled struct encoding: '{MTLDepthStencilDescriptorPrivate=@@Ic@}' */ struct MTLDepthStencilDescriptorPrivate { id x1; unsigned int x2; BOOL x3; id x4; }*depthStencilPrivate;
@property (getter=isDepthWriteEnabled, nonatomic) BOOL depthWriteEnabled;
@property (nonatomic, copy) MTLStencilDescriptor *frontFaceStencil;
@property (nonatomic, copy) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
