/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAssociation : PBCodable <NSCopying> {
    NSData * _bssidOui;
    int  _channel;
    int  _deauthReason;
    NSData * _deauthSourceOui;
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channel : 1; 
        unsigned int deauthReason : 1; 
        unsigned int error : 1; 
        unsigned int signal : 1; 
    }  _has;
    NSString * _security;
    int  _signal;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSData *bssidOui;
@property (nonatomic) int channel;
@property (nonatomic) int deauthReason;
@property (nonatomic, retain) NSData *deauthSourceOui;
@property (nonatomic) unsigned int error;
@property (nonatomic, readonly) BOOL hasBssidOui;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasDeauthReason;
@property (nonatomic, readonly) BOOL hasDeauthSourceOui;
@property (nonatomic) BOOL hasError;
@property (nonatomic, readonly) BOOL hasSecurity;
@property (nonatomic) BOOL hasSignal;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *security;
@property (nonatomic) int signal;
@property (nonatomic) unsigned long long timestamp;

- (id)bssidOui;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deauthReason;
- (id)deauthSourceOui;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (BOOL)hasBssidOui;
- (BOOL)hasChannel;
- (BOOL)hasDeauthReason;
- (BOOL)hasDeauthSourceOui;
- (BOOL)hasError;
- (BOOL)hasSecurity;
- (BOOL)hasSignal;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)security;
- (void)setBssidOui:(id)arg1;
- (void)setChannel:(int)arg1;
- (void)setDeauthReason:(int)arg1;
- (void)setDeauthSourceOui:(id)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasChannel:(BOOL)arg1;
- (void)setHasDeauthReason:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)setHasSignal:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSecurity:(id)arg1;
- (void)setSignal:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)signal;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
