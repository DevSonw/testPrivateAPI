/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSItemProviderTypeCoercion : NSObject {
    Class  _targetClass;
    id  _value;
}

@property (nonatomic, copy) Class targetClass;
@property (nonatomic, retain) id value;

+ (id)coercionClassStringFromClass:(Class)arg1;
+ (SEL)selectorForCoercionFromValue:(id)arg1 toClass:(Class)arg2;
+ (id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2;

- (id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)coerceValueAndReturnError:(id*)arg1;
- (void)dealloc;
- (void)setTargetClass:(Class)arg1;
- (void)setValue:(id)arg1;
- (BOOL)shouldCoerceForCoding;
- (Class)targetClass;
- (id)value;

@end
