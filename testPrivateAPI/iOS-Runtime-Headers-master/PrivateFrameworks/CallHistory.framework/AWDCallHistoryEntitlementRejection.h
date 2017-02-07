/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int pid : 1; 
    }  _has;
    unsigned int  _pid;
    NSString * _procname;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasPid;
@property (nonatomic, readonly) BOOL hasProcname;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int pid;
@property (nonatomic, retain) NSString *procname;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPid;
- (BOOL)hasProcname;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pid;
- (id)procname;
- (BOOL)readFrom:(id)arg1;
- (void)setHasPid:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPid:(unsigned int)arg1;
- (void)setProcname:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
