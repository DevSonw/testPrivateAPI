/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (id)commandBuffer;
- (id)device;
- (void)endEncoding;
- (unsigned long long)globalTraceObjectID;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setGlobalTraceObjectID:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;

@end
