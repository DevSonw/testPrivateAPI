/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSQueryGenerationToken : NSQueryGenerationToken {
    BOOL  _freeValueOnDealloc;
    id  _generationIdentifier;
    BOOL  _isCompound;
    BOOL  _isSingleton;
    id  _store;
    BOOL  _unsupportedForStore;
}

- (id)_generationalComponentForStore:(id)arg1;
- (id)_initWithValue:(id)arg1 singleton:(BOOL)arg2;
- (id)_store;
- (id)_storesForRequestRoutingFrom:(id)arg1;
- (id)_token;
- (id)autorelease;
- (void)dealloc;
- (id)description;
- (id)initForNonGenerationalStore:(id)arg1;
- (id)initWithCompoundValue:(id)arg1;
- (id)initWithValue:(id)arg1 store:(id)arg2;
- (id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;

@end
