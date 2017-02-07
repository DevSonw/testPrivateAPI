/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailAccountProxy : NSObject {
    NSDictionary * _properties;
}

@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSString *firstEmailAddress;
@property (nonatomic, readonly) NSArray *fromEmailAddresses;
@property (nonatomic, readonly) NSArray *fromEmailAddressesIncludingDisabled;
@property (nonatomic, readonly) NSString *fullUserName;
@property (nonatomic, readonly) BOOL isDefaultDeliveryAccount;
@property (nonatomic, readonly) BOOL isManaged;
@property (nonatomic, readonly) id mailAccount;
@property (nonatomic, readonly) BOOL restrictsRepliesAndForwards;
@property (nonatomic, readonly) BOOL supportsMailDrop;
@property (nonatomic, readonly) BOOL supportsThreadOperations;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *username;

- (id)_emailAddressesAndAliases;
- (id)_initWithProperties:(id)arg1;
- (BOOL)_isActive;
- (BOOL)_isRestricted;
- (void)dealloc;
- (id)emailAddresses;
- (id)firstEmailAddress;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fullUserName;
- (BOOL)isDefaultDeliveryAccount;
- (BOOL)isManaged;
- (id)mailAccount;
- (BOOL)restrictsRepliesAndForwards;
- (BOOL)supportsMailDrop;
- (BOOL)supportsThreadOperations;
- (id)uniqueID;
- (id)username;

@end