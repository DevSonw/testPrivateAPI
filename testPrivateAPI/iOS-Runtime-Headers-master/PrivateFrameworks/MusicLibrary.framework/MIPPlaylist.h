/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPPlaylist : PBCodable <NSCopying> {
    NSMutableArray * _childIdentifiers;
    NSString * _cloudGlobalId;
    BOOL  _cloudIsCuratorPlaylist;
    BOOL  _cloudIsSharingDisabled;
    BOOL  _cloudIsSubscribed;
    NSString * _cloudVersionHash;
    long long  _creationDateTime;
    int  _distinguishedKind;
    NSString * _externalVendorDisplayName;
    NSString * _externalVendorIdentifier;
    BOOL  _externalVendorPlaylist;
    NSString * _externalVendorTag;
    MIPMultiverseIdentifier * _geniusSeedTrackIdentifier;
    struct { 
        unsigned int creationDateTime : 1; 
        unsigned int lastPlayedDateTime : 1; 
        unsigned int modificationDateTime : 1; 
        unsigned int storeId : 1; 
        unsigned int distinguishedKind : 1; 
        unsigned int sortType : 1; 
        unsigned int type : 1; 
        unsigned int cloudIsCuratorPlaylist : 1; 
        unsigned int cloudIsSharingDisabled : 1; 
        unsigned int cloudIsSubscribed : 1; 
        unsigned int externalVendorPlaylist : 1; 
        unsigned int hidden : 1; 
        unsigned int reversedSorting : 1; 
    }  _has;
    BOOL  _hidden;
    NSMutableArray * _items;
    long long  _lastPlayedDateTime;
    long long  _modificationDateTime;
    NSString * _name;
    MIPMultiverseIdentifier * _parentIdentifier;
    BOOL  _reversedSorting;
    MIPSmartPlaylistInfo * _smartPlaylistInfo;
    int  _sortType;
    long long  _storeId;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *childIdentifiers;
@property (nonatomic, retain) NSString *cloudGlobalId;
@property (nonatomic) BOOL cloudIsCuratorPlaylist;
@property (nonatomic) BOOL cloudIsSharingDisabled;
@property (nonatomic) BOOL cloudIsSubscribed;
@property (nonatomic, retain) NSString *cloudVersionHash;
@property (nonatomic) long long creationDateTime;
@property (nonatomic) int distinguishedKind;
@property (nonatomic, retain) NSString *externalVendorDisplayName;
@property (nonatomic, retain) NSString *externalVendorIdentifier;
@property (nonatomic) BOOL externalVendorPlaylist;
@property (nonatomic, retain) NSString *externalVendorTag;
@property (nonatomic, retain) MIPMultiverseIdentifier *geniusSeedTrackIdentifier;
@property (nonatomic, readonly) BOOL hasCloudGlobalId;
@property (nonatomic) BOOL hasCloudIsCuratorPlaylist;
@property (nonatomic) BOOL hasCloudIsSharingDisabled;
@property (nonatomic) BOOL hasCloudIsSubscribed;
@property (nonatomic, readonly) BOOL hasCloudVersionHash;
@property (nonatomic) BOOL hasCreationDateTime;
@property (nonatomic) BOOL hasDistinguishedKind;
@property (nonatomic, readonly) BOOL hasExternalVendorDisplayName;
@property (nonatomic, readonly) BOOL hasExternalVendorIdentifier;
@property (nonatomic) BOOL hasExternalVendorPlaylist;
@property (nonatomic, readonly) BOOL hasExternalVendorTag;
@property (nonatomic, readonly) BOOL hasGeniusSeedTrackIdentifier;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasLastPlayedDateTime;
@property (nonatomic) BOOL hasModificationDateTime;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasParentIdentifier;
@property (nonatomic) BOOL hasReversedSorting;
@property (nonatomic, readonly) BOOL hasSmartPlaylistInfo;
@property (nonatomic) BOOL hasSortType;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic) long long lastPlayedDateTime;
@property (nonatomic) long long modificationDateTime;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) MIPMultiverseIdentifier *parentIdentifier;
@property (nonatomic) BOOL reversedSorting;
@property (nonatomic, retain) MIPSmartPlaylistInfo *smartPlaylistInfo;
@property (nonatomic) int sortType;
@property (nonatomic) long long storeId;
@property (nonatomic) int type;

