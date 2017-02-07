/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    id  _constantValue;
    unsigned int  _type;
}

- (BOOL)_addBindVarForConstId:(id)arg1 ofType:(unsigned int)arg2 inContext:(id)arg3;
- (BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3;
- (id)initWithConstantValue:(id)arg1 ofType:(unsigned int)arg2 inScope:(id)arg3 context:(id)arg4;
- (id)propertyAtEndOfKeyPathExpression:(id)arg1;
- (unsigned int)sqlTypeForProperty:(id)arg1;

@end
