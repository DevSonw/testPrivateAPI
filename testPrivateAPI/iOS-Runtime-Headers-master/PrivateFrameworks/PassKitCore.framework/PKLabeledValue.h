/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKLabeledValue : NSObject <NSSecureCoding> {
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (id)value;

@end
