/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned int  _position;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3 position:(unsigned int)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (unsigned int)position;
- (SEL)selector;
- (id)symbol;

@end