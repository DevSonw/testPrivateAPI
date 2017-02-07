/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5Event : NSObject <NSCopying, NSSecureCoding> {
    int  _eventID;
    NSDictionary * _info;
    double  _timestamp;
}

@property int eventID;
@property (copy) NSDictionary *info;
@property double timestamp;

+ (BOOL)supportsSecureCoding;

- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)eventID;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (void)setEventID:(int)arg1;
- (void)setInfo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
