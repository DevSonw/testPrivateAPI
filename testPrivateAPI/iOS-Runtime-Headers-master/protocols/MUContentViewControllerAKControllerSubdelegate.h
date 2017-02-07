/* Generated by RuntimeBrowser.
 */

@protocol MUContentViewControllerAKControllerSubdelegate <NSObject>

@required

- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned int)arg2;
- (CALayer *)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned int)arg1;
- (NSData *)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(float)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned int)arg4;
- (BOOL)shouldDetectFormElements;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { float x1; float x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2;

@optional

- (NSIndexSet *)characterIndexesForQuadPoints:(NSArray *)arg1 onPageAtIndex:(unsigned int)arg2;
- (void)clearHighlightableSelection;
- (void)didEnterToolMode;
- (void)didExitToolMode;
- (void)didPlaceSingleShotAnnotation:(AKAnnotation *)arg1 onPageModelController:(AKPageModelController *)arg2;
- (BOOL)hasHighlightableSelection;
- (NSIndexSet *)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned int)arg1;
- (NSArray *)quadPointsForCharacterIndexes:(NSIndexSet *)arg1 onPageAtIndex:(unsigned int)arg2;
- (void)willPlaceSingleShotAnnotation:(AKAnnotation *)arg1 onProposedPageModelController:(id*)arg2;

@end
