/* Generated by RuntimeBrowser.
 */

@protocol HFServiceLikeBuilder <HFAccessoryVendor, NSObject>

@required

- (NSString *)name;
- (NSString *)originalName;
- (HFRoomBuilder *)room;
- (void)setName:(NSString *)arg1;
- (void)setRoom:(HFRoomBuilder *)arg1;
- (BOOL)supportsFavoriting;

@optional

- (NSArray *)availableIconDescriptors;
- (<HFIconDescriptor> *)iconDescriptor;
- (BOOL)isFavorite;
- (void)setIconDescriptor:(id <HFIconDescriptor>)arg1;
- (void)setIsFavorite:(BOOL)arg1;

@end
