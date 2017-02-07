/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentMethodList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _paymentMethods;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, readonly) BOOL hasCondition;
@property (nonatomic, retain) NSMutableArray *paymentMethods;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)paymentMethodsType;

- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (void)clearPaymentMethods;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCondition;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentMethods;
- (id)paymentMethodsAtIndex:(unsigned int)arg1;
- (unsigned int)paymentMethodsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
