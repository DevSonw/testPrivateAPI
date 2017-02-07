/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int isDeleted : 1; 
    }  _has;
    BOOL  _isDeleted;
    NSMutableArray * _recordVersions;
}

@property (nonatomic) BOOL hasIsDeleted;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic, retain) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

- (void).cxx_destruct;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsDeleted;
- (unsigned int)hash;
- (BOOL)isDeleted;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordVersions;
- (id)recordVersionsAtIndex:(unsigned int)arg1;
- (unsigned int)recordVersionsCount;
- (void)setHasIsDeleted:(BOOL)arg1;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setRecordVersions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
