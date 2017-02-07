/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAsset : PHObject <CLSInvestigationItem, CLSSnapshotSupportProtocol, PUEditableAsset, PXDisplayAsset, PXLayoutItemInput, PXPlacesGeotaggable, _PLImageLoadingAsset> {
    NSDate * _adjustmentTimestamp;
    BOOL  _assetDescriptionWasSet;
    int  _avalanchePickType;
    NSString * _burstIdentifier;
    CLLocation * _cachedLocation;
    NSString * _cloudAssetGUID;
    BOOL  _cloudIsDeletable;
    int  _cloudPlaceholderKind;
    BOOL  _complete;
    NSDate * _creationDate;
    double  _curationScore;
    NSString * _directory;
    double  _duration;
    int  _exifOrientation;
    id  _faceAdjustmentVersion;
    double  _faceAreaMaxX;
    double  _faceAreaMaxY;
    double  _faceAreaMinX;
    double  _faceAreaMinY;
    int  _faceDetectionState;
    NSArray * _faceRegions;
    BOOL  _favorite;
    NSString * _filename;
    BOOL  _hasAdjustments;
    BOOL  _hidden;
    BOOL  _isPhotoIris;
    unsigned long long  _localResourcesState;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    NSData * _locationData;
    unsigned int  _mediaSubtypes;
    int  _mediaType;
    NSDate * _modificationDate;
    NSString * _originalColorSpace;
    unsigned int  _persistenceState;
    unsigned int  _pixelHeight;
    unsigned int  _pixelWidth;
    short  _savedAssetType;
    NSSet * _sceneClassifications;
    unsigned int  _thumbnailIndex;
    NSDate * _trashedDate;
    NSString * _uniformTypeIdentifier;
    long long  _videoCpDurationValue;
    unsigned short  _videoCpVisibilityState;
}

