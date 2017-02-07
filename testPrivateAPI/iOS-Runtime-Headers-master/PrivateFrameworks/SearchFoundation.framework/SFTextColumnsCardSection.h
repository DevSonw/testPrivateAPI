/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTextColumnsCardSection : SFCardSection {
    NSArray * _columns;
    NSString * _title;
    int  _titleWeight;
}

@property (nonatomic, copy) NSArray *columns;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int titleWeight;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)columns;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setColumns:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleWeight:(int)arg1;
- (id)title;
- (int)titleWeight;

@end
