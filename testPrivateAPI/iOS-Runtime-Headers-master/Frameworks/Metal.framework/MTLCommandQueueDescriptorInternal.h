/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned int  _maxCommandBufferCount;
    BOOL  _openGLQueue;
    unsigned int  _qosClass;
    int  _qosRelativePriority;
}

@property BOOL isOpenGLQueue;

- (id)description;
- (id)init;
- (BOOL)isOpenGLQueue;
- (unsigned int)maxCommandBufferCount;
- (unsigned int)qosClass;
- (int)qosRelativePriority;
- (void)setIsOpenGLQueue:(BOOL)arg1;
- (void)setMaxCommandBufferCount:(unsigned int)arg1;
- (void)setQosClass:(unsigned int)arg1;
- (void)setQosRelativePriority:(int)arg1;

@end
