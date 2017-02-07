/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {
    NSString * _containerIdentifier;
    CKDContainerInfo * _containerInfo;
    NSString * _iCloudAuthToken;
    BOOL  _needUserID;
}

@property (nonatomic) NSString *containerIdentifier;
@property (nonatomic, copy) CKDContainerInfo *containerInfo;
@property (nonatomic, copy) NSString *iCloudAuthToken;
@property (nonatomic) BOOL needUserID;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (id)containerIdentifier;
- (id)containerInfo;
- (BOOL)hasRequestBody;
- (id)iCloudAuthToken;
- (id)initWithContainerIdentifier:(id)arg1;
- (BOOL)needUserID;
- (int)partitionType;
- (void)prepareRequestWithCompletion:(id /* block */)arg1;
- (void)requestDidParseJSONObject:(id)arg1;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (int)serverType;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerInfo:(id)arg1;
- (void)setICloudAuthToken:(id)arg1;
- (void)setNeedUserID:(BOOL)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)url;

@end