/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutCellIterator : TSTCellIterator {
    TSTMutableCellIteratorData * mCellData;
    TSTCell * mLayoutCell;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mLayoutCellID;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mLayoutRange;
    TSTMasterLayout * mMasterLayout;
    <TSTCellIteratorData> * mModelIteratorData;
    BOOL  mModelIteratorHasCell;
    unsigned short  mNumberOfColumns;
    unsigned short  mNumberOfLayoutColumns;
    unsigned short  mNumberOfRows;
    BOOL  mQueriedModel;
}

@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic, readonly) TSTTableModel *tableModel;

- (void)dealloc;
- (BOOL)getNextCellData:(id*)arg1;
- (id)initWithLayout:(id)arg1;
- (id)initWithLayout:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithLayout:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned int)arg3;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithMasterLayout:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned int)arg3;
- (id)masterLayout;

@end
