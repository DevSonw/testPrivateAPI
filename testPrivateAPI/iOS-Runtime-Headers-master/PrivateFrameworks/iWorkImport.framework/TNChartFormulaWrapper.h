/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaWrapper : NSObject {
    int  mCachedNumberOfValues;
    struct TSCEVector { int (**x1)(); struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector {} *x_2_1_1; struct shared_count { struct sp_counted_base {} *x_2_2_1; } x_2_1_2; } x2; struct TSCEFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_4_3_4; struct { id x_5_4_1; unsigned int x_5_4_2; unsigned char x_5_4_3; } x_4_3_5; struct { double x_6_4_1; double x_6_4_2; double x_6_4_3; int x_6_4_4; unsigned int x_6_4_5 : 2; unsigned int x_6_4_6 : 2; } x_4_3_6; struct { int x_7_4_1; unsigned int x_7_4_2; id x_7_4_3; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_7_4_4; } x_4_3_7; } x_4_2_4; } x_3_1_4; } x3; } * mCachedOuputValueVector;
    struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; } * mPtrToFormula;
}

@property (readonly) struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*formula;

+ (id)chartFormulaForCellReference:(struct { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
+ (id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2;
+ (id)chartFormulaForRangeReference:(struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
+ (id)chartFormulaForString:(id)arg1;
+ (id)chartFormulaWithCopyOfTSCEFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1;
+ (id)emptyChartFormula;

- (id)argumentCollectionWithCalcEngine:(id)arg1 inTable:(struct __CFUUID { }*)arg2;
- (id)argumentCollectionWithCalcEngine:(id)arg1 inTable:(struct __CFUUID { }*)arg2 storeBadRef:(BOOL)arg3;
- (void)clearCacheForCalculationEngine:(id)arg1;
- (void)dealloc;
- (id)description;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)formula;
- (id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID { }*)arg2 usingBlock:(id /* block */)arg3;
- (id)formulaByRewriting:(BOOL)arg1 withCalcEngine:(id)arg2 andHostID:(struct __CFUUID { }*)arg3;
- (BOOL)formulaIsEqualTo:(id)arg1;
- (unsigned int)hash;
- (id)initWithCopyOfTSCEFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1;
- (BOOL)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID { }*)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)numberOfValuesWithCalcEngine:(id)arg1 inTable:(struct __CFUUID { }*)arg2;
- (struct TSCEVector { int (**x1)(); struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector {} *x_2_1_1; struct shared_count { struct sp_counted_base {} *x_2_2_1; } x_2_1_2; } x2; struct TSCEFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_4_3_4; struct { id x_5_4_1; unsigned int x_5_4_2; unsigned char x_5_4_3; } x_4_3_5; struct { double x_6_4_1; double x_6_4_2; double x_6_4_3; int x_6_4_4; unsigned int x_6_4_5 : 2; unsigned int x_6_4_6 : 2; } x_4_3_6; struct { int x_7_4_1; unsigned int x_7_4_2; id x_7_4_3; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_7_4_4; } x_4_3_7; } x_4_2_4; } x_3_1_4; } x3; }*)outputValueVectorWithCalcEngine:(id)arg1 inTable:(struct __CFUUID { }*)arg2;
- (struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID { }*)arg2;
- (id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID { }*)arg2;
- (struct TSCEValue { unsigned int x1[64]; int x2; })valueAtIndex:(unsigned int)arg1 withCalcEngine:(id)arg2 inTable:(struct __CFUUID { }*)arg3;

@end
