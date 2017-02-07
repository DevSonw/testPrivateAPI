/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPBPlayActivityEvent : PBCodable <NSCopying> {
    NSString * _buildVersion;
    NSString * _cloudAlbumID;
    unsigned long long  _cloudPlaylistID;
    long long  _containerAdamID;
    NSString * _containerID;
    int  _containerType;
    NSString * _deviceName;
    int  _endReasonType;
    long long  _equivalencySourceAdamID;
    double  _eventDateTimestamp;
    double  _eventSecondsFromGMT;
    int  _eventType;
    NSString * _externalID;
    NSString * _featureName;
    NSString * _globalPlaylistID;
    struct { 
        unsigned int cloudPlaylistID : 1; 
        unsigned int containerAdamID : 1; 
        unsigned int equivalencySourceAdamID : 1; 
        unsigned int eventDateTimestamp : 1; 
        unsigned int eventSecondsFromGMT : 1; 
        unsigned int itemCloudID : 1; 
        unsigned int itemDuration : 1; 
        unsigned int itemEndTime : 1; 
        unsigned int itemStartTime : 1; 
        unsigned int persistentID : 1; 
        unsigned int purchasedAdamID : 1; 
        unsigned int radioAdamID : 1; 
        unsigned int stationID : 1; 
        unsigned int storeAccountID : 1; 
        unsigned int subscriptionAdamID : 1; 
        unsigned int containerType : 1; 
        unsigned int endReasonType : 1; 
        unsigned int eventType : 1; 
        unsigned int itemType : 1; 
        unsigned int mediaType : 1; 
        unsigned int reasonHintType : 1; 
        unsigned int sourceType : 1; 
        unsigned int offline : 1; 
        unsigned int sBEnabled : 1; 
    }  _has;
    unsigned long long  _itemCloudID;
    double  _itemDuration;
    double  _itemEndTime;
    double  _itemStartTime;
    int  _itemType;
    NSString * _lyricsID;
    int  _mediaType;
    BOOL  _offline;
    long long  _persistentID;
    NSString * _personalizedContainerID;
    NSString * _playlistVersionHash;
    long long  _purchasedAdamID;
    long long  _radioAdamID;
    int  _reasonHintType;
    NSData * _recommendationData;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    BOOL  _sBEnabled;
    int  _sourceType;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationStringID;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
    NSString * _storeID;
    long long  _subscriptionAdamID;
    NSData * _timedMetadata;
    NSData * _trackInfo;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *cloudAlbumID;
@property (nonatomic) unsigned long long cloudPlaylistID;
@property (nonatomic) long long containerAdamID;
@property (nonatomic, retain) NSString *containerID;
@property (nonatomic) int containerType;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) int endReasonType;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) double eventDateTimestamp;
@property (nonatomic) double eventSecondsFromGMT;
@property (nonatomic) int eventType;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSString *featureName;
@property (nonatomic, retain) NSString *globalPlaylistID;
@property (nonatomic, readonly) BOOL hasBuildVersion;
@property (nonatomic, readonly) BOOL hasCloudAlbumID;
@property (nonatomic) BOOL hasCloudPlaylistID;
@property (nonatomic) BOOL hasContainerAdamID;
@property (nonatomic, readonly) BOOL hasContainerID;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic, readonly) BOOL hasDeviceName;
@property (nonatomic) BOOL hasEndReasonType;
@property (nonatomic) BOOL hasEquivalencySourceAdamID;
@property (nonatomic) BOOL hasEventDateTimestamp;
@property (nonatomic) BOOL hasEventSecondsFromGMT;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic, readonly) BOOL hasExternalID;
@property (nonatomic, readonly) BOOL hasFeatureName;
@property (nonatomic, readonly) BOOL hasGlobalPlaylistID;
@property (nonatomic) BOOL hasItemCloudID;
@property (nonatomic) BOOL hasItemDuration;
@property (nonatomic) BOOL hasItemEndTime;
@property (nonatomic) BOOL hasItemStartTime;
@property (nonatomic) BOOL hasItemType;
@property (nonatomic, readonly) BOOL hasLyricsID;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasOffline;
@property (nonatomic) BOOL hasPersistentID;
@property (nonatomic, readonly) BOOL hasPersonalizedContainerID;
@property (nonatomic, readonly) BOOL hasPlaylistVersionHash;
@property (nonatomic) BOOL hasPurchasedAdamID;
@property (nonatomic) BOOL hasRadioAdamID;
@property (nonatomic) BOOL hasReasonHintType;
@property (nonatomic, readonly) BOOL hasRecommendationData;
@property (nonatomic, readonly) BOOL hasRequestingBundleIdentifier;
@property (nonatomic, readonly) BOOL hasRequestingBundleVersion;
@property (nonatomic) BOOL hasSBEnabled;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic, readonly) BOOL hasStationHash;
@property (nonatomic) BOOL hasStationID;
@property (nonatomic, readonly) BOOL hasStationStringID;
@property (nonatomic) BOOL hasStoreAccountID;
@property (nonatomic, readonly) BOOL hasStoreFrontID;
@property (nonatomic, readonly) BOOL hasStoreID;
@property (nonatomic) BOOL hasSubscriptionAdamID;
@property (nonatomic, readonly) BOOL hasTimedMetadata;
@property (nonatomic, readonly) BOOL hasTrackInfo;
@property (nonatomic) unsigned long long itemCloudID;
@property (nonatomic) double itemDuration;
@property (nonatomic) double itemEndTime;
@property (nonatomic) double itemStartTime;
@property (nonatomic) int itemType;
@property (nonatomic, retain) NSString *lyricsID;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL offline;
@property (nonatomic) long long persistentID;
@property (nonatomic, retain) NSString *personalizedContainerID;
@property (nonatomic, retain) NSString *playlistVersionHash;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long radioAdamID;
@property (nonatomic) int reasonHintType;
@property (nonatomic, retain) NSData *recommendationData;
@property (nonatomic, retain) NSString *requestingBundleIdentifier;
@property (nonatomic, retain) NSString *requestingBundleVersion;
@property (nonatomic) BOOL sBEnabled;
@property (nonatomic) int sourceType;
@property (nonatomic, retain) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, retain) NSString *stationStringID;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, retain) NSString *storeFrontID;
@property (nonatomic, retain) NSString *storeID;
@property (nonatomic) long long subscriptionAdamID;
@property (nonatomic, retain) NSData *timedMetadata;
@property (nonatomic, retain) NSData *trackInfo;

