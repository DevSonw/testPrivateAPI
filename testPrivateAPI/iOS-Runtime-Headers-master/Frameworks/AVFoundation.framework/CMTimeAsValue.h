/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeAsValue : NSValue {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;
- (BOOL)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (int)intValue;
- (int)integerValue;
- (BOOL)isEqualToValue:(id)arg1;
- (long long)longLongValue;
- (long)longValue;
- (const char *)objCType;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned int)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end