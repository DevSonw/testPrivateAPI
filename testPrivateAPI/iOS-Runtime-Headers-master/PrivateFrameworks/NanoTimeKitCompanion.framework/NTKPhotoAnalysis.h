/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        BOOL isComplexBackground; 
        BOOL isColoredText; 
        float textHue; 
        float textSaturation; 
        float textBrightness; 
        float bgHue; 
        float bgSaturation; 
        float bgBrightness; 
        float shadowHue; 
        float shadowSaturation; 
        float shadowBrightness; 
    }  _data;
    unsigned int  _version;
}

@property (nonatomic, readonly) float bgBrightness;
@property (nonatomic, readonly) float bgHue;
@property (nonatomic, readonly) float bgSaturation;
@property (getter=isColoredText, nonatomic, readonly) BOOL coloredText;
@property (getter=isComplexBackground, nonatomic, readonly) BOOL complexBackground;
@property (nonatomic, readonly) float shadowBrightness;
@property (nonatomic, readonly) float shadowHue;
@property (nonatomic, readonly) float shadowSaturation;
@property (nonatomic, readonly) struct { BOOL x1; BOOL x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } structure;
@property (nonatomic, readonly) float textBrightness;
@property (nonatomic, readonly) float textHue;
@property (nonatomic, readonly) float textSaturation;
@property (nonatomic, readonly) unsigned int version;

+ (id)analysisWithImage:(id)arg1 alignment:(id)arg2;
+ (id)defaultAnalysis;
+ (BOOL)supportsSecureCoding;

- (float)bgBrightness;
- (float)bgHue;
- (float)bgSaturation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStructure:(struct { BOOL x1; BOOL x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; })arg1;
- (BOOL)isColoredText;
- (BOOL)isComplexBackground;
- (float)shadowBrightness;
- (float)shadowHue;
- (float)shadowSaturation;
- (struct { BOOL x1; BOOL x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; })structure;
- (float)textBrightness;
- (float)textHue;
- (float)textSaturation;
- (unsigned int)version;

@end
