/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILegibilitySettings : NSObject <BSDescriptionProviding, NSSecureCoding> {
    UIColor * _contentColor;
    float  _imageOutset;
    float  _minFillHeight;
    UIColor * _primaryColor;
    UIColor * _secondaryColor;
    float  _shadowAlpha;
    UIColor * _shadowColor;
    NSString * _shadowCompositingFilterName;
    float  _shadowRadius;
    int  _style;
}

@property (nonatomic, retain) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float imageOutset;
@property (nonatomic) float minFillHeight;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic) float shadowAlpha;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, copy) NSString *shadowCompositingFilterName;
@property (nonatomic) float shadowRadius;
@property (nonatomic) int style;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)sharedInstanceForStyle:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)contentColor;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (float)imageOutset;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentColor:(id)arg1;
- (id)initWithContentColor:(id)arg1 contrast:(float)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithStyle:(int)arg1 contentColor:(id)arg2;
- (id)initWithStyle:(int)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (float)minFillHeight;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setContentColor:(id)arg1;
- (void)setImageOutset:(float)arg1;
- (void)setMinFillHeight:(float)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPropertiesForStyle:(int)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setShadowAlpha:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setStyle:(int)arg1;
- (float)shadowAlpha;
- (id)shadowColor;
- (id)shadowCompositingFilterName;
- (float)shadowRadius;
- (int)style;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)sb_copy;
- (id)sb_description;
- (BOOL)sb_isEqualToLegibilitySettings:(id)arg1;
- (id)sb_styleString;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end