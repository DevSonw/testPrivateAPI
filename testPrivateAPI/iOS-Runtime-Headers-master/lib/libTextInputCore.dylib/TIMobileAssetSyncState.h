/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIMobileAssetSyncState : NSObject {
    int  _attemptCount;
    NSString * _buildVersion;
    NSDate * _date;
    BOOL  _loadedState;
    int  _status;
}

@property (nonatomic) int attemptCount;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) int status;

+ (id)buildVersionString;

- (int)attemptCount;
- (id)buildVersion;
- (id)date;
- (void)dealloc;
- (void)didSyncToRemoteMetadataWithError:(id)arg1;
- (id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(int)arg3 attemptCount:(int)arg4;
- (void)loadStateIfNecessary;
- (void)saveState;
- (void)setAttemptCount:(int)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setStatus:(int)arg1;
- (BOOL)shouldSyncToRemoteMetadata;
- (int)status;
- (void)updateState;

@end
