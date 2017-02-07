/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSwimWorkout : CMWorkout {
    int  fLocation;
    double  fPoolLength;
}

@property (nonatomic, readonly) int location;
@property (nonatomic, readonly) double poolLength;

+ (BOOL)isAvailable;
+ (BOOL)supportsSecureCoding;
+ (id)swimLocationName:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 location:(int)arg2 poolLength:(double)arg3;
- (int)location;
- (double)poolLength;

@end
