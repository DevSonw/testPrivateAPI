/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSData * _mescalHeaderData;
    int  _status;
}

@property (nonatomic, readonly) BOOL hasMescalHeaderData;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, retain) NSData *mescalHeaderData;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMescalHeaderData;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mescalHeaderData;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setMescalHeaderData:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
