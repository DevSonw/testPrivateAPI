/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {
    NSString * _countryCode;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _language;
    GEOPDPlaceResponse * _response;
    NSString * _sourceURL;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) BOOL hasCountryCode;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic, readonly) BOOL hasResponse;
@property (nonatomic, readonly) BOOL hasSourceURL;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) GEOPDPlaceResponse *response;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCountryCode;
- (BOOL)hasLanguage;
- (BOOL)hasResponse;
- (BOOL)hasSourceURL;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)response;
- (void)setCountryCode:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
