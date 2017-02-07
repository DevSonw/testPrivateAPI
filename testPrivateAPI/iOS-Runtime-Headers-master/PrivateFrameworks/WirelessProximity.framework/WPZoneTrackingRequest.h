/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPZoneTrackingRequest : NSObject <NSSecureCoding> {
    unsigned char  _clientType;
    BOOL  _scanWhenScreenOff;
    struct { 
        int screenOnInterval; 
        int screenOffInterval; 
        int window; 
    }  _scanningRates;
    NSMutableSet * _zones;
}

@property unsigned char clientType;
@property BOOL scanWhenScreenOff;
@property struct { int x1; int x2; int x3; } scanningRates;
@property (retain) NSMutableSet *zones;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)clientType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)scanWhenScreenOff;
- (struct { int x1; int x2; int x3; })scanningRates;
- (void)setClientType:(unsigned char)arg1;
- (void)setScanWhenScreenOff:(BOOL)arg1;
- (void)setScanningRates:(struct { int x1; int x2; int x3; })arg1;
- (void)setZones:(id)arg1;
- (id)zones;

@end
