/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIToggleButton : SKUIStyledButton <SKUIToggleItemStateCenterObserver> {
    BOOL  _autoIncrement;
    int  _autoIncrementCount;
    int  _count;
    <SKUIToggleButtonDelegate> * _delegate;
    SKUIButtonViewElement * _element;
    NSString * _itemIdentifier;
    id  _nonToggledContents;
    SKUIAttributedStringLayout * _nonToggledLayout;
    NSString * _nonToggledTitle;
    NSString * _titleToggleString;
    int  _toggleButtonType;
    NSString * _toggleItemIdentifier;
    BOOL  _toggled;
    id  _toggledContents;
    SKUIAttributedStringLayout * _toggledLayout;
    NSString * _toggledTitle;
}

@property (nonatomic) BOOL autoIncrement;
@property (nonatomic) int autoIncrementCount;
@property (nonatomic) int count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIToggleButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) SKUIButtonViewElement *element;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) id nonToggledContents;
@property (nonatomic, retain) NSString *nonToggledTitle;
@property (readonly) Class superclass;
@property (nonatomic) int toggleButtonType;
@property (nonatomic, retain) NSString *toggleItemIdentifier;
@property (getter=isToggled, nonatomic) BOOL toggled;
@property (nonatomic, retain) id toggledContents;
@property (nonatomic, retain) NSString *toggledTitle;

- (void).cxx_destruct;
- (id)_layoutForString:(id)arg1;
- (id)_nonToggledLayout;
- (void)_sendDidAnimate;
- (void)_sendWillAnimate;
- (void)_showToggleState:(BOOL)arg1;
- (id)_titleAttributes;
- (id)_toggledLayout;
- (BOOL)autoIncrement;
- (int)autoIncrementCount;
- (int)count;
- (void)dealloc;
- (id)delegate;
- (id)element;
- (id)init;
- (BOOL)isToggled;
- (void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2;
- (id)nonToggledContents;
- (id)nonToggledTitle;
- (void)setAutoIncrement:(BOOL)arg1;
- (void)setAutoIncrementCount:(int)arg1;
- (void)setButtonTitleText:(id)arg1;
- (void)setCount:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setNonToggledContents:(id)arg1;
- (void)setNonToggledTitle:(id)arg1;
- (void)setToggleButtonType:(int)arg1;
- (void)setToggleItemIdentifier:(id)arg1;
- (void)setToggled:(BOOL)arg1;
- (void)setToggled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToggledContents:(id)arg1;
- (void)setToggledTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)toggleButtonType;
- (id)toggleItemIdentifier;
- (id)toggledContents;
- (id)toggledTitle;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
