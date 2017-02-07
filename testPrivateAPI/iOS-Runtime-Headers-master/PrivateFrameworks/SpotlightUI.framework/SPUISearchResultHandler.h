/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchResultHandler : NSObject <SKStoreProductViewControllerDelegate, UIDocumentInteractionControllerDelegate> {
    <SPUISearchResultHandlerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <SPUISearchResultHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)requestDeviceUnlockWithSuccessHandler:(id /* block */)arg1;
+ (id)sharedResultHandler;

- (void).cxx_destruct;
- (BOOL)asyncViewControllerForResult:(id)arg1 preview:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1 open:(BOOL)arg2;
- (id)delegate;
- (void)handleResultSelected:(id)arg1 withFeedback:(id)arg2 wasPop:(BOOL)arg3;
- (void)modalViewControllerClosed;
- (void)openUserActivityForResult:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)requestAuthAndPresentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldDisplayContactCardForResult:(id)arg1;
- (void)showViewController:(id)arg1;
- (id)viewControllerForResult:(id)arg1 preview:(BOOL)arg2;

@end
