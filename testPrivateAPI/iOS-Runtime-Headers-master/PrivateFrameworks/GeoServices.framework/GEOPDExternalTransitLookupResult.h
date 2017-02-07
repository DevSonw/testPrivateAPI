/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalTransitLookupResult : PBCodable <NSCopying> {
    NSString * _providerId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasProviderId;
@property (nonatomic, retain) NSString *providerId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProviderId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerId;
- (BOOL)readFrom:(id)arg1;
- (void)setProviderId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
