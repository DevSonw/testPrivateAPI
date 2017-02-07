/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRReachabilityMonitor : NSObject {
    BOOL  _isNetworkReachable;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _reachabilityFlags;
    NSHashTable * _reachabilityObservers;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) unsigned int reachabilityFlags;

+ (BOOL)isNetworkReachableForFlags:(unsigned int)arg1;
+ (id)sharedReachabilityMonitor;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isNetworkReachable;
- (unsigned int)reachabilityFlags;
- (void)removeObserver:(id)arg1;
- (void)setIsNetworkReachable:(BOOL)arg1;
- (void)setReachabilityFlags:(unsigned int)arg1;

@end