@property (nonatomic, readonly) NSURL *ALAssetURL;
@property (getter=isAdjusted, nonatomic, readonly) BOOL adjusted;
@property (nonatomic, readonly) NSDate *adjustmentTimestamp;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic) BOOL assetDescriptionWasSet;
@property (nonatomic, readonly) int assetSource;
@property (nonatomic, readonly) int avalanchePickType;
@property (nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned int burstSelectionTypes;
@property (nonatomic, readonly) BOOL canPlayPhotoIris;
@property (nonatomic, readonly, copy) NSString *cloudIdentifier;
@property (nonatomic, readonly) BOOL cloudIsDeletable;
@property (nonatomic, readonly) int cloudPlaceholderKind;
@property (nonatomic, readonly) double clsContentScore;
@property (nonatomic, readonly) NSDate *clsDate;
@property (nonatomic, readonly) NSData *clsDistanceIdentity;
@property (nonatomic, readonly) CLLocation *clsLocation;
@property (nonatomic, readonly) unsigned int clsPeopleCount;
@property (nonatomic, readonly) NSArray *clsPeopleNames;
@property (nonatomic, readonly) int clsPlayCount;
@property (nonatomic, readonly, copy) NSSet *clsSceneClassifications;
@property (nonatomic, readonly) int clsShareCount;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) int clsViewCount;
@property (nonatomic, readonly) BOOL complete;
@property (getter=isContentAdjustmentAllowed, nonatomic, readonly) BOOL contentAdjustmentAllowed;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) double curationScore;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *directory;
@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) id faceAdjustmentVersion;
@property (nonatomic, readonly) double faceAreaMaxX;
@property (nonatomic, readonly) double faceAreaMaxY;
@property (nonatomic, readonly) double faceAreaMinX;
@property (nonatomic, readonly) double faceAreaMinY;
@property (nonatomic, readonly) int faceDetectionState;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned int fullsizeDataFormat;
@property (nonatomic, readonly) BOOL hasAdjustments;
@property (nonatomic, readonly) BOOL hasPhotoColorAdjustments;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (getter=isHighFramerateVideo, nonatomic, readonly) BOOL highFramerateVideo;
@property (nonatomic, readonly) int imageOrientation;
@property (nonatomic, readonly) NSDictionary *imageProperties;
@property (getter=isInPlaceVideoTrimAllowed, nonatomic, readonly) BOOL inPlaceVideoTrimAllowed;
@property (nonatomic, readonly) BOOL isFavorite;
@property (nonatomic, readonly) BOOL isHDVideo;
@property (nonatomic, readonly) BOOL isJPEG;
@property (nonatomic, readonly) BOOL isPartOfBurst;
@property (nonatomic, readonly) BOOL isPhotoIris;
@property (nonatomic, readonly) BOOL isPhotoIrisPlaceholder;
@property (nonatomic, readonly) BOOL isRAW;
@property (nonatomic, readonly) BOOL isScreenshot;
@property (nonatomic, readonly) BOOL isTemporaryPlaceholder;
@property (nonatomic, readonly) BOOL isUtility;
@property (getter=isLivePhoto, nonatomic, readonly) BOOL livePhoto;
@property (getter=isLivePhotoVisibilityAdjustmentAllowed, nonatomic, readonly) BOOL livePhotoVisibilityAdjustmentAllowed;
@property (nonatomic, readonly) unsigned int livePhotoVisibilityState;
@property (nonatomic, readonly) NSDate *localDate;
@property (nonatomic, readonly) unsigned long long localResourcesState;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } locationCoordinate;
@property (nonatomic, readonly) NSData *locationData;
@property (nonatomic, readonly) unsigned int mediaSubtypes;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) NSString *metadataDebugDescription;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSString *originalColorSpace;
@property (nonatomic, readonly) int originalEXIFOrientation;
@property (nonatomic, readonly, copy) NSString *pathForOriginalImageFile;
@property (nonatomic, readonly, copy) NSString *pathForOriginalVideoFile;
@property (nonatomic, readonly, copy) NSString *pathForTrimmedVideoFile;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) unsigned int persistenceState;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic, readonly) BOOL representsBurst;
@property (getter=isResourceDownloadPossible, nonatomic, readonly) BOOL resourceDownloadPossible;
@property (nonatomic, readonly) short savedAssetType;
@property (nonatomic, readonly) NSSet *sceneClassifications;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) unsigned int sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int thumbnailIndex;
@property (getter=isTrashed, nonatomic, readonly) BOOL trashed;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSDate *universalDate;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) long long videoCpDurationValue;
@property (nonatomic, readonly) unsigned short videoCpVisibilityState;
@property (nonatomic, readonly) PFVideoAVObjectBuilder *videoObjectBuilder;
@property (nonatomic, readonly) float weight;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2;
+ (id)_composePropertiesToFetchWithHint:(unsigned int)arg1;
+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (unsigned int)_extendedPropertyFetchHintsForPropertySets:(id)arg1;
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;
+ (id)_fetchCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 onlyKey:(BOOL)arg4;
+ (id)_fetchRepresentativeAssetInAssetCollection:(id)arg1;
+ (BOOL)_isLivePhotoWithPhotoIris:(BOOL)arg1 hasAdjustments:(BOOL)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned int)arg5;
+ (id)_requestResultInfoForImageInfo:(id)arg1 videoInfo:(id)arg2 adjustmentInfo:(id)arg3 renderingError:(id)arg4;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2;
+ (id)corePropertiesToFetch;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)faceWorkerPropertiesToFetch;
+ (id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForFaces:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPersons:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;
+ (id)fetchAssetsInFaceCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInFaceCollections:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(int)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchMovieCuratedAssetsInMemory:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRepresentativeAssetsInAssetCollection:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)imageManagerPropertiesToFetch;
+ (id)locationPropertiesToFetch;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;
+ (unsigned int)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)ALAssetURL;
- (id)__dictionaryWithContentsOfData:(id)arg1;
- (int)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(BOOL)arg2;
- (BOOL)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2;
- (id)_createAnalysisStatePropertyObject;
- (id)_createCommentPropertyObject;
- (void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned int)arg1 fetchDictionary:(id)arg2;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (id)_imageRequestOptionsForBaseVersion:(int)arg1 options:(id)arg2 progressEstimateForImageProgress:(id /* block */)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(id /* block */)arg4;
- (id)_unfetchedPropertySetsFromPropertySets:(id)arg1;
- (id)_videoRequestOptionsForBaseVersion:(int)arg1 options:(id)arg2 progressEstimateForVideoProgress:(id /* block */)arg3;
- (id)adjustmentTimestamp;
- (id)adjustmentVersion;
- (id)adjustmentsDebugMetadata;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3;
- (double)aspectRatio;
- (id)assetAnalysisStateProperties;
- (BOOL)assetDescriptionWasSet;
- (int)assetSource;
- (id)assetUserActivityProperties;
- (id)assetsLibraryURL;
- (int)avalanchePickType;
- (id)burstIdentifier;
- (unsigned int)burstSelectionTypes;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canPerformSharingAction;
- (BOOL)canPlayPhotoIris;
- (void)cancelContentEditingInputRequest:(unsigned int)arg1;
- (Class)changeRequestClass;
- (id)cloudIdentifier;
- (BOOL)cloudIsDeletable;
- (int)cloudPlaceholderKind;
- (int)cloudSharedAssetPlaceholderKind;
- (id)commentProperties;
- (BOOL)complete;
- (id)creationDate;
- (double)curationScore;
- (id)debugFilename;
- (id)description;
- (id)descriptionProperties;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)directory;
- (id)distanceIdentity;
- (double)duration;
- (unsigned int)effectiveThumbnailIndex;
- (int)exifOrientation;
- (id)faceAdjustmentVersion;
- (double)faceAreaMaxX;
- (double)faceAreaMaxY;
- (double)faceAreaMinX;
- (double)faceAreaMinY;
- (int)faceDetectionState;
- (id)faceRegions;
- (void)fetchPropertySetsIfNeeded;
- (id)fileURLForAdjustedFullsizeImage;
- (id)fileURLForAdjustmentsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForFullsizeImage;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForLargePreview;
- (id)fileURLForMediumPreview;
- (id)fileURLForMutationsDirectory;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)fileURLForPenultimateFullsizeRenderVideo;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)fileURLForUnadjustedFullsizeImage;
- (id)fileURLForVideoComplementFile;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForXMPFile;
- (id)filename;
- (void)generateLargeThumbnailFileIfNecessary;
- (BOOL)hasAdjustments;
- (BOOL)hasLegacyAdjustments;
- (BOOL)hasPhotoColorAdjustments;
- (int)imageOrientation;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (BOOL)isAudio;
- (BOOL)isCloudPhotoLibraryAsset;
- (BOOL)isCloudPlaceholder;
- (BOOL)isCloudSharedAsset;
- (BOOL)isFavorite;
- (BOOL)isHDVideo;
- (BOOL)isHidden;
- (BOOL)isInFlight;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
- (BOOL)isJPEG;
- (BOOL)isLocatedAtCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (BOOL)isMediaSubtype:(unsigned int)arg1;
- (BOOL)isMogul;
- (BOOL)isOriginalSRGB;
- (BOOL)isPartOfBurst;
- (BOOL)isPhoto;
- (BOOL)isPhotoIris;
- (BOOL)isPhotoIrisPlaceholder;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)isRAW;
- (BOOL)isStreamedVideo;
- (BOOL)isTimelapsePlaceholder;
- (BOOL)isTrashed;
- (BOOL)isVideo;
- (short)kind;
- (short)kindSubtype;
- (unsigned long long)localResourcesState;
- (id)location;
- (struct CLLocationCoordinate2D { double x1; double x2; })locationCoordinate;
- (id)locationData;
- (id)mainFileURL;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (unsigned int)mediaSubtypes;
- (int)mediaType;
- (id)metadataDebugDescription;
- (id)modificationDate;
- (id)momentProperties;
- (int)orientation;
- (id)originalColorSpace;
- (id)originalFileName;
- (int)originalImageOrientation;
- (id)originalMetadataProperties;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentDirectory;
- (id)pathForAdjustmentFile;
- (id)pathForFullsizeRenderImageFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForMediumThumbnailFile;
- (id)pathForMutationsDirectory;
- (id)pathForNonAdjustedFullsizeImageFile;
- (id)pathForOriginalFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForPenultimateFullsizeRenderVideoFile;
- (id)pathForSRGBLargeThumbnailFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForVideoPreviewFile;
- (unsigned int)persistenceState;
- (id)photoIrisProperties;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)pl_managedAsset;
- (id)pl_photoLibrary;
- (BOOL)representsBurst;
- (unsigned int)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (short)savedAssetType;
- (id)sceneAnalysisProperties;
- (id)sceneClassifications;
- (void)setAssetDescriptionWasSet:(BOOL)arg1;
- (unsigned int)sourceType;
- (id)thumbnailIdentifier;
- (unsigned int)thumbnailIndex;
- (id)trashedDate;
- (id)uniformTypeIdentifier;
- (long long)videoCpDurationValue;
- (unsigned short)videoCpVisibilityState;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (int)_pu_mediaTypeForAssets:(id)arg1;
+ (int)pu_commonMediaTypeForPhotoCount:(int)arg1 videoCount:(int)arg2 otherCount:(int)arg3;
+ (id)pu_typeStringForAssets:(id)arg1;
+ (id)pu_typeStringForAssetsWithIdentifiers:(id)arg1;
+ (id)pu_typeStringForMediaType:(int)arg1;

