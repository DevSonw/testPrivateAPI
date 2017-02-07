/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetAuthTokensForPutURLRequest : CKDURLRequest {
    NSMapTable * _MMCSItemsByRecordIDs;
    NSMapTable * _recordIDsByRequestIDs;
    BOOL  _useEncryption;
}

@property (nonatomic, readonly) NSMapTable *MMCSItemsByRecordIDs;
@property (nonatomic, retain) NSMapTable *recordIDsByRequestIDs;
@property (nonatomic) BOOL useEncryption;

- (void).cxx_destruct;
- (id)MMCSItemsByRecordIDs;
- (id)initWithMMCSItems:(id)arg1;
- (int)operationType;
- (id)recordIDsByRequestIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setRecordIDsByRequestIDs:(id)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (BOOL)useEncryption;

@end
