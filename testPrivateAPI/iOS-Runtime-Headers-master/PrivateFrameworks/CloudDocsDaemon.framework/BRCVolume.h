/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCVolume : NSObject {
    int  _deviceID;
    BOOL  _isCaseSensitive;
    BOOL  _isIgnoringOwnership;
    struct statfs { 
        unsigned int f_bsize; 
        int f_iosize; 
        unsigned long long f_blocks; 
        unsigned long long f_bfree; 
        unsigned long long f_bavail; 
        unsigned long long f_files; 
        unsigned long long f_ffree; 
        struct fsid { 
            int val[2]; 
        } f_fsid; 
        unsigned int f_owner; 
        unsigned int f_type; 
        unsigned int f_flags; 
        unsigned int f_fssubtype; 
        BOOL f_fstypename[16]; 
        BOOL f_mntonname[1024]; 
        BOOL f_mntfromname[1024]; 
        unsigned int f_reserved[8]; 
    }  _stfs;
}

@property (nonatomic, readonly) int deviceID;
@property (nonatomic, readonly) NSNumber *freeSize;
@property (nonatomic, readonly) NSString *fsTypeName;
@property (nonatomic, readonly) BOOL isCaseSensitive;
@property (nonatomic, readonly) BOOL isIgnoringOwnership;
@property (nonatomic, readonly) NSString *mountPath;
@property (nonatomic, readonly) NSNumber *totalSize;

- (id)description;
- (int)deviceID;
- (id)freeSize;
- (id)fsTypeName;
- (BOOL)isCaseSensitive;
- (BOOL)isIgnoringOwnership;
- (id)mountPath;
- (BOOL)setUpForRelPath:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (id)totalSize;

@end