- (unsigned int)fullsizeDataFormat;
- (id)imageProperties;
- (BOOL)isAdjusted;
- (BOOL)isContentAdjustmentAllowed;
- (unsigned int)isContentEqualTo:(id)arg1;
- (BOOL)isHighFramerateVideo;
- (BOOL)isInPlaceVideoTrimAllowed;
- (BOOL)isLivePhoto;
- (BOOL)isLivePhotoVisibilityAdjustmentAllowed;
- (BOOL)isResourceDownloadPossible;
- (BOOL)isTemporaryPlaceholder;
- (unsigned int)livePhotoVisibilityState;
- (id)localizedGeoDescription;
- (int)originalEXIFOrientation;
- (id)pathForOriginalImageFile;
- (id)pathForOriginalVideoFile;
- (id)pathForTrimmedVideoFile;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (id)videoObjectBuilder;

// Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion

- (void)fetchIrisForWatchToPath:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchJPEGForWatchWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (float)_videoScoreForAsset:(id)arg1;
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchPersons:(BOOL)arg2 prefetchPersonCount:(BOOL)arg3 prefetchScenes:(BOOL)arg4;
+ (id)contextForItems:(id)arg1;
+ (BOOL)isUtilityForAsset:(id)arg1;
+ (double)scoreForAsset:(id)arg1 withContext:(id)arg2;

