/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetIconMessage * _protobuf;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSData *icon;
@property (nonatomic, readonly) NSData *originalDigest;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

+ (id)messageWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3;
- (id)bundleID;
- (id)icon;
- (id)initWithProtobufData:(id)arg1;
- (id)originalDigest;
- (id)protobufData;
- (id)serializationDate;

@end
