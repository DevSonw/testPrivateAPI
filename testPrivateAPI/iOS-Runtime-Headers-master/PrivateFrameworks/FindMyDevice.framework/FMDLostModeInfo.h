/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {
    BOOL  _disableSlideToUnlock;
    BOOL  _facetimeCapable;
    NSString * _footnoteText;
    BOOL  _lostModeEnabled;
    unsigned int  _lostModeType;
    NSString * _message;
    NSString * _phoneNumber;
}

@property (nonatomic) BOOL disableSlideToUnlock;
@property (nonatomic) BOOL facetimeCapable;
@property (nonatomic, retain) NSString *footnoteText;
@property (nonatomic) BOOL lostModeEnabled;
@property (nonatomic) unsigned int lostModeType;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *phoneNumber;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)disableSlideToUnlock;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)facetimeCapable;
- (id)footnoteText;
- (id)initWithCoder:(id)arg1;
- (BOOL)lostModeEnabled;
- (unsigned int)lostModeType;
- (id)message;
- (id)phoneNumber;
- (void)setDisableSlideToUnlock:(BOOL)arg1;
- (void)setFacetimeCapable:(BOOL)arg1;
- (void)setFootnoteText:(id)arg1;
- (void)setLostModeEnabled:(BOOL)arg1;
- (void)setLostModeType:(unsigned int)arg1;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
