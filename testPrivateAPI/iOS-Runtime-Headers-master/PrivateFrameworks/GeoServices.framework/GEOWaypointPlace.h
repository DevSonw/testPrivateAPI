/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointPlace : PBCodable <NSCopying> {
    GEOLatLng * _center;
    NSMutableArray * _roadAccessPoints;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) BOOL hasCenter;
@property (nonatomic, retain) NSMutableArray *roadAccessPoints;

+ (Class)roadAccessPointType;

- (void)addRoadAccessPoint:(id)arg1;
- (id)center;
- (void)clearRoadAccessPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCenter;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned int)arg1;
- (id)roadAccessPoints;
- (unsigned int)roadAccessPointsCount;
- (void)setCenter:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
