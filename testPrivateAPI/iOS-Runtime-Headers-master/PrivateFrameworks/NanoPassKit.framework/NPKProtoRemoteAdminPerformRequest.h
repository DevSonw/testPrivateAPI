/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying> {
    NSString * _command;
    NSData * _infoDictionary;
    NSString * _seid;
    NSData * _url;
}

@property (nonatomic, retain) NSString *command;
@property (nonatomic, readonly) BOOL hasInfoDictionary;
@property (nonatomic, retain) NSData *infoDictionary;
@property (nonatomic, retain) NSString *seid;
@property (nonatomic, retain) NSData *url;

- (void).cxx_destruct;
- (id)command;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInfoDictionary;
- (unsigned int)hash;
- (id)infoDictionary;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)seid;
- (void)setCommand:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setSeid:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
