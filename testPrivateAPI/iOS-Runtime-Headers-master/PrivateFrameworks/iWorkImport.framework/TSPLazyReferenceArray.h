/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPLazyReferenceArray : NSMutableArray {
    unsigned long  _mutations;
    NSMutableArray * _references;
}

@property (nonatomic, readonly) NSArray *references;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)referenceAtIndex:(unsigned int)arg1;
- (id)references;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
