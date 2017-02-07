/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayScreenSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned int  _avgBitrate;
    unsigned int  _avgEstimatedBandwidth;
    unsigned int  _avgUsedBandwidth;
    unsigned int  _clearScreens;
    unsigned int  _configChanges;
    unsigned int  _cpuAvg;
    unsigned int  _duration;
    unsigned int  _forcedRefreshes;
    unsigned int  _framesSent;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int avgBitrate : 1; 
        unsigned int avgEstimatedBandwidth : 1; 
        unsigned int avgUsedBandwidth : 1; 
        unsigned int clearScreens : 1; 
        unsigned int configChanges : 1; 
        unsigned int cpuAvg : 1; 
        unsigned int duration : 1; 
        unsigned int forcedRefreshes : 1; 
        unsigned int framesSent : 1; 
        unsigned int reason : 1; 
        unsigned int resumes : 1; 
        unsigned int retransmitAvg : 1; 
        unsigned int rttAvg : 1; 
        unsigned int suspends : 1; 
        unsigned int unclearScreens : 1; 
        unsigned int wifiChannel : 1; 
        unsigned int wifiRSSI : 1; 
    }  _has;
    int  _reason;
    unsigned int  _resumes;
    unsigned int  _retransmitAvg;
    unsigned int  _rttAvg;
    NSString * _sessionUUID;
    unsigned int  _suspends;
    unsigned long long  _timestamp;
    unsigned int  _unclearScreens;
    unsigned int  _wifiChannel;
    int  _wifiRSSI;
}

@property (nonatomic) unsigned int avgBitrate;
@property (nonatomic) unsigned int avgEstimatedBandwidth;
@property (nonatomic) unsigned int avgUsedBandwidth;
@property (nonatomic) unsigned int clearScreens;
@property (nonatomic) unsigned int configChanges;
@property (nonatomic) unsigned int cpuAvg;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int forcedRefreshes;
@property (nonatomic) unsigned int framesSent;
@property (nonatomic) BOOL hasAvgBitrate;
@property (nonatomic) BOOL hasAvgEstimatedBandwidth;
@property (nonatomic) BOOL hasAvgUsedBandwidth;
@property (nonatomic) BOOL hasClearScreens;
@property (nonatomic) BOOL hasConfigChanges;
@property (nonatomic) BOOL hasCpuAvg;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasForcedRefreshes;
@property (nonatomic) BOOL hasFramesSent;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasResumes;
@property (nonatomic) BOOL hasRetransmitAvg;
@property (nonatomic) BOOL hasRttAvg;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSuspends;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnclearScreens;
@property (nonatomic) BOOL hasWifiChannel;
@property (nonatomic) BOOL hasWifiRSSI;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int resumes;
@property (nonatomic) unsigned int retransmitAvg;
@property (nonatomic) unsigned int rttAvg;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int suspends;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int unclearScreens;
@property (nonatomic) unsigned int wifiChannel;
@property (nonatomic) int wifiRSSI;

- (unsigned int)avgBitrate;
- (unsigned int)avgEstimatedBandwidth;
- (unsigned int)avgUsedBandwidth;
- (unsigned int)clearScreens;
- (unsigned int)configChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cpuAvg;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)forcedRefreshes;
- (unsigned int)framesSent;
- (BOOL)hasAvgBitrate;
- (BOOL)hasAvgEstimatedBandwidth;
- (BOOL)hasAvgUsedBandwidth;
- (BOOL)hasClearScreens;
- (BOOL)hasConfigChanges;
- (BOOL)hasCpuAvg;
- (BOOL)hasDuration;
- (BOOL)hasForcedRefreshes;
- (BOOL)hasFramesSent;
- (BOOL)hasReason;
- (BOOL)hasResumes;
- (BOOL)hasRetransmitAvg;
- (BOOL)hasRttAvg;
- (BOOL)hasSessionUUID;
- (BOOL)hasSuspends;
- (BOOL)hasTimestamp;
- (BOOL)hasUnclearScreens;
- (BOOL)hasWifiChannel;
- (BOOL)hasWifiRSSI;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)reason;
- (unsigned int)resumes;
- (unsigned int)retransmitAvg;
- (unsigned int)rttAvg;
- (id)sessionUUID;
- (void)setAvgBitrate:(unsigned int)arg1;
- (void)setAvgEstimatedBandwidth:(unsigned int)arg1;
- (void)setAvgUsedBandwidth:(unsigned int)arg1;
- (void)setClearScreens:(unsigned int)arg1;
- (void)setConfigChanges:(unsigned int)arg1;
- (void)setCpuAvg:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setForcedRefreshes:(unsigned int)arg1;
- (void)setFramesSent:(unsigned int)arg1;
- (void)setHasAvgBitrate:(BOOL)arg1;
- (void)setHasAvgEstimatedBandwidth:(BOOL)arg1;
- (void)setHasAvgUsedBandwidth:(BOOL)arg1;
- (void)setHasClearScreens:(BOOL)arg1;
- (void)setHasConfigChanges:(BOOL)arg1;
- (void)setHasCpuAvg:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasForcedRefreshes:(BOOL)arg1;
- (void)setHasFramesSent:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasResumes:(BOOL)arg1;
- (void)setHasRetransmitAvg:(BOOL)arg1;
- (void)setHasRttAvg:(BOOL)arg1;
- (void)setHasSuspends:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUnclearScreens:(BOOL)arg1;
- (void)setHasWifiChannel:(BOOL)arg1;
- (void)setHasWifiRSSI:(BOOL)arg1;
- (void)setReason:(int)arg1;
- (void)setResumes:(unsigned int)arg1;
- (void)setRetransmitAvg:(unsigned int)arg1;
- (void)setRttAvg:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSuspends:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnclearScreens:(unsigned int)arg1;
- (void)setWifiChannel:(unsigned int)arg1;
- (void)setWifiRSSI:(int)arg1;
- (unsigned int)suspends;
- (unsigned long long)timestamp;
- (unsigned int)unclearScreens;
- (unsigned int)wifiChannel;
- (int)wifiRSSI;
- (void)writeTo:(id)arg1;

@end