- (void).cxx_destruct;
- (int)StringAsContainerType:(id)arg1;
- (int)StringAsEndReasonType:(id)arg1;
- (int)StringAsEventType:(id)arg1;
- (int)StringAsItemType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (int)StringAsReasonHintType:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (id)buildVersion;
- (id)cloudAlbumID;
- (unsigned long long)cloudPlaylistID;
- (long long)containerAdamID;
- (id)containerID;
- (int)containerType;
- (id)containerTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (int)endReasonType;
- (id)endReasonTypeAsString:(int)arg1;
- (long long)equivalencySourceAdamID;
- (double)eventDateTimestamp;
- (double)eventSecondsFromGMT;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (id)externalID;
- (id)featureName;
- (id)globalPlaylistID;
- (BOOL)hasBuildVersion;
- (BOOL)hasCloudAlbumID;
- (BOOL)hasCloudPlaylistID;
- (BOOL)hasContainerAdamID;
- (BOOL)hasContainerID;
- (BOOL)hasContainerType;
- (BOOL)hasDeviceName;
- (BOOL)hasEndReasonType;
- (BOOL)hasEquivalencySourceAdamID;
- (BOOL)hasEventDateTimestamp;
- (BOOL)hasEventSecondsFromGMT;
- (BOOL)hasEventType;
- (BOOL)hasExternalID;
- (BOOL)hasFeatureName;
- (BOOL)hasGlobalPlaylistID;
- (BOOL)hasItemCloudID;
- (BOOL)hasItemDuration;
- (BOOL)hasItemEndTime;
- (BOOL)hasItemStartTime;
- (BOOL)hasItemType;
- (BOOL)hasLyricsID;
- (BOOL)hasMediaType;
- (BOOL)hasOffline;
- (BOOL)hasPersistentID;
- (BOOL)hasPersonalizedContainerID;
- (BOOL)hasPlaylistVersionHash;
- (BOOL)hasPurchasedAdamID;
- (BOOL)hasRadioAdamID;
- (BOOL)hasReasonHintType;
- (BOOL)hasRecommendationData;
- (BOOL)hasRequestingBundleIdentifier;
- (BOOL)hasRequestingBundleVersion;
- (BOOL)hasSBEnabled;
- (BOOL)hasSourceType;
- (BOOL)hasStationHash;
- (BOOL)hasStationID;
- (BOOL)hasStationStringID;
- (BOOL)hasStoreAccountID;
- (BOOL)hasStoreFrontID;
- (BOOL)hasStoreID;
- (BOOL)hasSubscriptionAdamID;
- (BOOL)hasTimedMetadata;
- (BOOL)hasTrackInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)itemCloudID;
- (double)itemDuration;
- (double)itemEndTime;
- (double)itemStartTime;
- (int)itemType;
- (id)itemTypeAsString:(int)arg1;
- (id)lyricsID;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)offline;
- (long long)persistentID;
- (id)personalizedContainerID;
- (id)playlistVersionHash;
- (long long)purchasedAdamID;
- (long long)radioAdamID;
- (BOOL)readFrom:(id)arg1;
- (int)reasonHintType;
- (id)reasonHintTypeAsString:(int)arg1;
- (id)recommendationData;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (BOOL)sBEnabled;
- (void)setBuildVersion:(id)arg1;
- (void)setCloudAlbumID:(id)arg1;
- (void)setCloudPlaylistID:(unsigned long long)arg1;
- (void)setContainerAdamID:(long long)arg1;
- (void)setContainerID:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEndReasonType:(int)arg1;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setEventDateTimestamp:(double)arg1;
- (void)setEventSecondsFromGMT:(double)arg1;
- (void)setEventType:(int)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setGlobalPlaylistID:(id)arg1;
- (void)setHasCloudPlaylistID:(BOOL)arg1;
- (void)setHasContainerAdamID:(BOOL)arg1;
- (void)setHasContainerType:(BOOL)arg1;
- (void)setHasEndReasonType:(BOOL)arg1;
- (void)setHasEquivalencySourceAdamID:(BOOL)arg1;
- (void)setHasEventDateTimestamp:(BOOL)arg1;
- (void)setHasEventSecondsFromGMT:(BOOL)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setHasItemCloudID:(BOOL)arg1;
- (void)setHasItemDuration:(BOOL)arg1;
- (void)setHasItemEndTime:(BOOL)arg1;
- (void)setHasItemStartTime:(BOOL)arg1;
- (void)setHasItemType:(BOOL)arg1;
- (void)setHasMediaType:(BOOL)arg1;
- (void)setHasOffline:(BOOL)arg1;
- (void)setHasPersistentID:(BOOL)arg1;
- (void)setHasPurchasedAdamID:(BOOL)arg1;
- (void)setHasRadioAdamID:(BOOL)arg1;
- (void)setHasReasonHintType:(BOOL)arg1;
- (void)setHasSBEnabled:(BOOL)arg1;
- (void)setHasSourceType:(BOOL)arg1;
- (void)setHasStationID:(BOOL)arg1;
- (void)setHasStoreAccountID:(BOOL)arg1;
- (void)setHasSubscriptionAdamID:(BOOL)arg1;
- (void)setItemCloudID:(unsigned long long)arg1;
- (void)setItemDuration:(double)arg1;
- (void)setItemEndTime:(double)arg1;
- (void)setItemStartTime:(double)arg1;
- (void)setItemType:(int)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setOffline:(BOOL)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPersonalizedContainerID:(id)arg1;
- (void)setPlaylistVersionHash:(id)arg1;
- (void)setPurchasedAdamID:(long long)arg1;
- (void)setRadioAdamID:(long long)arg1;
- (void)setReasonHintType:(int)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setSBEnabled:(BOOL)arg1;
- (void)setSourceType:(int)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setSubscriptionAdamID:(long long)arg1;
- (void)setTimedMetadata:(id)arg1;
- (void)setTrackInfo:(id)arg1;
- (int)sourceType;
- (id)sourceTypeAsString:(int)arg1;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (id)storeID;
- (long long)subscriptionAdamID;
- (id)timedMetadata;
- (id)trackInfo;
- (void)writeTo:(id)arg1;

@end