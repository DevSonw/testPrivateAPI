/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {
    CKDPAssetsToDownload * _assetsToDownload;
    struct { 
        unsigned int maxChanges : 1; 
        unsigned int requestedChangeTypes : 1; 
    }  _has;
    unsigned int  _maxChanges;
    int  _requestedChangeTypes;
    CKDPRequestedFields * _requestedFields;
    NSData * _syncContinuationToken;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic, readonly) BOOL hasAssetsToDownload;
@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic) BOOL hasRequestedChangeTypes;
@property (nonatomic, readonly) BOOL hasRequestedFields;
@property (nonatomic, readonly) BOOL hasSyncContinuationToken;
@property (nonatomic, readonly) BOOL hasZoneIdentifier;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) int requestedChangeTypes;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;
@property (nonatomic, retain) NSData *syncContinuationToken;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsRequestedChangeTypes:(id)arg1;
- (id)assetsToDownload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAssetsToDownload;
- (BOOL)hasMaxChanges;
- (BOOL)hasRequestedChangeTypes;
- (BOOL)hasRequestedFields;
- (BOOL)hasSyncContinuationToken;
- (BOOL)hasZoneIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxChanges;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (int)requestedChangeTypes;
- (id)requestedChangeTypesAsString:(int)arg1;
- (id)requestedFields;
- (Class)responseClass;
- (void)setAssetsToDownload:(id)arg1;
- (void)setHasMaxChanges:(BOOL)arg1;
- (void)setHasRequestedChangeTypes:(BOOL)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setRequestedChangeTypes:(int)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
