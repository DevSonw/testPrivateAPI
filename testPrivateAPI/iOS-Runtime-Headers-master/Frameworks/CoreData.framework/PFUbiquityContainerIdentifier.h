/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString * _localPeerID;
    NSURL * _presentedItemURL;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
    BOOL  _usedExistingUUIDFile;
    PFUbiquityLocation * _uuidFileLocation;
    NSString * _uuidString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL usedExistingUUIDFile;
@property (nonatomic, readonly) PFUbiquityLocation *uuidFileLocation;
@property (nonatomic, readonly) NSString *uuidString;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)identifyContainer:(id*)arg1;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2;
- (void)setUUIDStringFromLocation:(id)arg1;
- (BOOL)usedExistingUUIDFile;
- (id)uuidFileLocation;
- (id)uuidString;
- (BOOL)writeToDisk:(id*)arg1;

@end