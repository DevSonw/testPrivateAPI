/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {
    _NSFaultingMutableOrderedSetMutationMethods * _mutationMethods;
}

- (void)addObject:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 mutationMethods:(id)arg4;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjects:(id*)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)intersectOrderedSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id /* block */)arg3;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id /* block */)arg2;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
