/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _NSRefcountedPthreadMutex : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  lock;
}

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;

@end