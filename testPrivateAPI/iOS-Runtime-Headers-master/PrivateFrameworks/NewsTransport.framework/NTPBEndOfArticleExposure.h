/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEndOfArticleExposure : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _articleType;
    int  _backendArticleVersion;
    int  _characterCount;
    NSString * _feedId;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int characterCount : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    BOOL  _isUserSubscribedToFeed;
    NSString * _language;
    NSMutableArray * _namedEntities;
    long long  _personalizationTreatmentId;
    int  _publisherArticleVersion;
    NSMutableArray * _recommendedArticleIds;
    NSString * _referencedArticleId;
    NSMutableArray * _referencedRecommendedArticleIds;
    NSString * _sectionHeadlineId;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int articleType;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic) int characterCount;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, readonly) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic, readonly) BOOL hasSectionHeadlineId;
@property (nonatomic, readonly) BOOL hasSurfacedByChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedBySectionId;
@property (nonatomic, readonly) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic, retain) NSMutableArray *recommendedArticleIds;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSMutableArray *referencedRecommendedArticleIds;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;

+ (Class)namedEntitiesType;
+ (Class)recommendedArticleIdType;
+ (Class)referencedRecommendedArticleIdsType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (void)addRecommendedArticleId:(id)arg1;
- (void)addReferencedRecommendedArticleIds:(id)arg1;
- (id)articleId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (int)backendArticleVersion;
- (int)characterCount;
- (void)clearNamedEntities;
- (void)clearRecommendedArticleIds;
- (void)clearReferencedRecommendedArticleIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (id)feedViewExposureId;
- (BOOL)hasArticleId;
- (BOOL)hasArticleType;
- (BOOL)hasBackendArticleVersion;
- (BOOL)hasCharacterCount;
- (BOOL)hasFeedId;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasIsUserSubscribedToFeed;
- (BOOL)hasLanguage;
- (BOOL)hasPersonalizationTreatmentId;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasSectionHeadlineId;
- (BOOL)hasSurfacedByChannelId;
- (BOOL)hasSurfacedBySectionId;
- (BOOL)hasSurfacedByTopicId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserSubscribedToFeed;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned int)arg1;
- (unsigned int)namedEntitiesCount;
- (long long)personalizationTreatmentId;
- (int)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (id)recommendedArticleIdAtIndex:(unsigned int)arg1;
- (id)recommendedArticleIds;
- (unsigned int)recommendedArticleIdsCount;
- (id)referencedArticleId;
- (id)referencedRecommendedArticleIds;
- (id)referencedRecommendedArticleIdsAtIndex:(unsigned int)arg1;
- (unsigned int)referencedRecommendedArticleIdsCount;
- (id)sectionHeadlineId;
- (void)setArticleId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasArticleType:(BOOL)arg1;
- (void)setHasBackendArticleVersion:(BOOL)arg1;
- (void)setHasCharacterCount:(BOOL)arg1;
- (void)setHasIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setHasPersonalizationTreatmentId:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setRecommendedArticleIds:(id)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setReferencedRecommendedArticleIds:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (void)writeTo:(id)arg1;

@end
