/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergePolicy : NSObject {
    void * _reserved2;
    void * _reserved3;
    unsigned int  _type;
}

@property (readonly) unsigned int mergeType;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)errorMergePolicy;
+ (void)load;
+ (id)mergeByPropertyObjectTrumpMergePolicy;
+ (id)mergeByPropertyStoreTrumpMergePolicy;
+ (id)overwriteMergePolicy;
+ (id)rollbackMergePolicy;

- (BOOL)_byPropertyObjectTrumpMergeObject:(id)arg1 ontoObject:(id)arg2 writeAll:(BOOL)arg3;
- (BOOL)_byPropertyObjectTrumpResolveConstraintConflict:(id)arg1;
- (BOOL)_byPropertyStoreTrumpResolveConstraintConflict:(id)arg1;
- (BOOL)_didSomethingElseResolveDBConflict:(id)arg1;
- (id)_electDesignatedOriginalForConflict:(id)arg1;
- (id)_electNewlyInsertedDesignatedOriginalFrom:(id)arg1;
- (id)_electPreexistingDesignatedOriginalFrom:(id)arg1;
- (BOOL)_eliminateContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (BOOL)_mergeContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2;
- (void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeToManyRelationshipsForConstraintConflict:(id)arg1 withDesignatedOriginal:(id)arg2;
- (void)_mergeToManyRelationshipsForObject:(id)arg1 ontoObject:(id)arg2;
- (void)_mergeToManyUnionRelationshipsForConstraintConflict:(id)arg1;
- (void)_mergeToManyUnionRelationshipsForObject:(id)arg1 andObject:(id)arg2;
- (void)_mergeValuesForObject:(id)arg1 ontoObject:(id)arg2;
- (BOOL)_overwriteResolveConstraintConflict:(id)arg1;
- (BOOL)_resolveContextConstraintConflict:(id)arg1;
- (BOOL)_rollbackResolveConstraintConflict:(id)arg1;
- (id)_unresolvedConflictFor:(id)arg1;
- (id)_unresolvedObjectsForContextConflict:(id)arg1;
- (BOOL)_valuesOnObject:(id)arg1 matchAgainstValues:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMergeType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1;
- (void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(BOOL)arg5;
- (unsigned int)mergeType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)resolveConflict:(id)arg1;
- (BOOL)resolveConflicts:(id)arg1 error:(id*)arg2;
- (BOOL)resolveConstraintConflict:(id)arg1 error:(id*)arg2;
- (BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2;
- (unsigned int)type;

@end