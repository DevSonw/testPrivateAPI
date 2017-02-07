/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBehavior : NSObject {
    BOOL  _canCreateSources;
    BOOL  _hasTelephonyCapability;
    NSString * _hostReadAuthorizationUsageDescription;
    NSString * _hostWriteAuthorizationUsageDescription;
    BOOL  _isAppleInternalInstall;
    BOOL  _isAppleWatch;
    BOOL  _isCoachingEventLoggingEnabled;
    BOOL  _isCompanionCapable;
    BOOL  _isDeviceSupported;
    BOOL  _isTestingDevice;
    NSNumber * _overridenAreSwimmingSessionsAvailable;
    BOOL  _requestsRemoteAuthorization;
    BOOL  _shouldPruneOldSamples;
}

@property (nonatomic) BOOL areSwimmingSessionsAvailable;
@property (nonatomic) BOOL canCreateSources;
@property (nonatomic, readonly, copy) NSString *currentDeviceClass;
@property (nonatomic, readonly, copy) NSString *currentDeviceDisplayName;
@property (nonatomic, readonly, copy) NSString *currentDeviceManufacturer;
@property (nonatomic, readonly, copy) NSString *currentDeviceName;
@property (nonatomic, readonly, copy) NSString *currentDeviceProductType;
@property (nonatomic, readonly) unsigned long long currentDiskSpaceAvailable;
@property (nonatomic, readonly) NSDictionary *currentDiskUsage;
@property (nonatomic, readonly, copy) NSString *currentInternalDeviceModel;
@property (nonatomic, readonly, copy) NSString *currentOSBuild;
@property (nonatomic, readonly, copy) NSString *currentOSVersion;
@property (nonatomic) BOOL hasTelephonyCapability;
@property (nonatomic, copy) NSString *hostReadAuthorizationUsageDescription;
@property (nonatomic, copy) NSString *hostWriteAuthorizationUsageDescription;
@property (nonatomic) BOOL isAppleInternalInstall;
@property (nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isCoachingEventLoggingEnabled;
@property (nonatomic) BOOL isCompanionCapable;
@property (nonatomic) BOOL isDeviceSupported;
@property (nonatomic) BOOL isTestingDevice;
@property (nonatomic, readonly, copy) NSTimeZone *localTimeZone;
@property (nonatomic) BOOL requestsRemoteAuthorization;
@property (nonatomic) BOOL shouldPruneOldSamples;
@property (nonatomic, readonly) unsigned long long totalDiskCapacity;

+ (BOOL)_hasCompletedBuddy;
+ (BOOL)_hasTelephonyCapability;
+ (BOOL)_isAppleInternalInstall;
+ (BOOL)_isDeviceSupported;
+ (BOOL)_isForceBuddyEnabled;
+ (BOOL)_isSkipBuddyEnabled;
+ (BOOL)_shouldShowBuddy;
+ (BOOL)allPairedWatchesMeetMinimumVersion:(int)arg1;
+ (id)behaviorQueue;
+ (id)currentDeviceClass;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceProductType;
+ (id)currentOSBuild;
+ (id)currentOSVersion;
+ (void)disableForceBuddy;
+ (void)disableSkipBuddy;
+ (BOOL)hasCompletedBuddy;
+ (BOOL)hasPairedWatch;
+ (BOOL)hasTelephonyCapability;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)isCompanionCapable;
+ (BOOL)isDeviceSupported;
+ (BOOL)isRunningStoreDemoMode;
+ (BOOL)isTestingDevice;
+ (int)protocolVersionForNRDevice:(id)arg1;
+ (void)resetSharedBehavior;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (BOOL)shouldShowBuddy;

- (void).cxx_destruct;
- (BOOL)areSwimmingSessionsAvailable;
- (BOOL)canCreateSources;
- (id)currentDeviceClass;
- (id)currentDeviceDisplayName;
- (id)currentDeviceManufacturer;
- (id)currentDeviceName;
- (id)currentDeviceProductType;
- (unsigned long long)currentDiskSpaceAvailable;
- (id)currentDiskUsage;
- (id)currentInternalDeviceModel;
- (id)currentOSBuild;
- (id)currentOSVersion;
- (BOOL)hasTelephonyCapability;
- (id)hostReadAuthorizationUsageDescription;
- (id)hostWriteAuthorizationUsageDescription;
- (id)init;
- (BOOL)isAppleInternalInstall;
- (BOOL)isAppleWatch;
- (BOOL)isCoachingEventLoggingEnabled;
- (BOOL)isCompanionCapable;
- (BOOL)isDeviceSupported;
- (BOOL)isTestingDevice;
- (id)localTimeZone;
- (BOOL)requestsRemoteAuthorization;
- (void)setAreSwimmingSessionsAvailable:(BOOL)arg1;
- (void)setCanCreateSources:(BOOL)arg1;
- (void)setHasTelephonyCapability:(BOOL)arg1;
- (void)setHostReadAuthorizationUsageDescription:(id)arg1;
- (void)setHostWriteAuthorizationUsageDescription:(id)arg1;
- (void)setIsAppleInternalInstall:(BOOL)arg1;
- (void)setIsAppleWatch:(BOOL)arg1;
- (void)setIsCoachingEventLoggingEnabled:(BOOL)arg1;
- (void)setIsCompanionCapable:(BOOL)arg1;
- (void)setIsDeviceSupported:(BOOL)arg1;
- (void)setIsTestingDevice:(BOOL)arg1;
- (void)setRequestsRemoteAuthorization:(BOOL)arg1;
- (void)setShouldPruneOldSamples:(BOOL)arg1;
- (BOOL)shouldPruneOldSamples;
- (unsigned long long)totalDiskCapacity;

@end