+ (Class)childIdentifiersType;
+ (Class)itemsType;

- (void).cxx_destruct;
- (int)StringAsSortType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addChildIdentifiers:(id)arg1;
- (void)addItems:(id)arg1;
- (id)childIdentifiers;
- (id)childIdentifiersAtIndex:(unsigned int)arg1;
- (unsigned int)childIdentifiersCount;
- (void)clearChildIdentifiers;
- (void)clearItems;
- (id)cloudGlobalId;
- (BOOL)cloudIsCuratorPlaylist;
- (BOOL)cloudIsSharingDisabled;
- (BOOL)cloudIsSubscribed;
- (id)cloudVersionHash;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)creationDateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distinguishedKind;
- (id)externalVendorDisplayName;
- (id)externalVendorIdentifier;
- (BOOL)externalVendorPlaylist;
- (id)externalVendorTag;
- (id)geniusSeedTrackIdentifier;
- (BOOL)hasCloudGlobalId;
- (BOOL)hasCloudIsCuratorPlaylist;
- (BOOL)hasCloudIsSharingDisabled;
- (BOOL)hasCloudIsSubscribed;
- (BOOL)hasCloudVersionHash;
- (BOOL)hasCreationDateTime;
- (BOOL)hasDistinguishedKind;
- (BOOL)hasExternalVendorDisplayName;
- (BOOL)hasExternalVendorIdentifier;
- (BOOL)hasExternalVendorPlaylist;
- (BOOL)hasExternalVendorTag;
- (BOOL)hasGeniusSeedTrackIdentifier;
- (BOOL)hasHidden;
- (BOOL)hasLastPlayedDateTime;
- (BOOL)hasModificationDateTime;
- (BOOL)hasName;
- (BOOL)hasParentIdentifier;
- (BOOL)hasReversedSorting;
- (BOOL)hasSmartPlaylistInfo;
- (BOOL)hasSortType;
- (BOOL)hasStoreId;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)hidden;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned int)arg1;
- (unsigned int)itemsCount;
- (long long)lastPlayedDateTime;
- (void)mergeFrom:(id)arg1;
- (long long)modificationDateTime;
- (id)name;
- (id)parentIdentifier;
- (BOOL)readFrom:(id)arg1;
- (BOOL)reversedSorting;
- (void)setChildIdentifiers:(id)arg1;
- (void)setCloudGlobalId:(id)arg1;
- (void)setCloudIsCuratorPlaylist:(BOOL)arg1;
- (void)setCloudIsSharingDisabled:(BOOL)arg1;
- (void)setCloudIsSubscribed:(BOOL)arg1;
- (void)setCloudVersionHash:(id)arg1;
- (void)setCreationDateTime:(long long)arg1;
- (void)setDistinguishedKind:(int)arg1;
- (void)setExternalVendorDisplayName:(id)arg1;
- (void)setExternalVendorIdentifier:(id)arg1;
- (void)setExternalVendorPlaylist:(BOOL)arg1;
- (void)setExternalVendorTag:(id)arg1;
- (void)setGeniusSeedTrackIdentifier:(id)arg1;
- (void)setHasCloudIsCuratorPlaylist:(BOOL)arg1;
- (void)setHasCloudIsSharingDisabled:(BOOL)arg1;
- (void)setHasCloudIsSubscribed:(BOOL)arg1;
- (void)setHasCreationDateTime:(BOOL)arg1;
- (void)setHasDistinguishedKind:(BOOL)arg1;
- (void)setHasExternalVendorPlaylist:(BOOL)arg1;
- (void)setHasHidden:(BOOL)arg1;
- (void)setHasLastPlayedDateTime:(BOOL)arg1;
- (void)setHasModificationDateTime:(BOOL)arg1;
- (void)setHasReversedSorting:(BOOL)arg1;
- (void)setHasSortType:(BOOL)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (void)setLastPlayedDateTime:(long long)arg1;
- (void)setModificationDateTime:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setReversedSorting:(BOOL)arg1;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)setSortType:(int)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setType:(int)arg1;
- (id)smartPlaylistInfo;
- (int)sortType;
- (id)sortTypeAsString:(int)arg1;
- (long long)storeId;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end