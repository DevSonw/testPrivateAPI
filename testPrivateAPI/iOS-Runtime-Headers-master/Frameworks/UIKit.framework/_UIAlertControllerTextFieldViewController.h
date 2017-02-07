/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {
    UICollectionViewFlowLayout * _collectionViewLayout;
    <_UIAlertControllerTextFieldViewControllerContaining> * _container;
    BOOL  _hidden;
    BOOL  _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle * _visualStyle;
    NSMutableArray * textFieldViews;
    NSMutableArray * textFields;
}

@property (nonatomic) <_UIAlertControllerTextFieldViewControllerContaining> *container;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (readonly) NSArray *textFields;
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;

- (void).cxx_destruct;
- (float)_bottomMarginForTextFields;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(BOOL)arg2;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)container;
- (id)init;
- (BOOL)isHidden;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)numberOfTextFields;
- (void)removeAllTextFields;
- (BOOL)resignFirstResponder;
- (void)setContainer:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)textFieldAtIndex:(int)arg1;
- (id)textFields;
- (BOOL)textFieldsCanBecomeFirstResponder;
- (void)updateTextFieldStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)visualStyle;

@end