/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCollectionViewFlowLayout : UICollectionViewFlowLayout {
    NSMutableArray * _insertedIndexPaths;
    BOOL  _isChangingBounds;
    NSMutableArray * _removedIndexPaths;
    NSMutableArray * _replacedIndexPaths;
}

@property (nonatomic, retain) NSMutableArray *insertedIndexPaths;
@property (nonatomic, retain) NSMutableArray *removedIndexPaths;
@property (nonatomic, retain) NSMutableArray *replacedIndexPaths;

- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)insertedIndexPaths;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)removedIndexPaths;
- (id)replacedIndexPaths;
- (void)setInsertedIndexPaths:(id)arg1;
- (void)setRemovedIndexPaths:(id)arg1;
- (void)setReplacedIndexPaths:(id)arg1;

@end
