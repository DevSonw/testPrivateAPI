/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutputInternal : NSObject {
    NSObject<OS_dispatch_queue> * bufferQueue;
    AVWeakReferencingDelegateStorage * delegateStorage;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    struct remoteQueueReceiverOpaque { } * remoteReceiverQueue;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end