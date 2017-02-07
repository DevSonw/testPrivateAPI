/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal * _internal;
}

@property (nonatomic) BOOL _useSystemKeychain;
@property (readonly, copy) NSDictionary *allCredentials;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)sharedCredentialStorage;

- (struct _CFURLCredentialStorage { }*)_CFURLCredentialStorage;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { }*)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (BOOL)_useSystemKeychain;
- (id)allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)dealloc;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)set_useSystemKeychain:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;

@end
