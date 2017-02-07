/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACProminentHapticStateMessage : PBCodable <NSCopying> {
    BOOL  _enabled;
    struct { 
        unsigned int enabled : 1; 
    }  _has;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enabled;
- (BOOL)hasEnabled;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasEnabled:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
