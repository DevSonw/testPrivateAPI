/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFCentroidModelParameters : NSObject <NSSecureCoding> {
    NSDictionary * _engagementCount;
    NSDictionary * _engagementRate;
    int  _idfWeightScheme;
    unsigned int  _minimumTermFrequency;
    int  _norm;
    int  _termWeightScheme;
}

@property (copy) NSDictionary *engagementCount;
@property (copy) NSDictionary *engagementRate;
@property int idfWeightScheme;
@property unsigned int minimumTermFrequency;
@property int norm;
@property int termWeightScheme;

+ (id)defaultParameters;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementCount;
- (id)engagementRate;
- (int)idfWeightScheme;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToParameters:(id)arg1;
- (unsigned int)minimumTermFrequency;
- (int)norm;
- (void)setEngagementCount:(id)arg1;
- (void)setEngagementRate:(id)arg1;
- (void)setIdfWeightScheme:(int)arg1;
- (void)setMinimumTermFrequency:(unsigned int)arg1;
- (void)setNorm:(int)arg1;
- (void)setTermWeightScheme:(int)arg1;
- (int)termWeightScheme;

@end
