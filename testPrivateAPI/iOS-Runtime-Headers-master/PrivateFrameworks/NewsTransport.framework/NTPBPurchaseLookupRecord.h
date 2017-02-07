/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying> {
    NSString * _appAdamId;
    NTPBRecordBase * _base;
    NSMutableArray * _channelTagIds;
}

@property (nonatomic, retain) NSString *appAdamId;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSMutableArray *channelTagIds;
@property (nonatomic, readonly) BOOL hasAppAdamId;
@property (nonatomic, readonly) BOOL hasBase;

+ (Class)channelTagIdsType;

- (void)addChannelTagIds:(id)arg1;
- (id)appAdamId;
- (id)base;
- (id)channelTagIds;
- (id)channelTagIdsAtIndex:(unsigned int)arg1;
- (unsigned int)channelTagIdsCount;
- (void)clearChannelTagIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppAdamId;
- (BOOL)hasBase;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppAdamId:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setChannelTagIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
