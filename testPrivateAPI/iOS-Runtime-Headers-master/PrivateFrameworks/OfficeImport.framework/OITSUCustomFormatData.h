/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCustomFormatData : NSObject <NSCopying, NSMutableCopying> {
    unsigned short  mCurrencyCodeIndex;
    unsigned char  mDecimalWidth;
    BOOL  mFormatContainsIntegerToken;
    NSString * mFormatString;
    int  mFractionAccuracy;
    unsigned char  mIndexFromRightOfLastDigitPlaceholder;
    NSIndexSet * mInterstitialStringInsertionIndexes;
    NSArray * mInterstitialStrings;
    BOOL  mIsComplexFormat;
    BOOL  mIsConditional;
    unsigned char  mMinimumIntegerWidth;
    unsigned char  mNumberOfHashDecimalPlaceholders;
    unsigned char  mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char  mNumberOfNonSpaceIntegerPlaceholderDigits;
    BOOL  mRequiresFractionReplacement;
    double  mScaleFactor;
    BOOL  mShowThousandsSeparator;
    unsigned char  mTotalNumberOfDecimalPlaceholdersInFormat;
    BOOL  mUseAccountingStyle;
}

@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) BOOL formatContainsIntegerToken;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic, copy) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic, copy) NSArray *interstitialStrings;
@property (nonatomic) BOOL isComplexFormat;
@property (nonatomic) BOOL isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) BOOL requiresFractionReplacement;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) BOOL useAccountingStyle;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)currencyCodeIndex;
- (void)dealloc;
- (unsigned char)decimalWidth;
- (BOOL)formatContainsIntegerToken;
- (id)formatString;
- (int)fractionAccuracy;
- (unsigned int)hash;
- (unsigned char)indexFromRightOfLastDigitPlaceholder;
- (id)init;
- (id)initWithCustomFormatData:(id)arg1;
- (id)interstitialStringInsertionIndexes;
- (id)interstitialStrings;
- (BOOL)isComplexFormat;
- (BOOL)isConditional;
- (BOOL)isEqual:(id)arg1;
- (unsigned char)minimumIntegerWidth;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)numberOfHashDecimalPlaceholders;
- (unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
- (unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
- (void)p_copySelfTo:(id)arg1;
- (BOOL)requiresFractionReplacement;
- (double)scaleFactor;
- (void)setCurrencyCodeIndex:(unsigned short)arg1;
- (void)setDecimalWidth:(unsigned char)arg1;
- (void)setFormatContainsIntegerToken:(BOOL)arg1;
- (void)setFormatString:(id)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg1;
- (void)setInterstitialStringInsertionIndexes:(id)arg1;
- (void)setInterstitialStrings:(id)arg1;
- (void)setIsComplexFormat:(BOOL)arg1;
- (void)setIsConditional:(BOOL)arg1;
- (void)setMinimumIntegerWidth:(unsigned char)arg1;
- (void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg1;
- (void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg1;
- (void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg1;
- (void)setRequiresFractionReplacement:(BOOL)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setShowThousandsSeparator:(BOOL)arg1;
- (void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg1;
- (void)setUseAccountingStyle:(BOOL)arg1;
- (BOOL)showThousandsSeparator;
- (unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
- (BOOL)useAccountingStyle;

@end
