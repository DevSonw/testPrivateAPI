/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {
    NTPBDeviceInfo * _deviceInfo;
    NSMutableArray * _notificationEntitys;
    NSString * _notificationUserId;
    NSString * _userStorefrontId;
}

@property (nonatomic, retain) NTPBDeviceInfo *deviceInfo;
@property (nonatomic, readonly) BOOL hasDeviceInfo;
@property (nonatomic, readonly) BOOL hasNotificationUserId;
@property (nonatomic, readonly) BOOL hasUserStorefrontId;
@property (nonatomic, retain) NSMutableArray *notificationEntitys;
@property (nonatomic, retain) NSString *notificationUserId;
@property (nonatomic, retain) NSString *userStorefrontId;

+ (Class)notificationEntityType;

- (void).cxx_destruct;
- (void)addNotificationEntity:(id)arg1;
- (void)clearNotificationEntitys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (BOOL)hasDeviceInfo;
- (BOOL)hasNotificationUserId;
- (BOOL)hasUserStorefrontId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationEntityAtIndex:(unsigned int)arg1;
- (id)notificationEntitys;
- (unsigned int)notificationEntitysCount;
- (id)notificationUserId;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setNotificationEntitys:(id)arg1;
- (void)setNotificationUserId:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
