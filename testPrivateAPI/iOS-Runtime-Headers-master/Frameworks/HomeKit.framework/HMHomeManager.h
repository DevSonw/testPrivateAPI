/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeManager : NSObject <HMFMessageReceiver, HMMutableApplicationData> {
    BOOL  _accessAllowedWhenLocked;
    HMApplicationData * _applicationData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMHome * _currentHome;
    HMThreadSafeMutableArrayCollection * _currentHomes;
    BOOL  _dataSyncInProgress;
    unsigned int  _dataSyncState;
    <HMHomeManagerDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    BOOL  _didUpdateHomes;
    BOOL  _fetchInProgress;
    unsigned int  _generationCounter;
    NSString * _homeCache;
    NSString * _homeCacheDir;
    HMThreadSafeMutableArrayCollection * _homeInvitations;
    _HMLocationHandler * _locationHandler;
    NSOperationQueue * _mergeOperationQueue;
    unsigned int  _metadataVersion;
    HMFMessageDispatcher * _msgDispatcher;
    HMPendingRequests * _pendingRequests;
    HMHome * _primaryHome;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    BOOL  _residentEnabledForThisDevice;
    unsigned int  _residentProvisioningStatus;
    BOOL  _thisDeviceResidentCapable;
    NSUUID * _uuid;
    BOOL  _viewServiceActive;
    HMXpcClient * _xpcClient;
}

