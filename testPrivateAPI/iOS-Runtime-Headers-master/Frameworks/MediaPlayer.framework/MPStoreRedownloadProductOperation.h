/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductOperation : NSOperation {
    SSURLConnectionRequest * _URLConnectionRequest;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _buyParameters;
    unsigned int  _endpointType;
    MPStoreRedownloadProductResponse * _redownloadProductResponse;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    NSError * _responseError;
    BOOL  _shouldUseStreamingRedownload;
}

@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, readonly) unsigned int endpointType;
@property (nonatomic, readonly) MPStoreRedownloadProductResponse *redownloadProductResponse;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic, readonly, copy) NSError *responseError;

- (void).cxx_destruct;
- (id)buyParameters;
- (void)cancel;
- (unsigned int)endpointType;
- (id)init;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned int)arg2;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned int)arg2 shouldUseStreamingRedownload:(BOOL)arg3;
- (void)main;
- (id)redownloadProductResponse;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (id)responseError;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;

@end
