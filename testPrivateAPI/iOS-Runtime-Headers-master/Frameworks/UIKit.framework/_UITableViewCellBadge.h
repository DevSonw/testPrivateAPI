/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewCellBadge : UIView {
    BOOL  _isSelected;
    NSString * _text;
    struct CGSize { 
        float width; 
        float height; 
    }  _textSize;
}

@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_sizeToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
