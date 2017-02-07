/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKPPT : NSObject {
    <HKPPTInterface> * _pptInterface;
    NSObject<OS_dispatch_queue> * _pptQueue;
}

- (void).cxx_destruct;
- (id)_createStepSampleWithStepCount:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_dateComponentsFromString:(id)arg1;
- (void)_failedTest:(id)arg1;
- (void)_failedTest:(id)arg1 withResults:(id)arg2;
- (void)_finishedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)_generateStepSamples:(int)arg1;
- (void)_invalidParams:(id)arg1 forTest:(id)arg2;
- (unsigned int)_randomNumberBetweenMin:(unsigned int)arg1 max:(unsigned int)arg2;
- (void)_startedTest:(id)arg1;
- (id)init;
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;
- (BOOL)performDateRangeQueryPPTTest:(id)arg1;
- (BOOL)performJournalMergePPTTest:(id)arg1 healthDirectory:(id)arg2;
- (BOOL)performLatestSummaryQueryPPTTest:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 types:(id)arg4;
- (BOOL)performPPTTest:(id)arg1 anchoredQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(int)arg5 anchor:(int)arg6;
- (BOOL)performPPTTest:(id)arg1 collectionQueryForType:(id)arg2 anchorDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 dateIntervalsString:(id)arg6 separateBySource:(BOOL)arg7 average:(BOOL)arg8 minimum:(BOOL)arg9 maximum:(BOOL)arg10 sum:(BOOL)arg11;
- (BOOL)performPPTTest:(id)arg1 enumerateLocationSeriesWithDatumCount:(int)arg2;
- (BOOL)performPPTTest:(id)arg1 insertLocationSeriesWithDatumCount:(int)arg2 batched:(BOOL)arg3;
- (BOOL)performPPTTest:(id)arg1 preflightHealthDirectory:(id)arg2 sampleTypes:(id)arg3 killHealthd:(BOOL)arg4;
- (BOOL)performPPTTest:(id)arg1 sampleQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(int)arg5;
- (BOOL)performPPTTest:(id)arg1 saveDataWithCount:(int)arg2;
- (BOOL)performPPTTest:(id)arg1 statisticsQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 separateBySource:(BOOL)arg5 average:(BOOL)arg6 minimum:(BOOL)arg7 maximum:(BOOL)arg8 sum:(BOOL)arg9;
- (BOOL)performSyntheticJournalMergePPTTest:(id)arg1 simulatedDuration:(double)arg2;
- (BOOL)runTest:(id)arg1 options:(id)arg2;

@end