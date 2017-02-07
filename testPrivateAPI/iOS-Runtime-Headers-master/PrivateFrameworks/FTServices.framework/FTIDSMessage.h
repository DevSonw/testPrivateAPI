/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {
    NSMutableArray * _certDataArray;
    NSData * _identityCert;
    struct __SecKey { } * _identityKey;
    struct __SecKey { } * _identityPublicKey;
    NSMutableArray * _privateKeyArray;
    NSMutableArray * _publicKeyArray;
    NSData * _pushCert;
    struct __SecKey { } * _pushKey;
    struct __SecKey { } * _pushPublicKey;
    NSData * _pushToken;
    NSString * _selfURI;
    NSNumber * _serverTimestamp;
    NSNumber * _serverTimestampReceivedDate;
    NSMutableArray * _userIDArray;
}

@property (nonatomic, copy) NSData *IDCertificate;
@property (nonatomic, copy) NSMutableArray *certDataArray;
@property (nonatomic) struct __SecKey { }*identityPrivateKey;
@property (nonatomic) struct __SecKey { }*identityPublicKey;
@property (nonatomic, copy) NSMutableArray *privateKeyArray;
@property (nonatomic, copy) NSMutableArray *publicKeyArray;
@property (nonatomic, copy) NSData *pushCertificate;
@property (nonatomic) struct __SecKey { }*pushPrivateKey;
@property (nonatomic) struct __SecKey { }*pushPublicKey;
@property (nonatomic, copy) NSData *pushToken;
@property (nonatomic, copy) NSString *selfURI;
@property (nonatomic, copy) NSMutableArray *userIDArray;

- (id)IDCertificate;
- (void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(struct __SecKey { }*)arg3 publicKey:(struct __SecKey { }*)arg4;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)certDataArray;
- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __SecKey { }*)identityPrivateKey;
- (struct __SecKey { }*)identityPublicKey;
- (id)init;
- (id)privateKeyArray;
- (id)publicKeyArray;
- (id)pushCertificate;
- (struct __SecKey { }*)pushPrivateKey;
- (struct __SecKey { }*)pushPublicKey;
- (id)pushToken;
- (int)responseCommand;
- (id)selfURI;
- (id)serverTimestamp;
- (id)serverTimestampReceivedDate;
- (void)setCertDataArray:(id)arg1;
- (void)setIDCertificate:(id)arg1;
- (void)setIdentityPrivateKey:(struct __SecKey { }*)arg1;
- (void)setIdentityPublicKey:(struct __SecKey { }*)arg1;
- (void)setPrivateKeyArray:(id)arg1;
- (void)setPublicKeyArray:(id)arg1;
- (void)setPushCertificate:(id)arg1;
- (void)setPushPrivateKey:(struct __SecKey { }*)arg1;
- (void)setPushPublicKey:(struct __SecKey { }*)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSelfURI:(id)arg1;
- (void)setServerTimestamp:(id)arg1;
- (void)setServerTimestampReceivedDate:(id)arg1;
- (void)setUserIDArray:(id)arg1;
- (id)userIDArray;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsBodySignature;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsIDSServer;
- (BOOL)wantsSignature;

@end
