/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMPingPacketData : NSObject {
    int  _error;
    double  _rtt;
    int  _sequenceNumber;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    }  _timeSent;
    BOOL  _timedOut;
}

@property (nonatomic, readonly) int error;
@property (nonatomic, readonly) double rtt;
@property (nonatomic, readonly) int sequenceNumber;
@property (nonatomic, readonly) struct timeval { int x1; int x2; } timeSent;
@property (nonatomic, readonly) BOOL timedOut;

- (void)_markPacketAsTimedOut:(double)arg1;
- (void)_returnPacketArrived;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error;
- (id)initWithSequeneceNumber:(int)arg1 timesent:(struct timeval { int x1; int x2; }*)arg2 error:(int)arg3;
- (double)rtt;
- (int)sequenceNumber;
- (struct timeval { int x1; int x2; })timeSent;
- (BOOL)timedOut;

@end