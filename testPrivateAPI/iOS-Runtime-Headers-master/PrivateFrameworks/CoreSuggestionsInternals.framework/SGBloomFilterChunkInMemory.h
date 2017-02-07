/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGBloomFilterChunkInMemory : NSObject <SGBloomFilterChunk> {
    char * _buf;
    unsigned int  _count;
}

@property (nonatomic, readonly) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)add:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)count;
- (void)dealloc;
- (BOOL)exists:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)init;

@end
