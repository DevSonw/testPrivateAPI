/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupAggregate : NSObject {
    NSMutableArray * _aggregatedGroupIds;
    NSMutableArray * _assetIdArrays;
    NSMutableArray * _groups;
    NSMutableArray * _primaryAssetIdArrays;
    NSMutableArray * _rangesMatchingTokens;
    NSArray * _searchTokens;
    NSMutableArray * _secondaryAssetIdArrays;
}

@property (readonly) NSArray *searchTokens;

- (struct __CFArray { }*)_newSortedGroupIds;
- (BOOL)_prefer:(id)arg1 over:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3;
- (BOOL)_verifySortedGroupIdsUnique;
- (void)dealloc;
- (id)initWithSearchTokens:(id)arg1;
- (id)newGroupResult;
- (void)pop;
- (void)postProcessGroupResults:(id)arg1;
- (BOOL)pushGroup:(id)arg1 secondaryPairedGroup:(id)arg2;
- (id)searchTokens;

@end