/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDialingContactValue : PBCodable <NSCopying> {
    _INPBContactValue * _dialingContact;
    _INPBStringValue * _dialingPhoneLabel;
    _INPBStringValue * _dialingPhoneNumber;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBContactValue *dialingContact;
@property (nonatomic, retain) _INPBStringValue *dialingPhoneLabel;
@property (nonatomic, retain) _INPBStringValue *dialingPhoneNumber;
@property (nonatomic, readonly) BOOL hasDialingContact;
@property (nonatomic, readonly) BOOL hasDialingPhoneLabel;
@property (nonatomic, readonly) BOOL hasDialingPhoneNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialingContact;
- (id)dialingPhoneLabel;
- (id)dialingPhoneNumber;
- (id)dictionaryRepresentation;
- (BOOL)hasDialingContact;
- (BOOL)hasDialingPhoneLabel;
- (BOOL)hasDialingPhoneNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDialingContact:(id)arg1;
- (void)setDialingPhoneLabel:(id)arg1;
- (void)setDialingPhoneNumber:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
