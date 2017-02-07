/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {
    struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _photoSizeFilters;
    unsigned int  _photoSizeFiltersCount;
    unsigned int  _photoSizeFiltersSpace;
}

@property (nonatomic, readonly) struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*photoSizeFilters;
@property (nonatomic, readonly) unsigned int photoSizeFiltersCount;

- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearPhotoSizeFilters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })photoSizeFilterAtIndex:(unsigned int)arg1;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)photoSizeFilters;
- (unsigned int)photoSizeFiltersCount;
- (BOOL)readFrom:(id)arg1;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end
