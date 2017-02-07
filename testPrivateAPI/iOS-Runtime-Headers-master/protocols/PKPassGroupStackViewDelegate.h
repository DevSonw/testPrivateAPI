/* Generated by RuntimeBrowser.
 */

@protocol PKPassGroupStackViewDelegate <NSObject>

@required

- (void)groupStackView:(PKPassGroupStackView *)arg1 deleteConfirmedForPass:(PKPass *)arg2;
- (void)groupStackViewDidBeginReordering:(PKPassGroupStackView *)arg1;
- (void)groupStackViewDidEndReordering:(PKPassGroupStackView *)arg1;
- (BOOL)passesGrowWhenFlipped;
- (void)reloadGroupsForGroupStackView:(PKPassGroupStackView *)arg1;
- (unsigned int)suppressedContent;

@optional

- (void)groupStackView:(PKPassGroupStackView *)arg1 didTransitionToState:(int)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(PKPassGroupStackView *)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)groupStackView:(PKPassGroupStackView *)arg1 transitioningToState:(int)arg2 animated:(BOOL)arg3;
- (BOOL)groupStackViewShouldAllowReordering:(PKPassGroupStackView *)arg1;

@end
