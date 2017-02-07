/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStorePageRequest : NSObject {
    int  _pageStyle;
    NSDictionary * _productParameters;
    NSURL * _productURL;
}

@property (nonatomic) int productPageStyle;
@property (nonatomic, copy) NSDictionary *productParameters;
@property (nonatomic, copy) NSURL *productURL;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (int)productPageStyle;
- (id)productParameters;
- (id)productURL;
- (void)setProductPageStyle:(int)arg1;
- (void)setProductParameters:(id)arg1;
- (void)setProductURL:(id)arg1;

@end
