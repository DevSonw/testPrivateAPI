/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAppleServiceSession : IMDServiceSession {
    NSString * _GUID;
    NSString * _serviceName;
}

@property (nonatomic, readonly, retain) NSString *GUID;
@property (nonatomic, readonly, retain) NSArray *aliases;
@property (nonatomic, readonly, retain) NSString *callerID;
@property (nonatomic, readonly, retain) NSString *callerURI;
@property (nonatomic, readonly, retain) IDSAccount *idsAccount;
@property (nonatomic, readonly, retain) NSArray *idsAccounts;
@property (nonatomic, readonly) NSArray *registeredURIs;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly, retain) NSArray *vettedAliases;

- (id)GUID;
- (id)_aliasStringsForIDSAccount:(id)arg1;
- (id)_aliases;
- (id)_aliasesForIDSAccount:(id)arg1;
- (BOOL)_isDeviceRegistered;
- (BOOL)_isDeviceRegisteredForAccount:(id)arg1;
- (void)_updateAccountStatusToUnregistered:(BOOL)arg1 withAccount:(id)arg2;
- (int)_validationStatusForAlias:(id)arg1 onAccount:(id)arg2;
- (void)activeDevicesUpdated;
- (void)addAliases:(id)arg1 account:(id)arg2;
- (id)aliases;
- (void)authenticateAccount:(id)arg1;
- (id)callerID;
- (id)callerURI;
- (id)callerURIForIDSAccount:(id)arg1;
- (id)certForURI:(id)arg1;
- (id)certForURI:(id)arg1 onIDSAccount:(id)arg2;
- (void)clearCallerID;
- (void)clearCallerIDForAccount:(id)arg1;
- (void)dealloc;
- (id)idsAccount;
- (id)idsAccountForURI:(id)arg1;
- (id)idsAccounts;
- (id)imdAccountForIDSAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)loginServiceSessionWithAccount:(id)arg1;
- (void)logoutServiceSessionWithAccount:(id)arg1;
- (void)passwordUpdatedWithAccount:(id)arg1;
- (void)reIdentify;
- (void)refreshRegistration;
- (void)registerAccount:(id)arg1;
- (id)registeredURIs;
- (void)removeAliases:(id)arg1 account:(id)arg2;
- (void)reregister;
- (id)serviceType;
- (void)sessionDidBecomeActive;
- (void)sessionWillBecomeInactiveWithAccount:(id)arg1;
- (void)unregisterAccount:(id)arg1;
- (void)unvalidateAliases:(id)arg1 account:(id)arg2;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3;
- (void)validateAliases:(id)arg1 account:(id)arg2;
- (void)validateProfileWithAccount:(id)arg1;
- (int)validationStatusForAlias:(id)arg1;
- (int)validationStatusForAlias:(id)arg1 onAccount:(id)arg2;
- (id)vettedAliases;

@end
