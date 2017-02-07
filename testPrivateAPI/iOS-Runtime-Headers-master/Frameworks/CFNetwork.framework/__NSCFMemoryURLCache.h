/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFMemoryURLCache : NSObject {
    unsigned int  _currentLength;
    id  _internal;
    unsigned int  _memoryCapacity;
    NSObject<OS_dispatch_queue> * _memoryQueue;
    NSMutableDictionary * _memoryStorage;
    NSMutableArray * _memoryStorageLRU;
}

+ (void)initialize;

- (id)cachedResponseForRequest:(id)arg1;
- (unsigned int)currentDiskUsage;
- (unsigned int)currentMemoryUsage;
- (void)dealloc;
- (id)description;
- (unsigned int)diskCapacity;
- (id)initByCallingSuperSuperInit;
- (id)initEmptyCache;
- (id)initMemoryCache;
- (id)initWithMemoryCapacity:(unsigned int)arg1 diskCapacity:(unsigned int)arg2 diskPath:(id)arg3;
- (unsigned int)memoryCapacity;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end
