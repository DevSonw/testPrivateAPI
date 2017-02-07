/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray * _uploadTokens;
}

@property (nonatomic, retain) NSMutableArray *uploadTokens;

+ (Class)uploadTokensType;

- (void).cxx_destruct;
- (void)addUploadTokens:(id)arg1;
- (void)clearUploadTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUploadTokens:(id)arg1;
- (id)uploadTokens;
- (id)uploadTokensAtIndex:(unsigned int)arg1;
- (unsigned int)uploadTokensCount;
- (void)writeTo:(id)arg1;

@end