@property (getter=isAccessAllowedWhenLocked) BOOL accessAllowedWhenLocked;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMHome *currentHome;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentHomes;
@property (getter=isDataSyncInProgress, nonatomic) BOOL dataSyncInProgress;
@property (nonatomic) unsigned int dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMHomeManagerDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateHomes;
@property (nonatomic) BOOL fetchInProgress;
@property (nonatomic) unsigned int generationCounter;
@property (readonly) unsigned int hash;
@property (retain) NSString *homeCache;
@property (retain) NSString *homeCacheDir;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *homeInvitations;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (nonatomic, readonly) _HMLocationHandler *locationHandler;
@property (nonatomic, retain) NSOperationQueue *mergeOperationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic) unsigned int metadataVersion;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMPendingRequests *pendingRequests;
@property (nonatomic, retain) HMHome *primaryHome;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isResidentEnabledForThisDevice) BOOL residentEnabledForThisDevice;
@property unsigned int residentProvisioningStatus;
@property (readonly) Class superclass;
@property (getter=isThisDeviceResidentCapable) BOOL thisDeviceResidentCapable;
@property (nonatomic, retain) NSUUID *uuid;
@property (getter=isViewServiceActive, nonatomic) BOOL viewServiceActive;
@property (nonatomic, retain) HMXpcClient *xpcClient;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (BOOL)dataSyncInProgressFromDataSyncState:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_acceptInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addHomeWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_checkEventValidity:(id)arg1 completion:(id /* block */)arg2;
- (void)_declineInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_deleteDuetEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)_determineCacheDirectory;
- (void)_determineCacheFile;
- (void)_dumpCache:(id)arg1;
- (void)_dumpState:(id)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (void)_eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchHomeConfigurationWithCache:(BOOL)arg1 refreshRequested:(BOOL)arg2;
- (void)_fetchHomeConfigurationWithPrivacyCheckWithCache:(BOOL)arg1 refreshRequested:(BOOL)arg2;
- (void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleCurrentHomeChangedNotification:(id)arg1;
- (void)_handleDataStateChangedChangedNotification:(id)arg1;
- (void)_handleHomeAddedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleResidentDeviceCapableUpdatedNotification:(id)arg1;
- (void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg1;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (BOOL)_isValidCachedHomeConfiguration:(id)arg1;
- (void)_logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(id /* block */)arg5;
- (void)_logControl:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_mergeCurrentAppDataWithNewAppData:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomesWithNewHomes:(id)arg1 newPrimaryHome:(id)arg2 newCurrentHome:(id)arg3 newInvitations:(id)arg4 newAppData:(id)arg5 refreshRequested:(BOOL)arg6;
- (void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)arg1;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_notifyResidentProvisioningStatus:(unsigned int)arg1;
- (void)_pingDeviceWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_primaryAccountDidChange:(id)arg1 modified:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)arg1;
- (id)_privateDelegate;
- (void)_processHomeConfigurationRequest:(id)arg1 refreshRequested:(BOOL)arg2;
- (void)_queryHomeKitUsageStateWithCompletionHandler:(id /* block */)arg1;
- (void)_queryMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queryVersionWithCompletionHandler:(id /* block */)arg1;
- (void)_queryiCloudSwitchStateWithCompletionHandler:(id /* block */)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeCacheFile;
- (void)_removeHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setResidentProvisioningStatus:(unsigned int)arg1;
- (void)_shouldDisplayiCloudSwitchWithCompletionHandler:(id /* block */)arg1;
- (void)_start;
- (void)_updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAppData:(id)arg1;
- (void)_updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateCurrentHome:(id)arg1;
- (void)_updateDataSyncState:(id)arg1;
- (void)_updateHomes:(id)arg1;
- (void)_updateInvitation:(id)arg1 invitationState:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)_updatePrimaryHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateiCloudSwitchState:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)addHomeWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationData;
- (void)checkEventValidity:(id)arg1 completion:(id /* block */)arg2;
- (id)clientQueue;
- (id)currentHome;
- (id)currentHomes;
- (unsigned int)dataSyncState;
- (void)dealloc;
- (id)delegate;
- (id)delegateCaller;
- (void)deleteDuetEvents:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)didUpdateHomes;
- (void)dumpState:(id)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (void)eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)eraseHomeDataWithCompletionHandler:(id /* block */)arg1;
- (BOOL)fetchInProgress;
- (unsigned int)generationCounter;
- (id)homeCache;
- (id)homeCacheDir;
- (id)homeInvitations;
- (id)homes;
- (id)incomingHomeInvitations;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)isAccessAllowedWhenLocked;
- (BOOL)isDataSyncInProgress;
- (BOOL)isResidentEnabledForThisDevice;
- (BOOL)isThisDeviceResidentCapable;
- (BOOL)isViewServiceActive;
- (id)locationHandler;
- (void)logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(id /* block */)arg5;
- (void)logControl:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mergeOperationQueue;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned int)metadataVersion;
- (id)msgDispatcher;
- (void)notifyResidentCapableUpdated:(BOOL)arg1;
- (void)notifyResidentEnabledUpdated:(BOOL)arg1;
- (id)pendingRequests;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)primaryAccountWasDeletedWithCompletionHandler:(id /* block */)arg1;
- (void)primaryAccountWasModified:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)primaryHome;
- (id)propertyQueue;
- (void)queryHomeKitUsageStateWithCompletionHandler:(id /* block */)arg1;
- (void)queryMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryVersionWithCompletionHandler:(id /* block */)arg1;
- (void)queryiCloudSwitchStateWithCompletionHandler:(id /* block */)arg1;
- (void)removeHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetConfiguration:(BOOL)arg1 withoutPopup:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)residentProvisioningStatus;
- (void)setAccessAllowedWhenLocked:(BOOL)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setCurrentHome:(id)arg1;
- (void)setCurrentHomes:(id)arg1;
- (void)setDataSyncInProgress:(BOOL)arg1;
- (void)setDataSyncState:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setDidUpdateHomes:(BOOL)arg1;
- (void)setFetchInProgress:(BOOL)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setHomeCache:(id)arg1;
- (void)setHomeCacheDir:(id)arg1;
- (void)setHomeInvitations:(id)arg1;
- (void)setMergeOperationQueue:(id)arg1;
- (void)setMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setMetadataVersion:(unsigned int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrimaryHome:(id)arg1;
- (void)setResidentEnabledForThisDevice:(BOOL)arg1;
- (void)setResidentProvisioningStatus:(unsigned int)arg1;
- (void)setThisDeviceResidentCapable:(BOOL)arg1;
- (void)setUuid:(id)arg1;
- (void)setViewServiceActive:(BOOL)arg1;
- (void)setXpcClient:(id)arg1;
- (void)shouldDisplayiCloudSwitchWithCompletionHandler:(id /* block */)arg1;
- (void)updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)updateiCloudSwitchState:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)xpcClient;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (BOOL)hf_hasSeenOnboardingWelcomeView;
- (id)hf_homeWithIdentifier:(id)arg1;
- (id)hf_orderedHomes;
- (id)hf_orderedHomesList;
- (id)hf_setHasSeenOnboardingWelcomeView:(BOOL)arg1;
- (id)hf_setOrderedHomes:(id)arg1;

@end