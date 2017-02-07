/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying> {
    SPProtoObjectMessage * _destroy;
    SPProtoObjectMessage * _getCurrentTime;
    SPProtoObjectMessage * _notifyDidPlayToEndTime;
    SPProtoObjectMessage * _notifyFailedToPlayToEndTime;
    SPProtoObjectMessage * _notifyTimeJumped;
    SPProtoAudioFilePlayerStatus * _setStatus;
    SPProtoAudioFilePlayerUpdateContainedIdentifier * _upsertWithAsset;
}

@property (nonatomic, retain) SPProtoObjectMessage *destroy;
@property (nonatomic, retain) SPProtoObjectMessage *getCurrentTime;
@property (nonatomic, readonly) BOOL hasDestroy;
@property (nonatomic, readonly) BOOL hasGetCurrentTime;
@property (nonatomic, readonly) BOOL hasNotifyDidPlayToEndTime;
@property (nonatomic, readonly) BOOL hasNotifyFailedToPlayToEndTime;
@property (nonatomic, readonly) BOOL hasNotifyTimeJumped;
@property (nonatomic, readonly) BOOL hasSetStatus;
@property (nonatomic, readonly) BOOL hasUpsertWithAsset;
@property (nonatomic, retain) SPProtoObjectMessage *notifyDidPlayToEndTime;
@property (nonatomic, retain) SPProtoObjectMessage *notifyFailedToPlayToEndTime;
@property (nonatomic, retain) SPProtoObjectMessage *notifyTimeJumped;
@property (nonatomic, retain) SPProtoAudioFilePlayerStatus *setStatus;
@property (nonatomic, retain) SPProtoAudioFilePlayerUpdateContainedIdentifier *upsertWithAsset;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destroy;
- (id)dictionaryRepresentation;
- (id)getCurrentTime;
- (BOOL)hasDestroy;
- (BOOL)hasGetCurrentTime;
- (BOOL)hasNotifyDidPlayToEndTime;
- (BOOL)hasNotifyFailedToPlayToEndTime;
- (BOOL)hasNotifyTimeJumped;
- (BOOL)hasSetStatus;
- (BOOL)hasUpsertWithAsset;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notifyDidPlayToEndTime;
- (id)notifyFailedToPlayToEndTime;
- (id)notifyTimeJumped;
- (BOOL)readFrom:(id)arg1;
- (void)setDestroy:(id)arg1;
- (void)setGetCurrentTime:(id)arg1;
- (void)setNotifyDidPlayToEndTime:(id)arg1;
- (void)setNotifyFailedToPlayToEndTime:(id)arg1;
- (void)setNotifyTimeJumped:(id)arg1;
- (void)setSetStatus:(id)arg1;
- (id)setStatus;
- (void)setUpsertWithAsset:(id)arg1;
- (id)sockPuppetMessage;
- (id)upsertWithAsset;
- (void)writeTo:(id)arg1;

@end
