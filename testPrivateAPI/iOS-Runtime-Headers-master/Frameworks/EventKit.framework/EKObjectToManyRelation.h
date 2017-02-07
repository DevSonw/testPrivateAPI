/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectToManyRelation : EKObjectRelation {
    NSMutableSet * _addedItems;
    NSMutableSet * _effectiveItems;
    NSMutableSet * _loadedItems;
    NSMutableSet * _removedItems;
}

@property (nonatomic, retain) NSMutableSet *addedItems;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, retain) NSMutableSet *effectiveItems;
@property (nonatomic, copy) NSSet *items;
@property (nonatomic, readonly) BOOL itemsWereAdded;
@property (nonatomic, readonly) BOOL itemsWereRemoved;
@property (nonatomic, retain) NSMutableSet *loadedItems;
@property (nonatomic, retain) NSMutableSet *removedItems;

- (void).cxx_destruct;
- (void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (id)_effectiveItems;
- (void)_forgetRelatedObject:(id)arg1;
- (id)_loadedItems;
- (void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)addItem:(id)arg1;
- (id)addedItems;
- (id)committedValue;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)didCommit;
- (id)effectiveItems;
- (BOOL)isWeak;
- (id)items;
- (BOOL)itemsWereAdded;
- (BOOL)itemsWereRemoved;
- (id)loadedItems;
- (void)refresh;
- (void)removeItem:(id)arg1;
- (id)removedItems;
- (void)reset;
- (void)rollback;
- (void)setAddedItems:(id)arg1;
- (void)setEffectiveItems:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLoadedItems:(id)arg1;
- (void)setRemovedItems:(id)arg1;
- (void)updatePersistentObject;
- (BOOL)validate:(id*)arg1;

@end