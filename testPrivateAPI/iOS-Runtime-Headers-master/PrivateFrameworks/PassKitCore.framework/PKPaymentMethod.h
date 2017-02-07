/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMethod : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _network;
    PKPaymentPass * _paymentPass;
    PKRemotePaymentInstrument * _remoteInstrument;
    unsigned int  _type;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *network;
@property (nonatomic, copy) PKPaymentPass *paymentPass;
@property (nonatomic, retain) PKRemotePaymentInstrument *remoteInstrument;
@property (nonatomic) unsigned int type;

+ (id)paymentMethodWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)network;
- (id)paymentPass;
- (id)protobuf;
- (id)remoteInstrument;
- (void)setDisplayName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setRemoteInstrument:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
