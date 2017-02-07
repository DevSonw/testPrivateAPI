/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULoadNetworkSectionsOperation : ISOperation {
    ISStoreURLOperation * _baseOperation;
    SUClientInterface * _clientInterface;
    NSString * _expectedVersionString;
    SUSectionsResponse * _sectionsResponse;
}

@property (retain) ISStoreURLOperation *baseOperation;
@property (retain) NSString *expectedVersionString;
@property (readonly) SUSectionsResponse *sectionsResponse;

- (id)_bestItemImageForImages:(id)arg1 withImageKind:(id)arg2;
- (id)_copyImageWithURL:(id)arg1 scale:(float)arg2 error:(id*)arg3;
- (id)_copyLoadedItemImage:(id)arg1 error:(id*)arg2;
- (BOOL)_loadArtworkForResponse:(id)arg1;
- (void)_setSectionsResponse:(id)arg1;
- (id)baseOperation;
- (void)dealloc;
- (id)expectedVersionString;
- (id)initWithURL:(id)arg1 clientInterface:(id)arg2;
- (void)run;
- (id)sectionsResponse;
- (void)setBaseOperation:(id)arg1;
- (void)setExpectedVersionString:(id)arg1;

@end
