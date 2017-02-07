/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport> {
    NSDate * _defaultBookingDate;
    unsigned int  _defaultPartySize;
    NSNumber * _maximumPartySize;
    NSNumber * _minimumPartySize;
    INImage * _providerImage;
}

@property (nonatomic, readonly) int code;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDate *defaultBookingDate;
@property (nonatomic, readonly) unsigned int defaultPartySize;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSNumber *maximumPartySize;
@property (nonatomic, retain) NSNumber *minimumPartySize;
@property (nonatomic, copy) INImage *providerImage;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)code;
- (id)defaultBookingDate;
- (unsigned int)defaultPartySize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(int)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultPartySize:(unsigned int)arg1 defaultBookingDate:(id)arg2 code:(int)arg3 userActivity:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)maximumPartySize;
- (id)minimumPartySize;
- (id)providerImage;
- (void)setMaximumPartySize:(id)arg1;
- (void)setMinimumPartySize:(id)arg1;
- (void)setProviderImage:(id)arg1;

@end
