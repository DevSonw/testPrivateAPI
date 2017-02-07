/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIAssetVersions : NSObject {
    NSMutableSet * _assets;
    TIAsset * _currentAsset;
    NSString * _inputModeLevel;
    NSString * _type;
}

@property (nonatomic, readonly) NSMutableSet *assets;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic) TIAsset *currentAsset;
@property (nonatomic, readonly) NSString *inputModeLevel;
@property (nonatomic, readonly) NSString *type;

- (void)addAsset:(id)arg1;
- (id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2;
- (id)assets;
- (unsigned int)count;
- (id)currentAsset;
- (void)dealloc;
- (id)initWithAssetType:(id)arg1 inputModeLevel:(id)arg2;
- (id)inputModeLevel;
- (BOOL)isEmpty;
- (BOOL)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)recursiveDescription;
- (void)setCurrentAsset:(id)arg1;
- (id)type;

@end
