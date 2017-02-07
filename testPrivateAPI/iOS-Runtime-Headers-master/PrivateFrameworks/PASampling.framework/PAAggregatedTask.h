/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedTask : NSObject {
    PASampleAggregator * _aggregator;
    NSMutableDictionary * _binaryImages;
}

@property (readonly) PASampleTimeSeriesDataStore *sampleStore;

- (void).cxx_destruct;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (id)aggregator;
- (int)compare:(id)arg1;
- (id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(BOOL)arg4 isKernel:(BOOL)arg5;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(BOOL)arg2 isKernel:(BOOL)arg3;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 isKernel:(BOOL)arg2;
- (void)fillGaps;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned int)arg3;
- (void)printBinaryImagesToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (id)sampleStore;
- (void)updateBinaryLocationIfLower:(id)arg1 isKernel:(BOOL)arg2;

@end
