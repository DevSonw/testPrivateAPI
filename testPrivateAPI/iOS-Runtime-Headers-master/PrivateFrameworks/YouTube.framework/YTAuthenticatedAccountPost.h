/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTAuthenticatedAccountPost : NSObject <NSURLConnectionDelegate> {
    NSURLConnection * _connection;
    id  _delegate;
    NSMutableURLRequest * _postRequest;
    NSMutableData * _rawData;
    int  _type;
    BOOL  _validResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_cleanup;
- (void)_deleteVideo:(id)arg1;
- (void)_didAuthenticate:(id)arg1;
- (void)_failedToAuthenticate:(id)arg1;
- (void)_listenForAuthenticationNotifications:(BOOL)arg1;
- (void)_removePS:(id)arg1;
- (void)addVideoToFavorites:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)fileComplaintForVideo:(id)arg1;
- (void)postComment:(id)arg1 forVideo:(id)arg2;
- (void)removePlaylist:(id)arg1;
- (void)removeVideoFromFavorites:(id)arg1;
- (void)removeVideoFromPlaylist:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRating:(BOOL)arg1 forVideo:(id)arg2;
- (void)submitRequest;
- (void)submitRequestOfType:(id)arg1;
- (void)unsubscribeToSubscription:(id)arg1;

@end
