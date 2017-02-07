/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchResultCache : NSObject {
    unsigned int  _cachedQueriesLimit;
    NSMutableDictionary * _resultSetCache;
    NSMutableDictionary * _resultSetsByPrefix;
}

@property (nonatomic, readonly) NSArray *allCachedQueries;

- (void).cxx_destruct;
- (BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1;
- (id)allCachedQueries;
- (id)bestResultSetForQuery:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (void)cacheResultSetsFromSearchResponse:(id)arg1;
- (id)initWithCachedQueriesLimit:(unsigned int)arg1;
- (id)resultSetWithQuery:(id)arg1;

@end
