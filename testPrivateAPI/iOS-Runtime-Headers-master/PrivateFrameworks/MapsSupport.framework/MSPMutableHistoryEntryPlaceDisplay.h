/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableHistoryEntryPlaceDisplay : MSPMutableHistoryEntry <MSPHistoryEntryPlaceDisplay> {
    NSUUID * _supersededSearchStorageIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <GEOMapItem> *geoMapItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUUID *supersededSearchStorageIdentifier;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (void).cxx_destruct;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)geoMapItem;
- (id)initWithStorage:(id)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setSupersededSearchStorageIdentifier:(id)arg1;
- (id)supersededSearchStorageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end