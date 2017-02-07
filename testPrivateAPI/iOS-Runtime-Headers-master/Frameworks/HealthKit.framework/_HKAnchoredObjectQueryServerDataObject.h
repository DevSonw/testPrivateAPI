/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAnchoredObjectQueryServerDataObject : _HKQueryServerDataObject {
    HKQueryAnchor * _anchor;
    BOOL  _includeDeletedObjects;
    unsigned int  _limit;
}

@property (nonatomic, retain) HKQueryAnchor *anchor;
@property (nonatomic) BOOL includeDeletedObjects;
@property (nonatomic) unsigned int limit;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)includeDeletedObjects;
- (id)initWithCoder:(id)arg1;
- (unsigned int)limit;
- (void)setAnchor:(id)arg1;
- (void)setIncludeDeletedObjects:(BOOL)arg1;
- (void)setLimit:(unsigned int)arg1;

@end
