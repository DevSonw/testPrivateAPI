/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularLteComponentCarrierInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int pccBandwidth : 1; 
        unsigned int pccEarfcn : 1; 
        unsigned int scc0Bandwidth : 1; 
        unsigned int scc0Earfcn : 1; 
        unsigned int scc1Bandwidth : 1; 
        unsigned int scc1Earfcn : 1; 
    }  _has;
    unsigned int  _pccBandwidth;
    unsigned int  _pccEarfcn;
    unsigned int  _scc0Bandwidth;
    unsigned int  _scc0Earfcn;
    unsigned int  _scc1Bandwidth;
    unsigned int  _scc1Earfcn;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasPccBandwidth;
@property (nonatomic) BOOL hasPccEarfcn;
@property (nonatomic) BOOL hasScc0Bandwidth;
@property (nonatomic) BOOL hasScc0Earfcn;
@property (nonatomic) BOOL hasScc1Bandwidth;
@property (nonatomic) BOOL hasScc1Earfcn;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int pccBandwidth;
@property (nonatomic) unsigned int pccEarfcn;
@property (nonatomic) unsigned int scc0Bandwidth;
@property (nonatomic) unsigned int scc0Earfcn;
@property (nonatomic) unsigned int scc1Bandwidth;
@property (nonatomic) unsigned int scc1Earfcn;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPccBandwidth;
- (BOOL)hasPccEarfcn;
- (BOOL)hasScc0Bandwidth;
- (BOOL)hasScc0Earfcn;
- (BOOL)hasScc1Bandwidth;
- (BOOL)hasScc1Earfcn;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pccBandwidth;
- (unsigned int)pccEarfcn;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)scc0Bandwidth;
- (unsigned int)scc0Earfcn;
- (unsigned int)scc1Bandwidth;
- (unsigned int)scc1Earfcn;
- (void)setHasPccBandwidth:(BOOL)arg1;
- (void)setHasPccEarfcn:(BOOL)arg1;
- (void)setHasScc0Bandwidth:(BOOL)arg1;
- (void)setHasScc0Earfcn:(BOOL)arg1;
- (void)setHasScc1Bandwidth:(BOOL)arg1;
- (void)setHasScc1Earfcn:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPccBandwidth:(unsigned int)arg1;
- (void)setPccEarfcn:(unsigned int)arg1;
- (void)setScc0Bandwidth:(unsigned int)arg1;
- (void)setScc0Earfcn:(unsigned int)arg1;
- (void)setScc1Bandwidth:(unsigned int)arg1;
- (void)setScc1Earfcn:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
