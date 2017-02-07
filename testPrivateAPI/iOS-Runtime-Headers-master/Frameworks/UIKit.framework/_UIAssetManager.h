/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAssetManager : NSObject {
    NSString * _assetManagerName;
    NSMapTable * _assetMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assetMapLock;
    NSBundle * _bundle;
    CUICatalog * _catalog;
    _UICache * _imageCache;
    BOOL  _isStandaloneAssetManager;
    BOOL  _isStarkAssetManager;
    BOOL  _managingUIKitAssets;
    _UIAssetManager * _nextAssetManager;
    int  _preferredGamut;
    int  _preferredIdiom;
    unsigned int  _preferredIdiomSubtype;
    int  _preferredLayoutDirectionTrait;
    float  _preferredScale;
    UITraitCollection * _preferredTraitCollection;
    CUIMutableCatalog * _runtimeCatalog;
    _UIAssetManager * _starkAssetManager;
    long  _starkAssetManagerOnceToken;
    long  onceToken_runtimeCatalog;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *carFileName;
@property (getter=_managingUIKitAssets, nonatomic, readonly) BOOL managingUIKitAssets;
@property (nonatomic, retain) _UIAssetManager *nextAssetManager;
@property (nonatomic) float preferredScale;
@property (nonatomic, retain) UITraitCollection *preferredTraitCollection;
@property (nonatomic, readonly) CUIMutableCatalog *runtimeCatalog;

+ (id)_assetManagerCache;
+ (void)_convertTraitCollection:(id)arg1 toCUIScale:(float*)arg2 CUIIdiom:(int*)arg3 UIKitIdiom:(int*)arg4 UIKitUserInterfaceStyle:(int*)arg5 subtype:(int*)arg6 CUIDisplayGamut:(int*)arg7 UIKitLayoutDirection:(int*)arg8 CUILayoutDirection:(unsigned int*)arg9;
+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(BOOL)arg3;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2;
+ (int)_userInterfaceIdiomForDeviceClass:(unsigned int)arg1;
+ (BOOL)_validStackImageData:(id)arg1;
+ (float)_watchScreenScale;
+ (id)assetManagerForBundle:(id)arg1;
+ (void)clearSharedRuntimeAssetMapForUnitTests;
+ (id)newAssetNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)sharedRuntimeAssetMap;
+ (id)sharedRuntimeCatalog;
+ (BOOL)validStackImageFile:(id)arg1;

- (id)_assetForName:(id)arg1 shouldCreateWhenNotPresent:(BOOL)arg2;
- (id)_assetFromMapForName:(id)arg1;
- (id)_assetFromMapForName:(id)arg1 lock:(BOOL)arg2;
- (id)_catalog;
- (void)_clearCachedResources;
- (void)_clearCachedResources:(id)arg1;
- (void)_disconnectImageAssets;
- (BOOL)_imageBelongsToUIKit:(id)arg1;
- (id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3 lock:(BOOL)arg4 allowMissingCatalog:(BOOL)arg5;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(BOOL)arg3;
- (BOOL)_managingUIKitAssets;
- (void)_performBlockWithAssetLock:(id /* block */)arg1;
- (BOOL)_starkAssetManager;
- (id)bundle;
- (id)carFileName;
- (id)dataNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)disableCacheFlushing;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 idiom:(int)arg2;
- (id)imageNamed:(id)arg1 idiom:(int)arg2 subtype:(unsigned int)arg3;
- (id)imageNamed:(id)arg1 scale:(float)arg2 gamut:(int)arg3 layoutDirection:(int)arg4 idiom:(int)arg5 userInterfaceStyle:(int)arg6 subtype:(unsigned int)arg7 cachingOptions:(unsigned int)arg8 sizeClassPair:(struct { int x1; int x2; })arg9 attachCatalogImage:(BOOL)arg10;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4;
- (id)imageNamed:(id)arg1 withTrait:(id)arg2;
- (id)initManagerWithoutCatalogWithName:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3;
- (id)initWithURL:(id)arg1 idiom:(int)arg2 error:(id*)arg3;
- (id)nextAssetManager;
- (float)preferredScale;
- (id)preferredTraitCollection;
- (id)runtimeCatalog;
- (void)setNextAssetManager:(id)arg1;
- (void)setPreferredScale:(float)arg1;
- (void)setPreferredTraitCollection:(id)arg1;
- (id)stackImageWithContentsOfFile:(id)arg1 forTraitCollection:(id)arg2;
- (id)stackImageWithData:(id)arg1 forTraitCollection:(id)arg2;

@end