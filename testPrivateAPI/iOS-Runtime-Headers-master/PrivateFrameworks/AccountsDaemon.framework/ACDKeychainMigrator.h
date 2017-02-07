/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_keychainItemFromAttributes:(id)arg1;
- (id)_keychainItemFromAttributesArray:(id)arg1;
- (id)_keychainItemsForUsername:(id)arg1 accountTypeIdentifiers:(id)arg2;
- (void)_validateKeychainItemClass:(id)arg1;
- (id)allKeychainItems;
- (id)init;
- (void)migrateAllKeychainItems;
- (BOOL)migrateKeychainItem:(id)arg1;

@end
