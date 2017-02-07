/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {
    struct { 
        double latitude; 
        double longitude; 
    }  _originalCoordinate;
    double  _params;
    double  _radius;
    BOOL  _shouldUsePolyShiftFunction;
}

@property (nonatomic) struct { double x1; double x2; } originalCoordinate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(struct { double x1; double x2; })arg2;
- (BOOL)isValidForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (void)setOriginalCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })shiftedCoordinateForCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double*)arg2;

@end
