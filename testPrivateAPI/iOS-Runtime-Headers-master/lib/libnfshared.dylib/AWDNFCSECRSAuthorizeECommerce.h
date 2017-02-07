/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {
    NSData * _aid;
    unsigned int  _countryCode;
    unsigned int  _currencyCode;
    struct { 
        unsigned int otherAmount : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int transactionTotal : 1; 
        unsigned int countryCode : 1; 
        unsigned int currencyCode : 1; 
        unsigned int merchantCapabilities : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int transactionType : 1; 
    }  _has;
    unsigned int  _merchantCapabilities;
    NSData * _merchantId;
    unsigned int  _method;
    unsigned long long  _otherAmount;
    unsigned int  _status;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _transactionId;
    unsigned long long  _transactionTotal;
    unsigned int  _transactionType;
    NSData * _uuidReference;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned int countryCode;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic, readonly) BOOL hasAid;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) BOOL hasMerchantCapabilities;
@property (nonatomic, readonly) BOOL hasMerchantId;
@property (nonatomic) BOOL hasMethod;
@property (nonatomic) BOOL hasOtherAmount;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTransactionId;
@property (nonatomic) BOOL hasTransactionTotal;
@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic, retain) NSData *merchantId;
@property (nonatomic) unsigned int method;
@property (nonatomic) unsigned long long otherAmount;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic, retain) NSData *uuidReference;

- (id)aid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countryCode;
- (unsigned int)currencyCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAid;
- (BOOL)hasCountryCode;
- (BOOL)hasCurrencyCode;
- (BOOL)hasMerchantCapabilities;
- (BOOL)hasMerchantId;
- (BOOL)hasMethod;
- (BOOL)hasOtherAmount;
- (BOOL)hasStatus;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasTransactionId;
- (BOOL)hasTransactionTotal;
- (BOOL)hasTransactionType;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)merchantCapabilities;
- (id)merchantId;
- (void)mergeFrom:(id)arg1;
- (unsigned int)method;
- (unsigned long long)otherAmount;
- (BOOL)readFrom:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setCountryCode:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setHasCountryCode:(BOOL)arg1;
- (void)setHasCurrencyCode:(BOOL)arg1;
- (void)setHasMerchantCapabilities:(BOOL)arg1;
- (void)setHasMethod:(BOOL)arg1;
- (void)setHasOtherAmount:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransactionTotal:(BOOL)arg1;
- (void)setHasTransactionType:(BOOL)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setOtherAmount:(unsigned long long)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)transactionId;
- (unsigned long long)transactionTotal;
- (unsigned int)transactionType;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
