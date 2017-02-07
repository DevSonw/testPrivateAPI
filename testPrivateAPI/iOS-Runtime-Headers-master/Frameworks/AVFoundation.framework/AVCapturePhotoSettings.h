/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoSettings : NSObject <NSCopying> {
    AVCapturePhotoSettingsInternal * _internal;
}

@property (getter=isAutoStillImageStabilizationEnabled, nonatomic) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic, readonly) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (nonatomic) int flashMode;
@property (readonly, copy) NSDictionary *format;
@property (getter=isHighResolutionPhotoEnabled, nonatomic) BOOL highResolutionPhotoEnabled;
@property (nonatomic, copy) NSURL *livePhotoMovieFileURL;
@property (nonatomic, copy) NSArray *livePhotoMovieMetadata;
@property (nonatomic, copy) NSDictionary *previewPhotoFormat;
@property (readonly) unsigned long rawPhotoPixelFormatType;
@property (readonly) long long uniqueID;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)photoSettings;
+ (id)photoSettingsFromPhotoSettings:(id)arg1;
+ (id)photoSettingsWithFormat:(id)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned long)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned long)arg1 processedFormat:(id)arg2;
+ (long long)uniqueID;

- (int)HDRMode;
- (id)_description;
- (id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned long)arg2 uniqueID:(long long)arg3;
- (id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2;
- (id)availablePreviewPhotoPixelFormatTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)flashMode;
- (id)format;
- (unsigned long)formatFourCC;
- (id)init;
- (BOOL)isAutoBravoImageFusionEnabled;
- (BOOL)isAutoShallowDepthOfFieldEffectEnabled;
- (BOOL)isAutoStillImageStabilizationEnabled;
- (BOOL)isHighResolutionPhotoEnabled;
- (BOOL)isOriginalPhotoDeliveryEnabled;
- (BOOL)isSquareCropEnabled;
- (BOOL)isTurboModeEnabled;
- (id)livePhotoContentIdentifier;
- (id)livePhotoContentIdentifierForOriginalPhoto;
- (id)livePhotoMovieFileURL;
- (id)livePhotoMovieFileURLForOriginalPhoto;
- (id)livePhotoMovieMetadata;
- (id)livePhotoMovieMetadataForOriginalPhoto;
- (struct CGSize { float x1; float x2; })previewCGSize;
- (unsigned long)previewFormatFourCC;
- (id)previewPhotoFormat;
- (unsigned long)rawPhotoPixelFormatType;
- (void)setAutoBravoImageFusionEnabled:(BOOL)arg1;
- (void)setAutoShallowDepthOfFieldEffectEnabled:(BOOL)arg1;
- (void)setAutoStillImageStabilizationEnabled:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setHighResolutionPhotoEnabled:(BOOL)arg1;
- (void)setLivePhotoContentIdentifier:(id)arg1;
- (void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setOriginalPhotoDeliveryEnabled:(BOOL)arg1;
- (void)setPreviewPhotoFormat:(id)arg1;
- (void)setShutterSound:(unsigned long)arg1;
- (void)setSquareCropEnabled:(BOOL)arg1;
- (void)setTurboModeEnabled:(BOOL)arg1;
- (unsigned long)shutterSound;
- (long long)uniqueID;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)initWithRequest:(id)arg1;

@end
