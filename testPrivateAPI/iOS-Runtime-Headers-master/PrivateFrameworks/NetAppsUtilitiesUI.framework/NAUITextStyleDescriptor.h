/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

@interface NAUITextStyleDescriptor : NSObject <NSCopying> {
    BOOL  _allowsAccessibilitySizes;
    BOOL  _allowsSmallSizes;
    unsigned int  _symbolicTraits;
    NSString * _textStyle;
}

@property (nonatomic, readonly) BOOL allowsAccessibilitySizes;
@property (nonatomic, readonly) BOOL allowsSmallSizes;
@property (nonatomic, readonly) unsigned int symbolicTraits;
@property (nonatomic, readonly, copy) NSString *textStyle;

+ (id)defaultFontForTextStyleDescriptor:(id)arg1;
+ (id)descriptorWithTextStyle:(id)arg1;
+ (id)fontWithTextStyleDescriptor:(id)arg1;

- (void).cxx_destruct;
- (BOOL)allowsAccessibilitySizes;
- (BOOL)allowsSmallSizes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptorByAddingSymbolicTraits:(unsigned int)arg1 removingSymbolicTraits:(unsigned int)arg2;
- (id)descriptorByDisallowingAccessibilitySizes;
- (id)descriptorByDisallowingSmallSizes;
- (unsigned int)hash;
- (id)init;
- (id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)symbolicTraits;
- (id)textStyle;

@end
