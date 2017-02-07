/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate> {
    TSPObjectContext * _context;
    NSObject<OS_dispatch_group> * _pendingEndSaveGroup;
    NSOperationQueue * _presentedItemQueue;
    NSURL * _presentedSupportURL;
    NSRecursiveLock * _presentedSupportURLLock;
    TSPSupportSaveOperationState * _saveOperationState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (copy) NSURL *presentedSupportURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (id)defaultSupportDirectoryURL;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (BOOL)isSupportAtURLValid:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3 documentProperties:(id*)arg4;
+ (id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2;
+ (id)supportDirectoryURLWithDelegate:(id)arg1 isUnique:(BOOL*)arg2;

- (void).cxx_destruct;
- (void)beginSaveWithDocumentUUID:(id)arg1 versionUUID:(id)arg2 originalURL:(id)arg3 updateType:(int)arg4;
- (BOOL)copyOrMoveSupportAtURL:(id)arg1 originalDocumentProperties:(id)arg2 toURL:(id)arg3 isCopying:(BOOL)arg4 newDocumentProperties:(id)arg5 error:(id*)arg6;
- (BOOL)didUpdateDocumentUUIDWithOriginalDocumentProperties:(id)arg1 newDocumentProperties:(id)arg2 preserveOriginalDocumentSupport:(BOOL)arg3 preserveShareUUID:(BOOL)arg4 originalURL:(id)arg5 newURL:(id*)arg6 error:(id*)arg7;
- (BOOL)endSaveWithSuccess:(BOOL)arg1 packageWriter:(id)arg2 newURL:(id*)arg3 writtenPackage:(id*)arg4;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)performReadUsingAccessor:(id /* block */)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)presentedSupportURL;
- (void)removeFilePresenter;
- (void)setPresentedSupportURL:(id)arg1;
- (id)supportURLWithDocumentUUID:(id)arg1;
- (void)updatePresentedItemURL:(id)arg1;
- (BOOL)writeSupportForDocumentUUID:(id)arg1 error:(id*)arg2 writer:(id /* block */)arg3;

@end
