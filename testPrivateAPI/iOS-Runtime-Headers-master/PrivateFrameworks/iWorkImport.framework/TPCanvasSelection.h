/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection> {
    NSSet * mAdditionalInfos;
    NSSet * mExcludedInfos;
    NSSet * mInfos;
}

@property (nonatomic, readonly) int canvasSelectionKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int infoCount;
@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSSet *rawAdditionalInfos;
@property (nonatomic, readonly) NSSet *rawExcludedInfos;
@property (nonatomic, readonly) NSSet *rawInfos;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int unlockedInfoCount;
@property (nonatomic, readonly) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)canvasSelectionFromCanvasSelection:(id)arg1 withToggledInfo:(id)arg2;
+ (id)canvasSelectionFromSelection:(id)arg1;
+ (id)canvasSelectionFromSelection:(id)arg1 withInfos:(id)arg2;
+ (id)emptySelection;
+ (id)selectionWithInfos:(id)arg1;

- (id)UUIDDescription;
- (int)canvasSelectionKind;
- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithNewRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithNewStyleInsertionBehavior:(int)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 head:(unsigned int)arg2 tail:(unsigned int)arg3;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 headChar:(unsigned int)arg2 tailChar:(unsigned int)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; int x6; int x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct Reference {} *x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithTextSelection:(id)arg1 infos:(id)arg2 excludedInfos:(id)arg3 additionalInfos:(id)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7 infos:(id)arg8 excludedInfos:(id)arg9 additionalInfos:(id)arg10;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)p_UUIDDescriptionsForInfosSet:(id)arg1;
- (void)p_commonCopyTo:(id)arg1;
- (id)rawAdditionalInfos;
- (id)rawExcludedInfos;
- (id)rawInfos;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; int x6; int x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct Reference {} *x11; int x12; }*)arg1 archiver:(id)arg2;
- (unsigned int)unlockedInfoCount;
- (id)unlockedInfos;

@end
