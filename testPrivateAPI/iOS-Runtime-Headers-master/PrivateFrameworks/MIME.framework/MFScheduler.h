/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFScheduler : NSObject

+ (id)_globalAsyncSchedulerWithQualityOfService:(int)arg1;
+ (id)globalAsyncScheduler;
+ (id)globalAsyncSchedulerWithQualityOfService:(int)arg1;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned int)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(int)arg2;

@end
