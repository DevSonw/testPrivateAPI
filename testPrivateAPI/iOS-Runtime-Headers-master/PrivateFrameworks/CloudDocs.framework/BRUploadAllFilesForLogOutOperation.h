/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {
    NSMutableDictionary * _errorsByContainerID;
    NSMutableArray * _hiddenContainersWithError;
    NSOperationQueue * _opQueue;
    BRGlobalProgressProxy * _progress;
    BOOL  _shouldKeepDataLocal;
    id /* block */  _uploadAllFilesCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) BRGlobalProgressProxy *progress;
@property BOOL shouldKeepDataLocal;
@property (readonly) Class superclass;
@property (copy) id /* block */ uploadAllFilesCompletionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (void)evictAllFilesInGroup:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (void)main;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)setShouldKeepDataLocal:(BOOL)arg1;
- (void)setUploadAllFilesCompletionBlock:(id /* block */)arg1;
- (BOOL)shouldKeepDataLocal;
- (id /* block */)uploadAllFilesCompletionBlock;

@end
