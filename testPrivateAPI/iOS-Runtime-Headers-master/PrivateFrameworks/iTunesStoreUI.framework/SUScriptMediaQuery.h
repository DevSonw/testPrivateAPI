/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMediaQuery : SUScriptObject {
    NSArray * _collections;
    NSArray * _filterPredicates;
    NSArray * _items;
    BOOL  _watchingLibrary;
}

@property (readonly) NSArray *collections;
@property (readonly) NSString *comparisonTypeContains;
@property (readonly) NSString *comparisonTypeEquals;
@property (copy) id filterPredicates;
@property (copy) NSString *groupingType;
@property (readonly) NSString *groupingTypeAlbum;
@property (readonly) NSString *groupingTypeAlbumArtist;
@property (readonly) NSString *groupingTypeArtist;
@property (readonly) NSString *groupingTypeComposer;
@property (readonly) NSString *groupingTypeGenre;
@property (readonly) NSString *groupingTypePlaylist;
@property (readonly) NSString *groupingTypePodcastTitle;
@property (readonly) NSString *groupingTypeTitle;
@property (readonly) NSArray *items;
@property (nonatomic, readonly) MPMediaQuery *nativeQuery;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)_beginWatchingLibraryIfNecessary;
- (id)_className;
- (void)_libraryChangedNotification:(id)arg1;
- (void)_resetCaches;
- (void)addFilterPredicate:(id)arg1;
- (id)attributeKeys;
- (id)canFilterByProperty:(id)arg1;
- (id)collections;
- (id)comparisonTypeContains;
- (id)comparisonTypeEquals;
- (void)dealloc;
- (id)filterPredicates;
- (id)groupingType;
- (id)groupingTypeAlbum;
- (id)groupingTypeAlbumArtist;
- (id)groupingTypeArtist;
- (id)groupingTypeComposer;
- (id)groupingTypeGenre;
- (id)groupingTypePlaylist;
- (id)groupingTypePodcastTitle;
- (id)groupingTypeTitle;
- (id)items;
- (id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)nativeQuery;
- (void)removeFilterPredicate:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(id)arg1;

@end