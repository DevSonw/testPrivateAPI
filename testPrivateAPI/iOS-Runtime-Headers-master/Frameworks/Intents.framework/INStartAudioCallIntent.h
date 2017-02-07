/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (nonatomic) int audioRoute;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destinationType;
@property (readonly) unsigned int hash;
@property (nonatomic) int preferredCallProvider;
@property (readonly) Class superclass;
@property (setter=setTTYType:, nonatomic) int ttyType;
@property (nonatomic, readonly) BOOL useSpeaker;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (int)audioRoute;
- (id)contacts;
- (int)destinationType;
- (id)initWithContacts:(id)arg1;
- (int)preferredCallProvider;
- (void)setAudioRoute:(int)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setTTYType:(int)arg1;
- (void)setUseSpeaker:(BOOL)arg1;
- (int)ttyType;
- (BOOL)useSpeaker;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (int)_cdInteractionMechanism;
- (id)_cdRecipients;

@end
