/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _draggingOffset;
    _UIActivityGroupActivityCell * _draggingView;
    UILongPressGestureRecognizer * _editingGestureRecognizer;
    struct CGSize { 
        float width; 
        float height; 
    }  _evaluatedContentSize;
    float  _evaluatedHorizontalItemOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _evaluatedInset;
    struct CGSize { 
        float width; 
        float height; 
    }  _evaluatedItemSize;
    NSIndexPath * _indexPathForDraggedItem;
    NSArray * _preparedLayoutAttributes;
    NSArray * _preparedUpdateItems;
}

@property (nonatomic) struct UIOffset { float x1; float x2; } draggingOffset;
@property (nonatomic, retain) _UIActivityGroupActivityCell *draggingView;
@property (nonatomic, retain) UILongPressGestureRecognizer *editingGestureRecognizer;
@property (nonatomic) struct CGSize { float x1; float x2; } evaluatedContentSize;
@property (nonatomic) float evaluatedHorizontalItemOffset;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } evaluatedInset;
@property (nonatomic) struct CGSize { float x1; float x2; } evaluatedItemSize;
@property (nonatomic, copy) NSIndexPath *indexPathForDraggedItem;
@property (nonatomic, copy) NSArray *preparedLayoutAttributes;
@property (nonatomic, copy) NSArray *preparedUpdateItems;

- (void).cxx_destruct;
- (float)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { float x1; float x2; })arg1 inset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 offscreenPeekInFactor:(float)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_evaluateInsetForSectionAtIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (id)_indexPathsForItemsInSection:(int)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned int)arg2;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (void)cancelDraggingForGesture:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (struct UIOffset { float x1; float x2; })draggingOffset;
- (id)draggingView;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (id)editingGestureRecognizer;
- (struct CGSize { float x1; float x2; })evaluatedContentSize;
- (float)evaluatedHorizontalItemOffset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })evaluatedInset;
- (struct CGSize { float x1; float x2; })evaluatedItemSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)handleEditingGesture:(id)arg1;
- (id)indexPathForDraggedItem;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)preparedLayoutAttributes;
- (id)preparedUpdateItems;
- (void)setDraggingOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setDraggingView:(id)arg1;
- (void)setEditingGestureRecognizer:(id)arg1;
- (void)setEvaluatedContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEvaluatedHorizontalItemOffset:(float)arg1;
- (void)setEvaluatedInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEvaluatedItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setIndexPathForDraggedItem:(id)arg1;
- (void)setPreparedLayoutAttributes:(id)arg1;
- (void)setPreparedUpdateItems:(id)arg1;
- (BOOL)shouldCancelDraggingForGesture:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldReverseLayoutDirection;
- (void)updateDraggingViewForGesture:(id)arg1;

@end