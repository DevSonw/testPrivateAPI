/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBProtobuf : IDSProtobuf {
    IDSProtobuf * _idsProtobuf;
    PBCodable * _protobuf;
    int  _sequenceNumberError;
    unsigned int  _sessionState;
}

@property (nonatomic, retain) IDSProtobuf *idsProtobuf;
@property (nonatomic, retain) PBCodable *protobuf;
@property (nonatomic, readonly) int sequenceNumberError;
@property (nonatomic, readonly) unsigned int sessionState;

- (void).cxx_destruct;
- (id)idsProtobuf;
- (id)initWithIDSProtobuf:(id)arg1 sequenceNumberManager:(id)arg2;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 sequenceNumberManager:(id)arg4;
- (id)protobuf;
- (int)sequenceNumberError;
- (unsigned int)sessionState;
- (void)setIdsProtobuf:(id)arg1;
- (void)setProtobuf:(id)arg1;

@end