- (id)_256SpecificAssetResource;
- (id)_imageDataForAssetResource:(id)arg1 networkAccessAllowed:(BOOL)arg2 error:(id*)arg3;
- (double)clsContentScore;
- (id)clsDate;
- (id)clsDistanceIdentity;
- (id)clsLocation;
- (unsigned int)clsPeopleCount;
- (id)clsPeopleNames;
- (int)clsPlayCount;
- (id)clsSceneClassifications;
- (void)clsSetPeopleCount:(id)arg1;
- (void)clsSetPeopleNames:(id)arg1;
- (void)clsSetSceneClassifications:(id)arg1;
- (int)clsShareCount;
- (id)clsUnprefetchedPeopleNames;
- (id)clsUnprefetchedSceneClassifications;
- (float)clsVideoScore;
- (int)clsViewCount;
- (struct CGImage { }*)createThumbnailWithResolution:(unsigned int)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3;
- (id)date;
- (id)dateComponents;
- (unsigned int)facesCount;
- (BOOL)isScreenshot;
- (BOOL)isSubtype:(unsigned int)arg1;
- (BOOL)isUtility;
- (id)localDate;
- (id)peopleNames;
- (double)scoreWithContext:(id)arg1;
- (id)universalDate;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_fetchAssetsInArray:(id)arg1;
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;

- (void)_px_adjustRectWithFaces:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forAssetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 verticalContentMode:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceAreaRect;
- (unsigned int)isContentEqualTo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })px_bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(int)arg2;
- (id)px_mailingAddressIncludeZipCode:(BOOL)arg1;
- (id)px_postalAddressIncludeZipCode:(BOOL)arg1;
- (id)px_singleLineMailingAddressIncludeZipCode:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (float)weight;

// Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit

- (int)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_defaultFetchOptions;
+ (BOOL)vcp_usePHFace;
+ (BOOL)vcp_usePHFaceExpression;

- (id)vcp_exif;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })vcp_faceRectFrom:(id)arg1;
- (id)vcp_fingerprint:(id)arg1;
- (unsigned int)vcp_flagsForPHFace:(id)arg1 withFaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)vcp_getAdjustmentPath;
- (BOOL)vcp_isLivePhoto;
- (BOOL)vcp_isPano;
- (BOOL)vcp_isVideoSlowmo;
- (id)vcp_modificationDate;
- (struct CGSize { float x1; float x2; })vcp_originalSize;
- (long)vcp_queryPHFaces:(unsigned int*)arg1 results:(id*)arg2;

@end