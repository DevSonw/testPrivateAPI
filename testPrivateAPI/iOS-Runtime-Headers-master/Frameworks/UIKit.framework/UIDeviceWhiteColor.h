/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceWhiteColor : UIColor {
    struct CGColor { } * _cachedColor;
    float  alphaComponent;
    float  whiteComponent;
}

- (struct CGColor { }*)CGColor;
- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (BOOL)_isDeepColor;
- (float)alphaComponent;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (unsigned int)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end