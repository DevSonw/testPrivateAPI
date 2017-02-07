/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibrarySearchResultsEntityProvider : NSObject <MusicEntityProviding> {
    NSArray * _invalidationBlocks;
    NSObject<OS_dispatch_queue> * _invalidationQueue;
    unsigned int  _maximumNumberOfSectionResults;
    NSArray * _searchDataSources;
    MusicLibrarySearchResultsEntityProviderConfiguration * _searchEntityProviderConfiguration;
    NSOperationQueue * _searchOperationQueue;
    NSString * _searchTerm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasResults;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int maximumNumberOfSectionResults;
@property (nonatomic, copy) NSString *searchTerm;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_filterResults;
- (void)_sendInvalidationNotification;
- (id)browseTableViewConfigurationForSection:(int)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (BOOL)hasMoreResultsForSection:(int)arg1;
- (BOOL)hasResults;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)init;
- (id)initWithSearchEntityProviderConfiguration:(id)arg1;
- (unsigned int)maximumNumberOfSectionResults;
- (id)moreSearchResultsEntityProviderConfigurationForSectionIndex:(int)arg1;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (id)searchTerm;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;
- (void)setMaximumNumberOfSectionResults:(unsigned int)arg1;
- (void)setSearchTerm:(id)arg1;

@end
