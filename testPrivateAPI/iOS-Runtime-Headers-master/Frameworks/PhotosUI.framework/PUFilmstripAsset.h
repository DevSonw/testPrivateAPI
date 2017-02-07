/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripAsset : NSObject <PUDisplayAsset> {
    AVAsset * __asset;
    BOOL  __isSourceTimeAccurate;
    double  __normalizedTime;
    unsigned int  _pixelHeight;
    unsigned int  _pixelWidth;
    double  _sourceTime;
}

@property (setter=_setAsset:, nonatomic) AVAsset *_asset;
@property (setter=_setSourceTimeAccurate:, nonatomic) BOOL _isSourceTimeAccurate;
@property (setter=_setNormalizedTime:, nonatomic) double _normalizedTime;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) BOOL canPlayPhotoIris;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) unsigned int fullsizeDataFormat;
@property (nonatomic, readonly) BOOL hasPhotoColorAdjustments;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isPhotoIrisPlaceholder;
@property (nonatomic, readonly) BOOL isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic) double sourceTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (id)_asset;
- (BOOL)_isSourceTimeAccurate;
- (double)_normalizedTime;
- (void)_setAsset:(id)arg1;
- (void)_setNormalizedTime:(double)arg1;
- (void)_setSourceTimeAccurate:(BOOL)arg1;
- (double)aspectRatio;
- (BOOL)canPlayPhotoIris;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (unsigned int)fullsizeDataFormat;
- (BOOL)hasPhotoColorAdjustments;
- (unsigned int)hash;
- (id)init;
- (id)initWithNormalizedTime:(double)arg1 asset:(id)arg2;
- (unsigned int)isContentEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFavorite;
- (BOOL)isPhotoIrisPlaceholder;
- (BOOL)isTemporaryPlaceholder;
- (void)loadSourceTimeWithCompletionHandler:(id /* block */)arg1;
- (id)localizedGeoDescription;
- (id)location;
- (unsigned int)mediaType;
- (id)modificationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (void)setSourceTime:(double)arg1;
- (double)sourceTime;
- (id)uuid;

@end
