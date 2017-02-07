/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKPaper : NSObject {
    NSString * _baseName;
    BOOL  _isTransverse;
    int  bottomMargin;
    int  height;
    int  leftMargin;
    NSDictionary * mediaInfo;
    NSString * name;
    int  rightMargin;
    int  topMargin;
    int  width;
}

@property (nonatomic, readonly) NSString *baseName;
@property (nonatomic) int bottomMargin;
@property (nonatomic, readonly) unsigned int bottomMarginInPoints;
@property (nonatomic) int height;
@property (nonatomic, readonly) float imageableArea;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageableAreaRect;
@property (nonatomic, readonly) BOOL isBorderless;
@property (nonatomic, readonly) BOOL isRoll;
@property (nonatomic, readonly) BOOL isTransverse;
@property (nonatomic) int leftMargin;
@property (nonatomic, readonly, retain) NSString *localizedName;
@property (nonatomic, readonly) unsigned int maxCutLength;
@property (nonatomic, readonly) int maxHeight;
@property (nonatomic, copy) NSDictionary *mediaInfo;
@property (nonatomic, readonly, retain) NSString *mediaType;
@property (nonatomic, readonly, retain) NSString *mediaTypeName;
@property (nonatomic, readonly) unsigned int minCutLength;
@property (nonatomic, readonly) int minHeight;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } paperSize;
@property (nonatomic) int rightMargin;
@property (nonatomic) int topMargin;
@property (nonatomic, readonly) unsigned int topMarginInPoints;
@property (nonatomic) int width;

+ (id)defaultGenericPaperForLocale:(id)arg1;
+ (id)documentPapers;
+ (id)generic3_5x5Paper;
+ (id)generic4x6Paper;
+ (id)genericA4Paper;
+ (id)genericA6Paper;
+ (id)genericBorderlessWithName:(id)arg1;
+ (id)genericHagakiPaper;
+ (id)genericLegalPaper;
+ (id)genericLetterPaper;
+ (id)genericPRC32KPaper;
+ (id)genericWithName:(id)arg1;
+ (id)mediaNameForWidth:(int)arg1 Height:(int)arg2 mediaType:(id)arg3 Borderless:(BOOL)arg4 Simplex:(BOOL)arg5;
+ (id)paperWithAttributes:(id)arg1;
+ (id)photoPapers;
+ (id)rollPaperWithAttributes:(id)arg1;
+ (BOOL)useMetric;
+ (BOOL)willAdjustMarginsForDuplexMode:(id)arg1;

- (void)addToMediaCol:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (id)baseName;
- (int)bottomMargin;
- (unsigned int)bottomMarginInPoints;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)createMediaColAndDoMargins:(BOOL)arg1;
- (id)cutToLength:(float)arg1;
- (id)cutToPWGLength:(int)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (int)height;
- (float)imageableArea;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageableAreaRect;
- (id)initWithPWGSize:(struct pwg_size_s { struct pwg_map_s { char *x_1_1_1; char *x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; }*)arg1 localizedName:(id)arg2 codeName:(id)arg3;
- (id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8;
- (BOOL)isBorderless;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualSize:(id)arg1;
- (BOOL)isEqualSizeAndMediaType:(id)arg1;
- (BOOL)isRoll;
- (BOOL)isTransverse;
- (int)leftMargin;
- (id)localizedName;
- (id)localizedNameFromDimensions;
- (unsigned int)maxCutLength;
- (int)maxHeight;
- (id)mediaInfo;
- (id)mediaType;
- (id)mediaTypeName;
- (unsigned int)minCutLength;
- (int)minHeight;
- (id)name;
- (id)nameWithoutSuffixes:(id)arg1;
- (struct CGSize { float x1; float x2; })paperSize;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)arg1;
- (int)rightMargin;
- (void)setBottomMargin:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setLeftMargin:(int)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRightMargin:(int)arg1;
- (void)setTopMargin:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)sizeAndImageableCompare:(id)arg1;
- (int)sizeMediaTypeAndImageableCompare:(id)arg1;
- (int)topMargin;
- (unsigned int)topMarginInPoints;
- (int)width;

@end
