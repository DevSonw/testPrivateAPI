/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBadgeTextView : CAMBadgeView {
    NSString * __text;
    NSDictionary * __textAttributes;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  __textInsets;
}

@property (setter=_setText:, nonatomic, copy) NSString *_text;
@property (setter=_setTextAttributes:, nonatomic, copy) NSDictionary *_textAttributes;
@property (setter=_setTextInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _textInsets;

- (void).cxx_destruct;
- (id)_maskImage;
- (void)_setText:(id)arg1;
- (void)_setTextAttributes:(id)arg1;
- (void)_setTextInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)_text;
- (id)_textAttributes;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_textInsets;
- (struct CGSize { float x1; float x2; })_textSize;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;

@end
