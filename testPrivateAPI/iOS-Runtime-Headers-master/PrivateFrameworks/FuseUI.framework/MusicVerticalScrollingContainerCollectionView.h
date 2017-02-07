/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerCollectionView : UICollectionView {
    struct { 
        unsigned int didLayoutSubviews : 1; 
        unsigned int contentSizeDidChange : 1; 
    }  _delegateRespondsToSelector;
    BOOL  _performingLayout;
}

@property (nonatomic) <MusicVerticalScrollingContainerCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) BOOL performingLayout;

- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (BOOL)isPerformingLayout;
- (void)layoutSubviews;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
