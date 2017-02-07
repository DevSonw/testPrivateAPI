/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftDashView : UIView {
    UIColor * _dashColor;
    struct CGSize { 
        float width; 
        float height; 
    }  _dashSize;
    float  _dashSpacing;
}

@property (nonatomic, copy) UIColor *dashColor;
@property (nonatomic) struct CGSize { float x1; float x2; } dashSize;
@property (nonatomic) float dashSpacing;

- (void).cxx_destruct;
- (id)dashColor;
- (struct CGSize { float x1; float x2; })dashSize;
- (float)dashSpacing;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDashColor:(id)arg1;
- (void)setDashSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDashSpacing:(float)arg1;

@end