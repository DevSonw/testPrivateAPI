/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDragAndDropCollectionView : UICollectionView {
    BOOL  _animatingFavorite;
    UIVisualEffect * _blurEffect;
    NSIndexPath * _dragDestIndexPath;
    <PXPeopleDragAndDropCollectionViewDelegate> * _dragDropDelegate;
    PXPeopleHomeCollectionViewCell * _dragSourceCell;
    NSIndexPath * _dragSourceIndexPath;
    PXPeopleFavoritingShelfView * _favoriteShelfView;
    BOOL  _interactiveMode;
    BOOL  _validDrop;
}

@property (nonatomic) BOOL animatingFavorite;
@property (nonatomic, retain) UIVisualEffect *blurEffect;
@property (nonatomic, retain) NSIndexPath *dragDestIndexPath;
@property (nonatomic) <PXPeopleDragAndDropCollectionViewDelegate> *dragDropDelegate;
@property (nonatomic, retain) PXPeopleHomeCollectionViewCell *dragSourceCell;
@property (nonatomic, retain) NSIndexPath *dragSourceIndexPath;
@property (nonatomic, retain) PXPeopleFavoritingShelfView *favoriteShelfView;
@property (nonatomic) BOOL interactiveMode;
@property (nonatomic) BOOL validDrop;

- (void).cxx_destruct;
- (void)_animateShelfSlideIn;
- (void)_animateShelfSlideOutWithDroppedView:(id)arg1 completion:(id /* block */)arg2;
- (void)_autoscrollForReordering:(id)arg1;
- (id)_footerAttributes;
- (float)_highestVisibleCellZOrder;
- (void)animateDropToFavoriteSection:(id /* block */)arg1;
- (void)animateDropToFavoriteShelf:(id /* block */)arg1;
- (BOOL)animatingFavorite;
- (BOOL)beginInteractiveMovementAtLocation:(struct CGPoint { float x1; float x2; })arg1 forItemAtIndexPath:(id)arg2;
- (id)blurEffect;
- (void)cancelInteractiveMovement;
- (id)dragDestIndexPath;
- (id)dragDropDelegate;
- (id)dragSourceCell;
- (id)dragSourceIndexPath;
- (BOOL)dropTargetIsFavoriteSection;
- (BOOL)dropTargetIsFavoriteShelf;
- (void)embedFavoriteShelfAndInvalidateLayout:(BOOL)arg1;
- (void)endInteractiveMovement;
- (unsigned int)favoriteShelfAppearance;
- (id)favoriteShelfView;
- (BOOL)interactiveMode;
- (void)layoutSubviews;
- (void)reloadData;
- (void)removeFavoriteShelf;
- (void)resetTransformForSourceIndex:(id)arg1;
- (int)sectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAnimatingFavorite:(BOOL)arg1;
- (void)setBlurEffect:(id)arg1;
- (void)setDragDestIndexPath:(id)arg1;
- (void)setDragDropDelegate:(id)arg1;
- (void)setDragSourceCell:(id)arg1;
- (void)setDragSourceIndexPath:(id)arg1;
- (void)setFavoriteShelfView:(id)arg1;
- (void)setInteractiveMode:(BOOL)arg1;
- (void)setValidDrop:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })shelfSize;
- (void)showFavoriteShelfIfNeeded;
- (id)sortedIndexPathsForSelectedItems;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)validDrop;

@end
