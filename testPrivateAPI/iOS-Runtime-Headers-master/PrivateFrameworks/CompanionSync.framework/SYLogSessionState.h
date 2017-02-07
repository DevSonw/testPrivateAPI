/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogSessionState : PBCodable <NSCopying> {
    BOOL  _canRestart;
    BOOL  _canRollback;
    BOOL  _canceled;
    SYLogErrorInfo * _error;
    double  _fullSessionTimeout;
    struct { 
        unsigned int fullSessionTimeout : 1; 
        unsigned int perMessageTimeout : 1; 
        unsigned int canRestart : 1; 
        unsigned int canRollback : 1; 
        unsigned int canceled : 1; 
        unsigned int isReset : 1; 
    }  _has;
    NSString * _identifier;
    BOOL  _isReset;
    BOOL  _isSending;
    unsigned long long  _maxConcurrentMessages;
    NSMutableArray * _peers;
    double  _perMessageTimeout;
    int  _state;
    NSMutableArray * _transportOptions;
}

@property (nonatomic) BOOL canRestart;
@property (nonatomic) BOOL canRollback;
@property (nonatomic) BOOL canceled;
@property (nonatomic, retain) NSDictionary *cocoaTransportOptions;
@property (nonatomic, retain) SYLogErrorInfo *error;
@property (nonatomic) double fullSessionTimeout;
@property (nonatomic) BOOL hasCanRestart;
@property (nonatomic) BOOL hasCanRollback;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic, readonly) BOOL hasError;
@property (nonatomic) BOOL hasFullSessionTimeout;
@property (nonatomic) BOOL hasIsReset;
@property (nonatomic) BOOL hasPerMessageTimeout;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) BOOL isReset;
@property (nonatomic) BOOL isSending;
@property (nonatomic) unsigned long long maxConcurrentMessages;
@property (nonatomic, retain) NSMutableArray *peers;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic) int state;
@property (nonatomic, retain) NSMutableArray *transportOptions;

+ (Class)peersType;
+ (Class)transportOptionsType;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (void)addPeers:(id)arg1;
- (void)addTransportOptions:(id)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (BOOL)canceled;
- (void)clearPeers;
- (void)clearTransportOptions;
- (id)cocoaTransportOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (double)fullSessionTimeout;
- (BOOL)hasCanRestart;
- (BOOL)hasCanRollback;
- (BOOL)hasCanceled;
- (BOOL)hasError;
- (BOOL)hasFullSessionTimeout;
- (BOOL)hasIsReset;
- (BOOL)hasPerMessageTimeout;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReset;
- (BOOL)isSending;
- (unsigned long long)maxConcurrentMessages;
- (void)mergeFrom:(id)arg1;
- (id)peers;
- (id)peersAtIndex:(unsigned int)arg1;
- (unsigned int)peersCount;
- (double)perMessageTimeout;
- (BOOL)readFrom:(id)arg1;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setCanceled:(BOOL)arg1;
- (void)setCocoaTransportOptions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFullSessionTimeout:(double)arg1;
- (void)setHasCanRestart:(BOOL)arg1;
- (void)setHasCanRollback:(BOOL)arg1;
- (void)setHasCanceled:(BOOL)arg1;
- (void)setHasFullSessionTimeout:(BOOL)arg1;
- (void)setHasIsReset:(BOOL)arg1;
- (void)setHasPerMessageTimeout:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsReset:(BOOL)arg1;
- (void)setIsSending:(BOOL)arg1;
- (void)setMaxConcurrentMessages:(unsigned long long)arg1;
- (void)setPeers:(id)arg1;
- (void)setPerMessageTimeout:(double)arg1;
- (void)setState:(int)arg1;
- (void)setTransportOptions:(id)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (id)transportOptions;
- (id)transportOptionsAtIndex:(unsigned int)arg1;
- (unsigned int)transportOptionsCount;
- (void)writeTo:(id)arg1;

@end
