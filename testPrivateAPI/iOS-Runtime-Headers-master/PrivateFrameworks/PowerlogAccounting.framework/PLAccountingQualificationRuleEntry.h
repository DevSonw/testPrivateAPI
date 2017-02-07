/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (nonatomic, readonly) NSNumber *qualificationID;
@property (nonatomic, readonly) NSNumber *rootNodeID;

+ (id)entryKey;
+ (void)load;

- (id)description;
- (unsigned int)hash;
- (id)initWithRootNodeID:(id)arg1 withQualificationID:(id)arg2 withEntryDate:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)qualificationID;
- (id)rootNodeID;

@end
