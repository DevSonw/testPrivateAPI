/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKTaskCompletionCounter : NSObject {
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _queue;
    int  _target;
}

+ (id)counterWithTargetCount:(int)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)allTasksEnqueued;
- (void)decrementCounter;
- (void)incrementCounter;

@end
