/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLogEvent : NSObject {
    double  _endTime;
    NSError * _eventError;
    NSUUID * _eventType;
    double  _startTime;
    BOOL  _submitted;
}

@property (readonly) double durationInMilliseconds;
@property (nonatomic) double endTime;
@property (nonatomic, retain) NSError *eventError;
@property (nonatomic, readonly) NSUUID *eventType;
@property (nonatomic) double startTime;
@property (getter=isSubmitted, nonatomic) BOOL submitted;

- (void).cxx_destruct;
- (double)durationInMilliseconds;
- (double)endTime;
- (id)eventError;
- (id)eventType;
- (id)init;
- (id)initWithEventType:(id)arg1;
- (BOOL)isSubmitted;
- (void)setEndTime:(double)arg1;
- (void)setEventError:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSubmitted:(BOOL)arg1;
- (double)startTime;
- (void)submitAtTime:(double)arg1 error:(id)arg2;

@end
