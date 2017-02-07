/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRequest : BBBulletin {
    unsigned int  _expirationEvents;
}

@property (nonatomic, retain) BBAccessoryIcon *accessoryIconMask;
@property (nonatomic, copy) BBAction *acknowledgeAction;
@property (nonatomic, copy) NSArray *additionalAttachments;
@property (nonatomic) int addressBookRecordID;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, copy) BBAction *alternateAction;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, copy) NSString *categoryID;
@property (nonatomic) BOOL clearable;
@property (nonatomic) unsigned int counter;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) int dateFormatStyle;
@property (nonatomic) BOOL dateIsAllDay;
@property (nonatomic, copy) BBAction *defaultAction;
@property (nonatomic, copy) BBAction *dismissAction;
@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned int expirationEvents;
@property (nonatomic, copy) BBAction *expireAction;
@property (nonatomic) BOOL expiresOnPublisherDeath;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic, retain) BBSectionIcon *icon;
@property (nonatomic) BOOL ignoresQuietMode;
@property (nonatomic, copy) NSArray *intentIDs;
@property (getter=isLoading, nonatomic) BOOL loading;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) BBContent *modalAlertContent;
@property (nonatomic, copy) NSArray *peopleIDs;
@property (nonatomic, copy) BBAttachmentMetadata *primaryAttachment;
@property (nonatomic) int primaryAttachmentType;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) BBAction *raiseAction;
@property (nonatomic) unsigned int realertCount;
@property (nonatomic, retain) NSDate *recencyDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic) int sectionSubtype;
@property (nonatomic) BOOL showsUnreadIndicator;
@property (nonatomic, copy) BBAction *silenceAction;
@property (nonatomic, copy) BBAction *snoozeAction;
@property (nonatomic, retain) BBSound *sound;
@property (nonatomic, retain) BBContent *starkBannerContent;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *supplementaryActions;
@property (nonatomic) BOOL tentative;
@property (nonatomic, copy) NSString *threadID;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) BOOL turnsOnDisplay;
@property (nonatomic) BOOL usesExternalSync;
@property (nonatomic) BOOL wantsFullscreenPresentation;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

- (void)_updateSupplementaryAction:(id)arg1;
- (void)addAlertSuppressionAppID:(id)arg1;
- (void)addAttachmentOfType:(int)arg1;
- (void)addButton:(id)arg1;
- (unsigned int)expirationEvents;
- (void)generateBulletinID;
- (void)generateNewBulletinID;
- (BOOL)hasContentModificationsRelativeTo:(id)arg1;
- (void)publish;
- (void)publish:(BOOL)arg1;
- (unsigned int)realertCount;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setExpirationEvents:(unsigned int)arg1;
- (void)setPrimaryAttachmentType:(int)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (void)setShowsUnreadIndicator:(BOOL)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setSupplementaryActions:(id)arg1 forLayout:(int)arg2;
- (void)setTentative:(BOOL)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (BOOL)showsUnreadIndicator;
- (BOOL)tentative;
- (void)withdraw;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (BOOL)existsInSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)description;

@end
