/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
    NSString * _algorithmName;
    unsigned int  _countOfGrowthActions;
    double  _currentKeepAliveInterval;
    int  _growthStage;
    double  _highWatermark;
    double  _initialGrowthStageHighWatermark;
    double  _initialGrowthStageLastAttempt;
    double  _lastKeepAliveInterval;
    NSDate * _leaveSteadyStateDate;
    NSString * _loggingIdentifier;
    double  _maximumKeepAliveInterval;
    double  _minimumKeepAliveInterval;
}

@property (nonatomic, readonly, copy) NSDictionary *cacheInfo;
@property (nonatomic, readonly) unsigned int countOfGrowthActions;
@property (nonatomic, readonly) double currentKeepAliveInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *loggingIdentifier;
@property (nonatomic) double maximumKeepAliveInterval;
@property (nonatomic) double minimumKeepAliveInterval;
@property (readonly) Class superclass;

+ (void)_loadDefaultValue:(double*)arg1 forKey:(struct __CFString { }*)arg2;
+ (void)_loadDefaults;

- (void)_processBackoffAction:(int)arg1;
- (void)_processInitialGrowthAction:(int)arg1;
- (void)_processRefinedGrowthAction:(int)arg1;
- (void)_processSteadyStateAction:(int)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2;
- (void)_setCurrentKeepAliveInterval:(double)arg1;
- (double)_steadyStateTimeout;
- (id)_stringForAction:(int)arg1;
- (id)_stringForStage:(int)arg1;
- (id)cacheInfo;
- (unsigned int)countOfGrowthActions;
- (double)currentKeepAliveInterval;
- (void)dealloc;
- (id)description;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
- (id)loggingIdentifier;
- (double)maximumKeepAliveInterval;
- (double)minimumKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (BOOL)useIntervalIfImprovement:(double)arg1;

@end
