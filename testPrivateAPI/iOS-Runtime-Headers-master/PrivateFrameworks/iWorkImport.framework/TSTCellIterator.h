/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellIterator : NSObject <TSTCellIterating> {
    TSTCell * mCell;
    TSTMutableCellIteratorData * mCellData;
    TSTTableTileRowInfo * mCurRow;
    unsigned short  mCurRowID;
    TSTTableTile * mCurTile;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  mCurTileRange;
    BOOL  mDontCheckSize;
    BOOL  mDontExpandCellRefs;
    BOOL  mDontInflateFormulas;
    BOOL  mDontReturnMergeRegions;
    TSTCellRegion * mModelRegion;
    struct NSObject { Class x1; } * mModelRegionIterator;
    BOOL  mReturnCellBorder;
    BOOL  mReturnEmptyCells;
    BOOL  mReturnHiddenCells;
    int  mRowWalkDirection;
    BOOL  mSkipCommentStorageOnlyCells;
    BOOL  mSkipStyleOnlyCells;
    TSTTableDataStore * mTableDataStore;
    TSTTableModel * mTableModel;
}

@property (nonatomic, readonly) TSTTableTileRowInfo *currentRowInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL dontExpandCellRefs;
@property (readonly) unsigned int hash;
@property (readonly) int rowWalkDirection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSTTableModel *tableModel;

- (id)currentRowInfo;
- (void)dealloc;
- (BOOL)dontExpandCellRefs;
- (BOOL)getNextCellData:(id*)arg1;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 flags:(unsigned int)arg2;
- (id)initWithTableModel:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithTableModel:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned int)arg3;
- (id)initWithTableModel:(id)arg1 region:(id)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned int)arg3;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned int)arg3 clampingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg4;
- (void)iterateCellsUsingBlock:(id /* block */)arg1;
- (id)nextCellData;
- (BOOL)p_updateDataForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (int)rowWalkDirection;
- (id)tableModel;
- (void)terminate;

@end