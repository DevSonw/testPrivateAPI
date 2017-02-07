/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkServiceProxyRequestStatistics : PBCodable <NSCopying> {
    unsigned int  _directConnectionCount;
    unsigned int  _directConnectionFailedCount;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _directConnectionFirstByteBuckets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _directConnectionLastByteBuckets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _firstByteBuckets;
    NSString * _firstPartyServiceName;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int directConnectionCount : 1; 
        unsigned int directConnectionFailedCount : 1; 
        unsigned int interfaceType : 1; 
        unsigned int protocolType : 1; 
        unsigned int requestCount : 1; 
        unsigned int requestFailedCount : 1; 
    }  _has;
    int  _interfaceType;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _lastByteBuckets;
    int  _protocolType;
    unsigned int  _requestCount;
    unsigned int  _requestFailedCount;
    unsigned long long  _timestamp;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _udpRttBuckets;
}

@property (nonatomic) unsigned int directConnectionCount;
@property (nonatomic) unsigned int directConnectionFailedCount;
@property (nonatomic, readonly) unsigned int*directConnectionFirstByteBuckets;
@property (nonatomic, readonly) unsigned int directConnectionFirstByteBucketsCount;
@property (nonatomic, readonly) unsigned int*directConnectionLastByteBuckets;
@property (nonatomic, readonly) unsigned int directConnectionLastByteBucketsCount;
@property (nonatomic, readonly) unsigned int*firstByteBuckets;
@property (nonatomic, readonly) unsigned int firstByteBucketsCount;
@property (nonatomic, retain) NSString *firstPartyServiceName;
@property (nonatomic) BOOL hasDirectConnectionCount;
@property (nonatomic) BOOL hasDirectConnectionFailedCount;
@property (nonatomic, readonly) BOOL hasFirstPartyServiceName;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasProtocolType;
@property (nonatomic) BOOL hasRequestCount;
@property (nonatomic) BOOL hasRequestFailedCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int interfaceType;
@property (nonatomic, readonly) unsigned int*lastByteBuckets;
@property (nonatomic, readonly) unsigned int lastByteBucketsCount;
@property (nonatomic) int protocolType;
@property (nonatomic) unsigned int requestCount;
@property (nonatomic) unsigned int requestFailedCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned int*udpRttBuckets;
@property (nonatomic, readonly) unsigned int udpRttBucketsCount;

- (int)StringAsInterfaceType:(id)arg1;
- (int)StringAsProtocolType:(id)arg1;
- (void)addDirectConnectionFirstByteBuckets:(unsigned int)arg1;
- (void)addDirectConnectionLastByteBuckets:(unsigned int)arg1;
- (void)addFirstByteBuckets:(unsigned int)arg1;
- (void)addLastByteBuckets:(unsigned int)arg1;
- (void)addUdpRttBuckets:(unsigned int)arg1;
- (void)clearDirectConnectionFirstByteBuckets;
- (void)clearDirectConnectionLastByteBuckets;
- (void)clearFirstByteBuckets;
- (void)clearLastByteBuckets;
- (void)clearUdpRttBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)directConnectionCount;
- (unsigned int)directConnectionFailedCount;
- (unsigned int*)directConnectionFirstByteBuckets;
- (unsigned int)directConnectionFirstByteBucketsAtIndex:(unsigned int)arg1;
- (unsigned int)directConnectionFirstByteBucketsCount;
- (unsigned int*)directConnectionLastByteBuckets;
- (unsigned int)directConnectionLastByteBucketsAtIndex:(unsigned int)arg1;
- (unsigned int)directConnectionLastByteBucketsCount;
- (unsigned int*)firstByteBuckets;
- (unsigned int)firstByteBucketsAtIndex:(unsigned int)arg1;
- (unsigned int)firstByteBucketsCount;
- (id)firstPartyServiceName;
- (BOOL)hasDirectConnectionCount;
- (BOOL)hasDirectConnectionFailedCount;
- (BOOL)hasFirstPartyServiceName;
- (BOOL)hasInterfaceType;
- (BOOL)hasProtocolType;
- (BOOL)hasRequestCount;
- (BOOL)hasRequestFailedCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int*)lastByteBuckets;
- (unsigned int)lastByteBucketsAtIndex:(unsigned int)arg1;
- (unsigned int)lastByteBucketsCount;
- (void)mergeFrom:(id)arg1;
- (int)protocolType;
- (id)protocolTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestCount;
- (unsigned int)requestFailedCount;
- (void)setDirectConnectionCount:(unsigned int)arg1;
- (void)setDirectConnectionFailedCount:(unsigned int)arg1;
- (void)setDirectConnectionFirstByteBuckets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setDirectConnectionLastByteBuckets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setFirstByteBuckets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setFirstPartyServiceName:(id)arg1;
- (void)setHasDirectConnectionCount:(BOOL)arg1;
- (void)setHasDirectConnectionFailedCount:(BOOL)arg1;
- (void)setHasInterfaceType:(BOOL)arg1;
- (void)setHasProtocolType:(BOOL)arg1;
- (void)setHasRequestCount:(BOOL)arg1;
- (void)setHasRequestFailedCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setLastByteBuckets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setProtocolType:(int)arg1;
- (void)setRequestCount:(unsigned int)arg1;
- (void)setRequestFailedCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUdpRttBuckets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned long long)timestamp;
- (unsigned int*)udpRttBuckets;
- (unsigned int)udpRttBucketsAtIndex:(unsigned int)arg1;
- (unsigned int)udpRttBucketsCount;
- (void)writeTo:(id)arg1;

@end
