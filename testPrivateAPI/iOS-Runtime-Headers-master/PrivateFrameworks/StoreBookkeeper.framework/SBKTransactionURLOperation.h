/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKTransactionURLOperation : ISStoreURLOperation {
    SBKRequest * _SBKRequest;
    BOOL  _shouldAuthenticate;
}

@property (nonatomic, retain) SBKRequest *SBKRequest;
@property (nonatomic) BOOL shouldAuthenticate;

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)SBKRequest;
- (id)_init;
- (id)description;
- (id)init;
- (void)setSBKRequest:(id)arg1;
- (void)setShouldAuthenticate:(BOOL)arg1;
- (BOOL)shouldAuthenticate;

@end
