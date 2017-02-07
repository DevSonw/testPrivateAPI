/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetActionManager : PXAssetActionManager {
    NSMapTable * __actionTypeByBarButtonItem;
    PXAssetActionPerformer * __activePerformer;
    PXPhotosDataSource * __dataSourceSnapshot;
    NSMutableDictionary * __performerClassByType;
    PXPhotoKitAssetsDataSourceManager * _dataSourceManager;
    PHPerson * _person;
}

@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (setter=_setActivePerformer:, nonatomic, retain) PXAssetActionPerformer *_activePerformer;
@property (nonatomic, readonly) PXPhotosDataSource *_dataSourceSnapshot;
@property (nonatomic, readonly) NSMutableDictionary *_performerClassByType;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) PHPerson *person;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_actionTypeByBarButtonItem;
- (id)_activePerformer;
- (id)_dataSourceSnapshot;
- (void)_handleActionPerformerComplete:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)_handleActionType:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_handlePreviewAction:(id)arg1 previewViewController:(id)arg2 actionType:(id)arg3;
- (id)_performerClassByType;
- (void)_setActivePerformer:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;
- (id)dataSourceManager;
- (id)initWithSelectionSnapshot:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned int)arg2;
- (id)person;
- (id)previewActionForActionType:(id)arg1;
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;
- (void)setDataSourceManager:(id)arg1;
- (void)setPerson:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)px_registerAdditionalPerformerClasses;

@end
