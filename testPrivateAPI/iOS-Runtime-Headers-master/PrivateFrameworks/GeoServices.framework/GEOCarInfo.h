/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCarInfo : PBCodable <NSCopying> {
    int  _deviceConnection;
    struct { 
        unsigned int screenResolution : 1; 
        unsigned int deviceConnection : 1; 
        unsigned int interactionModel : 1; 
    }  _has;
    int  _interactionModel;
    NSString * _manufacturer;
    NSString * _model;
    struct GEOScreenResolution { 
        double _height; 
        double _width; 
        struct { 
            unsigned int height : 1; 
            unsigned int width : 1; 
        } _has; 
    }  _screenResolution;
}

@property (nonatomic) int deviceConnection;
@property (nonatomic) BOOL hasDeviceConnection;
@property (nonatomic) BOOL hasInteractionModel;
@property (nonatomic, readonly) BOOL hasManufacturer;
@property (nonatomic, readonly) BOOL hasModel;
@property (nonatomic) BOOL hasScreenResolution;
@property (nonatomic) int interactionModel;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *model;
@property (nonatomic) struct GEOScreenResolution { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } screenResolution;

+ (id)carInfoWithTraits:(id)arg1;

- (int)StringAsDeviceConnection:(id)arg1;
- (int)StringAsInteractionModel:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceConnection;
- (id)deviceConnectionAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)hasDeviceConnection;
- (BOOL)hasInteractionModel;
- (BOOL)hasManufacturer;
- (BOOL)hasModel;
- (BOOL)hasScreenResolution;
- (unsigned int)hash;
- (id)initWithTraits:(id)arg1;
- (int)interactionModel;
- (id)interactionModelAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)manufacturer;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (BOOL)readFrom:(id)arg1;
- (struct GEOScreenResolution { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })screenResolution;
- (void)setDeviceConnection:(int)arg1;
- (void)setHasDeviceConnection:(BOOL)arg1;
- (void)setHasInteractionModel:(BOOL)arg1;
- (void)setHasScreenResolution:(BOOL)arg1;
- (void)setInteractionModel:(int)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setScreenResolution:(struct GEOScreenResolution { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)writeTo:(id)arg1;

@end
