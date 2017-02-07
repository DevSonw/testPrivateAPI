/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryReachabilityTuple : NSObject {
    NSString * _accessoryUUID;
    BOOL  _currentReachability;
    BOOL  _previouslySentReachability;
}

@property (nonatomic, retain) NSString *accessoryUUID;
@property (nonatomic) BOOL currentReachability;
@property (nonatomic) BOOL previouslySentReachability;

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (BOOL)currentReachability;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)previouslySentReachability;
- (void)setAccessoryUUID:(id)arg1;
- (void)setCurrentReachability:(BOOL)arg1;
- (void)setPreviouslySentReachability:(BOOL)arg1;

@end
