/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOverlayableRequest : PKPaymentWebServiceRequest {
    NSMutableDictionary * _overlayParameters;
    NSArray * _overridenKeys;
    BOOL  _requiresConfigurationForRedirect;
    BOOL  _requiresConfigurationForRetry;
    NSMutableDictionary * _secureOverlayParameters;
}

@property (nonatomic, copy) NSDictionary *overlayParameters;
@property (nonatomic) BOOL requiresConfigurationForRedirect;
@property (nonatomic) BOOL requiresConfigurationForRetry;
@property (nonatomic, copy) NSDictionary *secureOverlayParameters;

- (void).cxx_destruct;
- (void)_applyOverlayToDictionary:(id)arg1;
- (void)_applySecureOverlayToDictionary:(id)arg1;
- (void)_setOverriddenKeys:(id)arg1;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (BOOL)hasOverlayParameters;
- (id)init;
- (id)overlayParameters;
- (id)overlayValueForKey:(id)arg1;
- (BOOL)requiresConfigurationForRedirect;
- (BOOL)requiresConfigurationForRetry;
- (id)secureOverlayParameters;
- (id)secureOverlayValueForKey:(id)arg1;
- (void)setOverlayParameters:(id)arg1;
- (void)setOverlayValue:(id)arg1 forKey:(id)arg2;
- (void)setRequiresConfigurationForRedirect:(BOOL)arg1;
- (void)setRequiresConfigurationForRetry:(BOOL)arg1;
- (void)setSecureOverlayParameters:(id)arg1;
- (void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2;

@end
