/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstClusterDivider : NSObject {
    float  actionAmount;
    float  dividerScore;
    float  highNoiseThreshold;
    int  leftImage;
    float  noiseThreshold;
    int  trueLocalMaximum;
}

@property float actionAmount;
@property float dividerScore;
@property float highNoiseThreshold;
@property int leftImage;
@property float noiseThreshold;
@property int trueLocalMaximum;

- (float)actionAmount;
- (int)compareActionAmounts:(id)arg1;
- (int)compareDividers:(id)arg1;
- (int)compareIndices:(id)arg1;
- (float)dividerScore;
- (float)highNoiseThreshold;
- (int)leftImage;
- (float)noiseThreshold;
- (void)setActionAmount:(float)arg1;
- (void)setDividerScore:(float)arg1;
- (void)setHighNoiseThreshold:(float)arg1;
- (void)setLeftImage:(int)arg1;
- (void)setNoiseThreshold:(float)arg1;
- (void)setTrueLocalMaximum:(int)arg1;
- (int)trueLocalMaximum;

@end
