/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
 */

@interface WRCannedRepliesStore : NSObject {
    NSString * _cachedLanguage;
    NSArray * _cachedLocalizedReplies;
    NSArray * _cannedReplies;
    unsigned int  _category;
    BOOL  _didLocalizeDefaultReplies;
    BOOL  _didMigrationCheck;
    NPSDomainAccessor * _domainAccessor;
    WRReplyStoreInfo * _info;
    NPSManager * _npsManager;
}

+ (BOOL)supportsEnhancedEditing;

- (void).cxx_destruct;
- (id)cannedReplies;
- (void)dealloc;
- (id)domainAccessor;
- (void)handleStoreChange;
- (BOOL)includeSmartReplies;
- (id)init;
- (id)initWithCategory:(unsigned int)arg1;
- (void)invalidateCachesIfNeededForLanguage:(id)arg1;
- (void)loadCannedRepliesIfNeeded;
- (void)localizeDefaultRepliesIfNeeded;
- (id)localizedDefaultReply:(id)arg1;
- (id)localizedFormalDefaultReply:(id)arg1;
- (id)migrateRepliesIfNeeded:(id)arg1;
- (id)npsManager;
- (id)repliesForLanguage:(id)arg1;
- (void)saveReplies:(id)arg1;
- (void)setCannedReplies:(id)arg1;
- (void)setIncludeSmartReplies:(BOOL)arg1;
- (BOOL)supportsSmartReplies;
- (BOOL)usesFormalReplies;

@end
