/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCIncompleteTransactionExceptionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
