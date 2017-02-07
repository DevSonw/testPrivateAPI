/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRPixelFormatInfo : NSObject

+ (unsigned char)componentsPerPixel:(unsigned int)arg1;
+ (BOOL)hasAlpha:(unsigned int)arg1;
+ (BOOL)isCompressed:(unsigned int)arg1;
+ (BOOL)isFloat:(unsigned int)arg1;
+ (BOOL)isGammaEncoded:(unsigned int)arg1;
+ (BOOL)isInteger:(unsigned int)arg1;
+ (BOOL)isSRGB:(unsigned int)arg1;
+ (struct TXRImageMemoryLayout { unsigned int x1; unsigned int x2; })packedMemoryLayoutForFormat:(void *)arg1 dimensions:(void *)arg2; // needs 2 arg types, found 1: unsigned int
+ (unsigned char)pixelBytes:(unsigned int)arg1;

@end
