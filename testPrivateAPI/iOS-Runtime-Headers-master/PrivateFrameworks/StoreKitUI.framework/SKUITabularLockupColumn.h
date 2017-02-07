/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITabularLockupColumn : NSObject {
    NSMutableArray * _childViewElements;
    int  _identifier;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSArray *childViewElements;
@property (nonatomic) int identifier;
@property (nonatomic) struct CGSize { float x1; float x2; } size;

- (void).cxx_destruct;
- (void)_addChildViewElement:(id)arg1;
- (id)childViewElements;
- (id)description;
- (int)identifier;
- (id)initWithColumnIdentifier:(int)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end
