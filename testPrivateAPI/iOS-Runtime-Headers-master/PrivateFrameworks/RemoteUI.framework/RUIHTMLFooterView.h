/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {
    NSURL * _baseURL;
    <RUITableFooterDelegate> * _delegate;
    RUIWebContainerView * _webContainerView;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUITableFooterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (id)delegate;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (float)footerHeightForWidth:(float)arg1 inView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;

@end
