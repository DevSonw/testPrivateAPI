/* Generated by RuntimeBrowser.
 */

@protocol RUIHeader <NSObject>

@required

- (id)initWithAttributes:(NSDictionary *)arg1;

@optional

- (UILabel *)detailHeaderLabel;
- (float)headerHeightForWidth:(float)arg1 inTableView:(UITableView *)arg2;
- (float)headerHeightForWidth:(float)arg1 inView:(UIView *)arg2;
- (UILabel *)headerLabel;
- (void)setDelegate:(id <RUIHeaderDelegate>)arg1;
- (void)setDetailText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setIconImage:(UIImage *)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSectionIsFirst:(BOOL)arg1;
- (void)setSubHeaderText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (UILabel *)subHeaderLabel;

@end
