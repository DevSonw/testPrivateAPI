/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol> {
    NSOperationQueue * _privateQueue;
    NSString * _service;
}

@property (getter=isAccessRestricted, nonatomic, readonly) BOOL accessRestriced;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *knownAppBundles;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;

+ (id)sharedPrivacyFacade;

- (void).cxx_destruct;
- (id)init;
- (id)initWithService:(id)arg1;
- (BOOL)isAccessGrantedForAuditToken:(struct { unsigned int x1[8]; })arg1;
- (BOOL)isAccessGrantedForBundle:(struct __CFBundle { }*)arg1;
- (BOOL)isAccessRestricted;
- (id)knownAppBundles;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)privateQueue;
- (void)requestAccessForAuditToken:(struct { unsigned int x1[8]; })arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)reset;
- (id)service;
- (BOOL)setAccessGranted:(BOOL)arg1 forAuditToken:(struct { unsigned int x1[8]; })arg2;
- (BOOL)setAccessGranted:(BOOL)arg1 forBundle:(struct __CFBundle { }*)arg2;
- (void)setPrivateQueue:(id)arg1;
- (void)setService:(id)arg1;

@end
