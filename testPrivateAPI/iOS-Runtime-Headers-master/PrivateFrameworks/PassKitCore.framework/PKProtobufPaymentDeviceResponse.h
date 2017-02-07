/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying> {
    unsigned int  _defaultPaymentInstrumentIndex;
    BOOL  _deviceDisabled;
    struct { 
        unsigned int defaultPaymentInstrumentIndex : 1; 
        unsigned int nearby : 1; 
        unsigned int protocolVersion : 1; 
        unsigned int deviceDisabled : 1; 
        unsigned int locked : 1; 
        unsigned int userDisabled : 1; 
    }  _has;
    BOOL  _locked;
    int  _nearby;
    NSMutableArray * _paymentInstruments;
    unsigned int  _protocolVersion;
    BOOL  _userDisabled;
}

@property (nonatomic) unsigned int defaultPaymentInstrumentIndex;
@property (nonatomic) BOOL deviceDisabled;
@property (nonatomic) BOOL hasDefaultPaymentInstrumentIndex;
@property (nonatomic) BOOL hasDeviceDisabled;
@property (nonatomic) BOOL hasLocked;
@property (nonatomic) BOOL hasNearby;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasUserDisabled;
@property (nonatomic) BOOL locked;
@property (nonatomic) int nearby;
@property (nonatomic, retain) NSMutableArray *paymentInstruments;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL userDisabled;

+ (Class)paymentInstrumentsType;

- (void).cxx_destruct;
- (int)StringAsNearby:(id)arg1;
- (void)addPaymentInstruments:(id)arg1;
- (void)clearPaymentInstruments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)defaultPaymentInstrumentIndex;
- (id)description;
- (BOOL)deviceDisabled;
- (id)dictionaryRepresentation;
- (BOOL)hasDefaultPaymentInstrumentIndex;
- (BOOL)hasDeviceDisabled;
- (BOOL)hasLocked;
- (BOOL)hasNearby;
- (BOOL)hasProtocolVersion;
- (BOOL)hasUserDisabled;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)locked;
- (void)mergeFrom:(id)arg1;
- (int)nearby;
- (id)nearbyAsString:(int)arg1;
- (id)paymentInstruments;
- (id)paymentInstrumentsAtIndex:(unsigned int)arg1;
- (unsigned int)paymentInstrumentsCount;
- (unsigned int)protocolVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setDefaultPaymentInstrumentIndex:(unsigned int)arg1;
- (void)setDeviceDisabled:(BOOL)arg1;
- (void)setHasDefaultPaymentInstrumentIndex:(BOOL)arg1;
- (void)setHasDeviceDisabled:(BOOL)arg1;
- (void)setHasLocked:(BOOL)arg1;
- (void)setHasNearby:(BOOL)arg1;
- (void)setHasProtocolVersion:(BOOL)arg1;
- (void)setHasUserDisabled:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setNearby:(int)arg1;
- (void)setPaymentInstruments:(id)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setUserDisabled:(BOOL)arg1;
- (BOOL)userDisabled;
- (void)writeTo:(id)arg1;

@end
