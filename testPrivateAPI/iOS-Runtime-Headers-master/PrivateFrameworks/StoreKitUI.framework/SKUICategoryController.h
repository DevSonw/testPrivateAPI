/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUICategoryArtworkLoader * _artworkLoader;
    UIBarButtonItem * _button;
    SKUIClientContext * _clientContext;
    UIViewController * _contentsController;
    NSURL * _defaultURL;
    <SKUICategoryControllerDelegate> * _delegate;
    SSVLoadURLOperation * _loadOperation;
    NSOperationQueue * _operationQueue;
    UIPopoverController * _popover;
    SKUICategory * _rootCategory;
    SKUISegmentedControl * _segmentedControl;
    int  _segmentedControlLength;
    NSArray * _segmentedControlSegments;
    NSURL * _selectedURL;
    SKUICategoryTableViewController * _tableViewController;
}

@property (nonatomic, retain) SKUICategory *category;
@property (nonatomic, readonly) UIBarButtonItem *categoryButton;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURL *defaultURL;
@property (nonatomic) <SKUICategoryControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isLoading;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (nonatomic) int segmentedControlLength;
@property (nonatomic, retain) NSURL *selectedURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (id)_metricsLocationsWithIndex:(int)arg1;
- (void)_precacheArtworkForCategory:(id)arg1;
- (void)_recordClickEventWithCategory:(id)arg1 index:(int)arg2;
- (void)_reloadSegmentedControl;
- (void)_reloadSelectedSegment;
- (id)_rootMetricsLocations;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)_tableViewControllerWithCategory:(id)arg1;
- (void)buttonAction:(id)arg1;
- (id)category;
- (id)categoryButton;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)clientContext;
- (void)dealloc;
- (id)defaultURL;
- (id)delegate;
- (void)dismiss;
- (id)initWithContentsController:(id)arg1;
- (BOOL)isLoading;
- (void)loadFromURL:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (id)operationQueue;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)segmentedControl;
- (void)segmentedControlAction:(id)arg1;
- (int)segmentedControlLength;
- (id)selectedURL;
- (void)setCategory:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDefaultURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSegmentedControlLength:(int)arg1;
- (void)setSelectedURL:(id)arg1;

@end
