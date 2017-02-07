/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebKit::GeolocationPermissionRequestProxy> { 
        struct GeolocationPermissionRequestProxy {} *m_ptr; 
    }  _permissionRequestProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithPermissionRequestProxy:(struct PassRefPtr<WebKit::GeolocationPermissionRequestProxy> { struct GeolocationPermissionRequestProxy {} *x1; })arg1;
- (BOOL)shouldClearCache;

@end
