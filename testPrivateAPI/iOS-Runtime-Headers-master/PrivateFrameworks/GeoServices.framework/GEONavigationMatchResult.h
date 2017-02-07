/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationMatchResult : NSObject {
    GEONavigationMatchInfo * _detailedMatchInfo;
    BOOL  _locationUnreliable;
    GEOLocation * _rawLocation;
    GEORoadMatch * _roadMatch;
    GEORouteMatch * _routeMatch;
    unsigned int  _type;
}

@property (nonatomic, readonly) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, readonly) BOOL locationUnreliable;
@property (nonatomic, readonly) GEOLocation *rawLocation;
@property (nonatomic, readonly) GEORoadMatch *roadMatch;
@property (nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) unsigned int type;

+ (id)matchResultWithRawLocation:(id)arg1;
+ (id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2;
+ (id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2;

- (void)dealloc;
- (id)detailedMatchInfo;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRoadMatch:(id)arg1 location:(id)arg2;
- (id)initWithRouteMatch:(id)arg1 location:(id)arg2;
- (BOOL)locationUnreliable;
- (id)rawLocation;
- (id)roadMatch;
- (id)routeMatch;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setLocationUnreliable:(BOOL)arg1;
- (void)setRouteMatch:(id)arg1;
- (unsigned int)type;

@end
