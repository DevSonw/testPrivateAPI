/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPNotification : PBCodable <NSCopying> {
    NSString * _localizedText;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) BOOL hasLocalizedText;
@property (nonatomic, readonly) BOOL hasLocalizedTitle;
@property (nonatomic, retain) NSString *localizedText;
@property (nonatomic, retain) NSString *localizedTitle;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLocalizedText;
- (BOOL)hasLocalizedTitle;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedText;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
