/* Generated by RuntimeBrowser.
 */

@protocol MusicVerticalScrollingContainerViewControllerDelegate <NSObject>

@optional

- (int)verticalScrollingContainerViewController:(MusicVerticalScrollingContainerViewController *)arg1 contentOffsetProxyingPolicyForItem:(MusicVerticalScrollingContainerItem *)arg2;
- (void)verticalScrollingContainerViewController:(MusicVerticalScrollingContainerViewController *)arg1 willEndDraggingWithVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(MusicVerticalScrollingContainerViewController *)arg1;
- (void)verticalScrollingContainerViewControllerDidLayoutSubviews:(MusicVerticalScrollingContainerViewController *)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(MusicVerticalScrollingContainerViewController *)arg1;

@end
