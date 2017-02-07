/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWUDPSession : NSObject {
    NWDatagramConnection * _connection;
    NWPath * _currentPath;
    NWEndpoint * _endpoint;
    BOOL  _hasBetterPath;
    unsigned int  _internalMTU;
    unsigned int  _maxReadDatagrams;
    NWParameters * _parameters;
    id /* block */  _readHandler;
    NWEndpoint * _resolvedEndpoint;
    int  _state;
    BOOL  _viable;
}

@property (retain) NWDatagramConnection *connection;
@property (nonatomic, retain) NWPath *currentPath;
@property (readonly) NWEndpoint *endpoint;
@property (nonatomic) BOOL hasBetterPath;
@property unsigned int internalMTU;
@property (nonatomic, readonly) NSString *localPort;
@property unsigned int maxReadDatagrams;
@property (nonatomic, readonly) unsigned int maximumDatagramLength;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (copy) id /* block */ readHandler;
@property (nonatomic, retain) NWEndpoint *resolvedEndpoint;
@property (nonatomic) int state;
@property (getter=isViable, nonatomic) BOOL viable;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)connection;
- (id)currentPath;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)endpoint;
- (BOOL)hasBetterPath;
- (id)initWithConnectedSocket:(int)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithUpgradeForSession:(id)arg1;
- (unsigned int)internalMTU;
- (BOOL)isViable;
- (id)localPort;
- (unsigned int)maxReadDatagrams;
- (unsigned int)maximumDatagramLength;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parameters;
- (id)privateDescription;
- (id /* block */)readHandler;
- (void)readInternal;
- (id)resolvedEndpoint;
- (void)setConnection:(id)arg1;
- (void)setCurrentPath:(id)arg1;
- (void)setHasBetterPath:(BOOL)arg1;
- (void)setInternalMTU:(unsigned int)arg1;
- (void)setMaxReadDatagrams:(unsigned int)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (void)setReadHandler:(id /* block */)arg1 maxDatagrams:(unsigned int)arg2;
- (void)setResolvedEndpoint:(id)arg1;
- (void)setState:(int)arg1;
- (void)setViable:(BOOL)arg1;
- (void)setupEventHandler;
- (int)state;
- (void)tryNextResolvedEndpoint;
- (void)writeDatagram:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeMultipleDatagrams:(id)arg1 completionHandler:(id /* block */)arg2;

@end
