/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlight : NSObject <NSCopying, NSSecureCoding> {
    FUAirline * _airline;
    NSArray * _allLegs;
    unsigned int  _arrivalLegIndex;
    NSString * _cancellationMessage;
    NSArray * _codeShares;
    unsigned int  _departureLegIndex;
    FUAirline * _displayAirline;
    int  _displayFlightNumber;
    NSDate * _expirationDate;
    int  _flightNumber;
    NSString * _identifier;
    NSArray * _legs;
    NSString * _queriedAirlineTitle;
    NSString * _rawResponse;
}

@property (retain) FUAirline *airline;
@property (nonatomic, retain) NSArray *allLegs;
@property (readonly) FUFlightStep *arrival;
@property unsigned int arrivalLegIndex;
@property (retain) NSString *cancellationMessage;
@property (retain) NSArray *codeShares;
@property (readonly) FUFlightStep *departure;
@property unsigned int departureLegIndex;
@property (retain) FUAirline *displayAirline;
@property (readonly) NSString *displayFlightCode;
@property int displayFlightNumber;
@property (readonly) double duration;
@property (retain) NSDate *expirationDate;
@property (readonly) NSString *flightCode;
@property int flightNumber;
@property (nonatomic, retain) NSString *identifier;
@property (retain) NSArray *legs;
@property (retain) NSString *queriedAirlineTitle;
@property (retain) NSString *rawResponse;
@property (readonly) int status;

+ (void)loadFlightsWithNumber:(unsigned int)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(int)arg4 completionHandler:(id /* block */)arg5;
+ (BOOL)supportsSecureCoding;
+ (id)timeFormatterForIdentifier;

- (void).cxx_destruct;
- (id)airline;
- (id)allLegs;
- (id)arrival;
- (unsigned int)arrivalLegIndex;
- (id)cancellationMessage;
- (id)codeShares;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departure;
- (unsigned int)departureLegIndex;
- (id)description;
- (id)displayAirline;
- (id)displayFlightCode;
- (int)displayFlightNumber;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)firstLeg;
- (id)flightCode;
- (int)flightNumber;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastLeg;
- (id)legs;
- (id)legsAsFlights;
- (id)queriedAirlineTitle;
- (id)rawResponse;
- (id)relevantLeg;
- (void)setAirline:(id)arg1;
- (void)setAllLegs:(id)arg1;
- (void)setArrivalLegIndex:(unsigned int)arg1;
- (void)setCancellationMessage:(id)arg1;
- (void)setCodeShares:(id)arg1;
- (void)setDepartureLegIndex:(unsigned int)arg1;
- (void)setDepartureLegIndex:(unsigned int)arg1 arrivalLegIndex:(unsigned int)arg2;
- (void)setDisplayAirline:(id)arg1;
- (void)setDisplayFlightNumber:(int)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFlightNumber:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setQueriedAirlineTitle:(id)arg1;
- (void)setRawResponse:(id)arg1;
- (int)status;

@end
