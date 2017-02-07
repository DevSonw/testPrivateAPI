/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReferenceDynamic : PLTimeReference {
    NSDate * _lastQueryTime;
    NSMutableArray * _offsetHistory;
    int  _offsetHistoryHead;
    PLTimer * _periodicCurrentTime;
    NSMutableDictionary * _timeChangeBlocks;
    double  _tooFarInFutureDistance;
    double  _tooFarInPastDistance;
}

@property (retain) NSDate *lastQueryTime;
@property (retain) NSMutableArray *offsetHistory;
@property int offsetHistoryHead;
@property (retain) PLTimer *periodicCurrentTime;
@property (retain) NSMutableDictionary *timeChangeBlocks;
@property double tooFarInFutureDistance;
@property double tooFarInPastDistance;

+ (double)nearestDistanceFromDate:(id)arg1 toRegionWithStartDate:(id)arg2 andEndDate:(id)arg3;

- (void).cxx_destruct;
- (void)checkForTimeChangeWithCurrentTime:(id)arg1;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(int)arg3;
- (void)initializeOffsetHistoryWithEntries:(id)arg1;
- (void)initializeOffsetWithEntries:(id)arg1;
- (id)lastQueryTime;
- (id)newOffsetEntryWithCurrentTime;
- (void)notifyTimeChange:(double)arg1;
- (id)offsetHistory;
- (int)offsetHistoryHead;
- (id)periodicCurrentTime;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)registerForTimeChangedNotification;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (void)setLastQueryTime:(id)arg1;
- (void)setOffset:(double)arg1;
- (void)setOffsetHistory:(id)arg1;
- (void)setOffsetHistoryHead:(int)arg1;
- (void)setPeriodicCurrentTime:(id)arg1;
- (void)setTimeChangeBlocks:(id)arg1;
- (void)setTooFarInFutureDistance:(double)arg1;
- (void)setTooFarInPastDistance:(double)arg1;
- (BOOL)shouldQueryCurrentTime;
- (id)timeChangeBlocks;
- (double)tooFarInFutureDistance;
- (double)tooFarInPastDistance;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1;

@end