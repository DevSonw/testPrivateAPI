/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDefaults : NSObject {
    BOOL  _appleInternal;
    BOOL  _hasPersistentPreferences;
    BOOL  _hasServer;
    NSURL * _iconsGroupContainerURL;
    BOOL  _inEducationMode;
    BOOL  _inSyncBubble;
    BOOL  _inXCTestRigInsecure;
    BOOL  _isServer;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSURL * _systemContainerURL;
    NSURL * _systemGroupContainerURL;
    NSURL * _userContainerURL;
}

@property (getter=isAppleInternal, nonatomic, readonly) BOOL appleInternal;
@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) BOOL hasPersistentPreferences;
@property BOOL hasServer;
@property (readonly) NSURL *iconCacheFolderURL;
@property (readonly) NSURL *iconCacheSystemVersionFileURL;
@property (readonly) NSURL *iconsGroupContainerURL;
@property (readonly) NSURL *identifiersFileURL;
@property (getter=isInEducationMode, readonly) BOOL inEducationMode;
@property (getter=isInSyncBubble, readonly) BOOL inSyncBubble;
@property (getter=isInXCTestRigInsecure, nonatomic, readonly) BOOL inXCTestRigInsecure;
@property BOOL isServer;
@property (readonly) BOOL isSimulator;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *securePeferencesFileURL;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *userContainerURL;

+ (BOOL)appleInternal;
+ (BOOL)hasPersistentPreferences;
+ (BOOL)hasServer;
+ (id)iconsGroupContainerURL;
+ (BOOL)inSyncBubble;
+ (BOOL)inXCTestRigInsecure;
+ (id)sharedInstance;
+ (id)systemContainerURL;
+ (id)systemGroupContainerURL;
+ (id)userContainerURL;

- (unsigned int)currentSchemaVersion;
- (id)darwinNotificationNameForCurrentUser:(id)arg1;
- (double)databaseSaveInterval;
- (double)databaseSaveLatency;
- (id)databaseStoreFileURL;
- (id)databaseUpdateNotificationName;
- (id)dbSentinelFileURL;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)hasPersistentPreferences;
- (BOOL)hasServer;
- (id)iconCacheFolderURL;
- (id)iconCacheSystemVersionFileURL;
- (id)iconsGroupContainerURL;
- (id)identifiersFileURL;
- (id)init;
- (BOOL)isAppleInternal;
- (BOOL)isInEducationMode;
- (BOOL)isInSyncBubble;
- (BOOL)isInXCTestRigInsecure;
- (BOOL)isServer;
- (BOOL)isSimulator;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesFileURL;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
- (id)queriedSchemesMapFileURL;
- (id)securePeferencesFileURL;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
- (void)setHasServer:(BOOL)arg1;
- (void)setIsServer:(BOOL)arg1;
- (id)systemContainerURL;
- (id)systemGroupContainerURL;
- (id)userContainerURL;
- (id)userPreferencesURL;

@end
