/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderRippleTouchContext : NSObject {
    double  _creationTimestamp;
    struct CGPoint { 
        float x; 
        float y; 
    }  _location;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } location;

- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (id)init;
- (struct CGPoint { float x1; float x2; })location;
- (void)reset;
- (double)timeIntervalSinceCreation;

@end