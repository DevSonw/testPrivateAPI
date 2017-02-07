/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARAsyncCard : SFCard <NSSecureCoding> {
    NSURL * _cardURL;
    unsigned long long  _clientQueryId;
    PARSessionConfiguration * _configuration;
    NSXPCListenerEndpoint * _endpoint;
    long long  _queryId;
    float  _scale;
}

@property (nonatomic, copy) NSURL *cardURL;
@property (nonatomic, readonly) unsigned long long clientQueryId;
@property (nonatomic, retain) PARSessionConfiguration *configuration;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) long long queryId;
@property (nonatomic) float scale;

+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(float)arg4 queryId:(long long)arg5;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(float)arg4 queryId:(long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardURL;
- (unsigned long long)clientQueryId;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)arg1;
- (long long)queryId;
- (float)scale;
- (void)setCardURL:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setScale:(float)arg1;

@end
