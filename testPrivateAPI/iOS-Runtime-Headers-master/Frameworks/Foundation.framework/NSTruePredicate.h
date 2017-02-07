/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTruePredicate : NSPredicate

+ (BOOL)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
