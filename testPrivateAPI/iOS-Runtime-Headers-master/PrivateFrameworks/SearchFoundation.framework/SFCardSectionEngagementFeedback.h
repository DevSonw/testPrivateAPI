/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback {
    unsigned int  _actionCardType;
    SFPunchout * _destination;
    unsigned int  _triggerEvent;
}

@property (nonatomic) unsigned int actionCardType;
@property (nonatomic, retain) SFPunchout *destination;
@property (nonatomic) unsigned int triggerEvent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)actionCardType;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned int)arg3 actionCardType:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (void)setActionCardType:(unsigned int)arg1;
- (void)setDestination:(id)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (unsigned int)triggerEvent;

@end
