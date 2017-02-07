/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptCollectionView : CKEditableCollectionView {
    BOOL  _dynamicsDisabled;
    BOOL  _ignoresContentOffsetChanges;
}

@property (nonatomic) BOOL dynamicsDisabled;
@property (nonatomic) BOOL ignoresContentOffsetChanges;

- (BOOL)dynamicsDisabled;
- (BOOL)ignoresContentOffsetChanges;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDynamicsDisabled:(BOOL)arg1;
- (void)setIgnoresContentOffsetChanges:(BOOL)arg1;

@end
