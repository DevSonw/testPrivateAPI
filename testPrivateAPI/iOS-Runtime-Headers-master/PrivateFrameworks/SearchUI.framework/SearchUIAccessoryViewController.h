/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAccessoryViewController : NSObject {
    SearchUITableViewCell * _cell;
    SFSearchResult * _resultForFeedback;
    UIView * _view;
}

@property SearchUITableViewCell *cell;
@property (retain) SFSearchResult *resultForFeedback;
@property (retain) UIView *view;

+ (Class)accessoryViewClassForResult:(id)arg1;
+ (BOOL)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)cell;
- (id)controlInView:(id)arg1;
- (void)didEngageAction:(unsigned int)arg1 destination:(unsigned int)arg2 actionPerformed:(BOOL)arg3;
- (id)initWithUIStyle:(unsigned int)arg1 cell:(id)arg2;
- (id)resultForFeedback;
- (void)setCell:(id)arg1;
- (void)setResultForFeedback:(id)arg1;
- (void)setView:(id)arg1;
- (id)setupViewWithStyle:(unsigned int)arg1;
- (BOOL)shouldVerticallyCenter;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResult:(id)arg1 resultForFeedback:(id)arg2;
- (id)view;
- (id)viewControllerForPresenting;

@end
