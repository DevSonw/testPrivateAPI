/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate> {
    NSMutableArray * _archivers;
}

+ (id)sharedInstance;

- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)dealloc;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)init;

@end
