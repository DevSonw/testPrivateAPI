/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHRelationshipChangeRequestHelper : NSObject {
    BOOL  _allowsInsert;
    BOOL  _allowsMove;
    BOOL  _allowsRemove;
    PHChangeRequestHelper * _changeRequestHelper;
    NSString * _destinationEntityName;
    id /* block */  _isDestinationObjectValid;
    NSMutableArray * _mutableObjectIDsAndUUIDs;
    NSArray * _originalObjectIDs;
    NSString * _relationshipName;
}

@property (nonatomic) BOOL allowsInsert;
@property (nonatomic) BOOL allowsMove;
@property (nonatomic) BOOL allowsRemove;
@property (nonatomic, retain) PHChangeRequestHelper *changeRequestHelper;
@property (nonatomic, retain) NSString *destinationEntityName;
@property (nonatomic, copy) id /* block */ isDestinationObjectValid;
@property (nonatomic, retain) NSMutableArray *mutableObjectIDsAndUUIDs;
@property (nonatomic, retain) NSArray *originalObjectIDs;
@property (nonatomic, readonly) NSString *relationshipName;

+ (id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2;

- (void).cxx_destruct;
- (BOOL)allowsInsert;
- (BOOL)allowsMove;
- (BOOL)allowsRemove;
- (BOOL)applyMutationsToManagedObject:(id)arg1 orderedMutableChildren:(id)arg2 error:(id*)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 error:(id*)arg3;
- (BOOL)applyMutationsToManagedObjectToOneRelationship:(id)arg1 error:(id*)arg2;
- (id)changeRequestHelper;
- (id)destinationEntityName;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;
- (id /* block */)isDestinationObjectValid;
- (id)mutableObjectIDsAndUUIDs;
- (id)originalObjectIDs;
- (id)relationshipName;
- (void)setAllowsInsert:(BOOL)arg1;
- (void)setAllowsMove:(BOOL)arg1;
- (void)setAllowsRemove:(BOOL)arg1;
- (void)setChangeRequestHelper:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setIsDestinationObjectValid:(id /* block */)arg1;
- (void)setMutableObjectIDsAndUUIDs:(id)arg1;
- (void)setOriginalObjectIDs:(id)arg1;

@end
