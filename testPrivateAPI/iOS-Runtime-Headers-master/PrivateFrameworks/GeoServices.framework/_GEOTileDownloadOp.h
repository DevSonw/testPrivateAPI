/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTileDownloadOp : NSObject <NSURLSessionDataDelegate> {
    int  _attempts;
    NSData * _auditToken;
    _GEOTileDownloadOp * _baseTile;
    NSData * _cachedData;
    NSString * _cachedEtag;
    int  _checksumMethod;
    unsigned int  _contentLength;
    NSMutableData * _data;
    GEOSimpleTileRequester * _delegate;
    NSOperationQueue * _delegateQueue;
    int  _eTagType;
    NSString * _editionHeader;
    BOOL  _finished;
    BOOL  _gotData;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    }  _key;
    _GEOTileDownloadOp * _localizationTile;
    unsigned int  _priority;
    BOOL  _requireWiFi;
    NSString * _responseEtag;
    NSURLSession * _session;
    double  _startTime;
    NSURLSessionTask * _task;
    unsigned int  _tileEdition;
    double  _timeout;
    NSURL * _url;
    BOOL  _useCookies;
    NSString * _userAgent;
}

@property (nonatomic, retain) NSData *auditToken;
@property (nonatomic, retain) _GEOTileDownloadOp *baseTile;
@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic, retain) NSString *cachedEtag;
@property (nonatomic, readonly) unsigned int contentLength;
@property (nonatomic, retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GEOSimpleTileRequester *delegate;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) int eTagType;
@property (nonatomic, retain) NSString *editionHeader;
@property (nonatomic, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } key;
@property (nonatomic, retain) _GEOTileDownloadOp *localizationTile;
@property (nonatomic) unsigned int priority;
@property (nonatomic) BOOL requireWiFi;
@property (nonatomic, retain) NSString *responseEtag;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionTask *task;
@property unsigned int tileEdition;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) BOOL useCookies;
@property (nonatomic, retain) NSString *userAgent;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)auditToken;
- (id)baseTile;
- (id)cachedData;
- (id)cachedEtag;
- (void)cancel;
- (unsigned int)contentLength;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (int)eTagType;
- (id)editionHeader;
- (double)elapsed;
- (BOOL)finished;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })key;
- (id)localizationTile;
- (unsigned int)priority;
- (BOOL)requireWiFi;
- (id)responseEtag;
- (id)session;
- (void)setAuditToken:(id)arg1;
- (void)setBaseTile:(id)arg1;
- (void)setCachedData:(id)arg1;
- (void)setCachedEtag:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setETagType:(int)arg1;
- (void)setEditionHeader:(id)arg1;
- (void)setKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)setLocalizationTile:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setRequireWiFi:(BOOL)arg1;
- (void)setResponseEtag:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTileEdition:(unsigned int)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseCookies:(BOOL)arg1;
- (void)setUserAgent:(id)arg1;
- (void)start;
- (double)startTime;
- (id)task;
- (unsigned int)tileEdition;
- (double)timeout;
- (id)url;
- (BOOL)useCookies;
- (id)userAgent;

@end