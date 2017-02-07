/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentCacheRow : NSObject {
    double  _birth;
    int  _cd_rc;
    struct _externalRefFlags_st { 
        unsigned int _invalidToOnes : 1; 
        unsigned int _hasTemporaryID : 1; 
        unsigned int _backgroundDealloc : 1; 
        unsigned int _reservedFlags : 1; 
        unsigned int _virtualfk_count : 14; 
        unsigned int _ordkey_count : 14; 
    }  _externalRefFlags;
    int  _externalReferenceCount;
    id * _toManyMap;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_initializeRelationshipCaches;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)ancillaryOrderKeysForProperty:(id)arg1;
- (void)copyRelationshipCachesFrom:(id)arg1;
- (void)dealloc;
- (int)decrementRefCount;
- (int)externalReferenceCount;
- (void)incrementExternalReferenceCount:(int)arg1;
- (void)incrementRefCount;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (const id*)knownKeyValuesPointer;
- (id)objectID;
- (unsigned int)options;
- (id)relatedObjectIDsForProperty:(id)arg1;
- (oneway void)release;
- (void)releaseRelationshipCaches;
- (id)retain;
- (unsigned int)retainCount;
- (void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (double)timestampForProperty:(id)arg1;
- (void)updateMissingRelationshipCachesFromOriginal:(id)arg1;
- (unsigned long long)version;

@end
