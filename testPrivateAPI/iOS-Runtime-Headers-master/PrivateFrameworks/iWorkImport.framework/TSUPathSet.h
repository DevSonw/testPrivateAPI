/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPathSet : NSObject <NSCopying> {
    NSMutableDictionary * mBasePathToNumberMap;
    NSMutableSet * mPaths;
    TSUPathSet * mUnderlyingSet;
}

+ (id)parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned int*)arg3;
+ (void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(BOOL*)arg3 baseNumber:(unsigned int*)arg4 extension:(id*)arg5;

- (id)addPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2;
- (BOOL)isPathUsed:(id)arg1;
- (void)pathIsNoLongerUsed:(id)arg1;
- (void)pathIsUsed:(id)arg1;
- (void)setUnderlyingPathSet:(id)arg1;
- (void)unionPathSet:(id)arg1;

@end
