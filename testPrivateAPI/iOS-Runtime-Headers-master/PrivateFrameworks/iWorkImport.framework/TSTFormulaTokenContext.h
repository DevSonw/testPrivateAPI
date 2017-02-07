/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaTokenContext : NSObject {
    unsigned int  mArgumentIndex;
    TSTExpressionNode * mExpressionNode;
    unsigned int  mParenNestingLevel;
}

@property (nonatomic, readonly) unsigned int argumentIndex;
@property (nonatomic, readonly) TSTExpressionNode *expressionNode;
@property (nonatomic, readonly) unsigned int parenNestingLevel;

+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2;
+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2 argumentIndex:(unsigned int)arg3;

- (unsigned int)argumentIndex;
- (void)dealloc;
- (id)debugDescription;
- (id)expressionNode;
- (unsigned int)hash;
- (id)init;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2 argumentIndex:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)parenNestingLevel;

@end
