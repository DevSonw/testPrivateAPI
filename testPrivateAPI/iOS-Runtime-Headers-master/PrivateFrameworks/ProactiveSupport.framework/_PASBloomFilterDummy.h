/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASBloomFilterDummy : _PASBloomFilter {
    BOOL  _result;
}

+ (id)instanceThatAlwaysReturns:(BOOL)arg1;

- (id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4;
- (id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3;
- (BOOL)getWithHashes:(id)arg1;
- (id)initWithResult:(BOOL)arg1;
- (id)newHashesArray;

@end
