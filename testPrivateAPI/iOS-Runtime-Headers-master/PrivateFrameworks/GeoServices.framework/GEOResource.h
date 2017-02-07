/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResource : PBCodable <NSCopying> {
    NSData * _checksum;
    int  _connectionType;
    NSString * _filename;
    NSMutableArray * _filters;
    struct { 
        unsigned int connectionType : 1; 
        unsigned int preferWiFiAllowedStaleThreshold : 1; 
        unsigned int resourceType : 1; 
    }  _has;
    unsigned int  _preferWiFiAllowedStaleThreshold;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _regions;
    unsigned int  _regionsCount;
    unsigned int  _regionsSpace;
    int  _resourceType;
}

@property (nonatomic, retain) NSData *checksum;
@property (nonatomic) int connectionType;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic, readonly) BOOL hasChecksum;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic, readonly) BOOL hasFilename;
@property (nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold;
@property (nonatomic) BOOL hasResourceType;
@property (nonatomic) unsigned int preferWiFiAllowedStaleThreshold;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*regions;
@property (nonatomic, readonly) unsigned int regionsCount;
@property (nonatomic) int resourceType;

+ (Class)filterType;

- (int)StringAsConnectionType:(id)arg1;
- (int)StringAsResourceType:(id)arg1;
- (BOOL)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2;
- (void)addFilter:(id)arg1;
- (void)addRegion:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (id)checksum;
- (void)clearFilters;
- (void)clearRegions;
- (int)connectionType;
- (id)connectionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filename;
- (id)filterAtIndex:(unsigned int)arg1;
- (id)filters;
- (unsigned int)filtersCount;
- (BOOL)hasChecksum;
- (BOOL)hasConnectionType;
- (BOOL)hasFilename;
- (BOOL)hasPreferWiFiAllowedStaleThreshold;
- (BOOL)hasResourceType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)preferWiFiAllowedStaleThreshold;
- (BOOL)readFrom:(id)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })regionAtIndex:(unsigned int)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)regions;
- (unsigned int)regionsCount;
- (int)resourceType;
- (id)resourceTypeAsString:(int)arg1;
- (void)setChecksum:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setFilename:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasPreferWiFiAllowedStaleThreshold:(BOOL)arg1;
- (void)setHasResourceType:(BOOL)arg1;
- (void)setPreferWiFiAllowedStaleThreshold:(unsigned int)arg1;
- (void)setRegions:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned int)arg2;
- (void)setResourceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
