/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _sectionIdentifier;
    NSDictionary * _settings;
    NSString * _subSectionIdentifier;
    NSSet * _subSectionSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL notificationsEnabled;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *settings;
@property (nonatomic, readonly) BOOL showsInLockScreen;
@property (nonatomic, readonly) BOOL showsInNotificationCenter;
@property (nonatomic, readonly) BOOL showsMessagePreview;
@property (nonatomic, readonly, copy) NSString *subSectionIdentifier;
@property (nonatomic, readonly, copy) NSSet *subSectionSettings;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)hash;
- (id)initWithNotificationSectionSettings:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIdentifier;
- (id)settings;
- (id)subSectionIdentifier;
- (id)subSectionSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;

- (BOOL)notificationsEnabled;
- (BOOL)showsInLockScreen;
- (BOOL)showsInNotificationCenter;
- (BOOL)showsMessagePreview;

@end
