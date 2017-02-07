/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackItemsRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting, MPModelStorePreviousRequestStoring> {
    BOOL  _allowLocalEquivalencies;
    BOOL  _allowsMultipleResponseHandlerCalls;
    MPModelResponse * _previousResponse;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    NSArray * _storeIDs;
    BOOL  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic) BOOL allowLocalEquivalencies;
@property (nonatomic) BOOL allowsMultipleResponseHandlerCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPModelResponse *previousResponse;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;

- (void).cxx_destruct;
- (BOOL)allowLocalEquivalencies;
- (BOOL)allowsMultipleResponseHandlerCalls;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setAllowLocalEquivalencies:(BOOL)arg1;
- (void)setAllowsMultipleResponseHandlerCalls:(BOOL)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(BOOL)arg1;
- (id)storeIDs;
- (BOOL)wantsDetailedKeepLocalRequestableResponse;

@end
