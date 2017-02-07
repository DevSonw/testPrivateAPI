/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementProgressLocalJournalEntry : HDJournalEntry {
    int  _category;
    HDCodableCategoryDomainDictionary * _dictionary;
    long long  _provenance;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 category:(int)arg2 provenance:(long long)arg3;

@end
