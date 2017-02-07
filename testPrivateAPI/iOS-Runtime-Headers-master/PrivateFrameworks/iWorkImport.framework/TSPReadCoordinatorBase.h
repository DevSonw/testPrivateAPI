/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReadCoordinatorBase : NSObject <TSPLazyReferenceDelegate, TSPReaderDelegate> {
    NSObject<OS_dispatch_queue> * _externalReferenceQueue;
    struct unordered_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _externalReferences;
    NSHashTable * _lazyReferenceCopies;
    NSMutableArray * _lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> * _lazyReferenceQueue;
    NSHashTable * _lazyReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { 
        struct RepeatedExternalReferenceCompletionInfo {} *__begin_; 
        struct RepeatedExternalReferenceCompletionInfo {} *__end_; 
        struct __compressed_pair<TSP::RepeatedExternalReferenceCompletionInfo *, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { 
            struct RepeatedExternalReferenceCompletionInfo {} *__first_; 
        } __end_cap_; 
    }  _repeatedExternalReferences;
    BOOL  _success;
}

@property (nonatomic, readonly) NSUUID *baseObjectUUID;
@property (nonatomic, readonly) BOOL canRetainObjectReferencedByWeakLazyReference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) BOOL hasDocumentVersionUUID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCrossAppPaste;
@property (nonatomic, readonly) BOOL isCrossDocumentPaste;
@property (nonatomic, readonly) BOOL isReadingFromDocument;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) int sourceType;
@property (nonatomic, readonly) BOOL success;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (id)baseObjectUUID;
- (BOOL)canRetainObjectReferencedByWeakLazyReference;
- (id)context;
- (id)contextForReader:(id)arg1;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (struct ExternalReferenceInfo { long long x1; struct vector<TSP::ExternalReferenceCompletionInfo, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo {} *x_2_1_1; struct ExternalReferenceCompletionInfo {} *x_2_1_2; struct __compressed_pair<TSP::ExternalReferenceCompletionInfo *, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo {} *x_3_2_1; } x_2_1_3; } x2; }*)externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (unsigned long long)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (id)init;
- (BOOL)isReadingFromDocument;
- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;
- (id)lazyReferenceDelegateForReader:(id)arg1;
- (id)objectDelegateForReader:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (unsigned char)packageIdentifier;
- (void)readDidFail;
- (BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(id /* block */)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id /* block */)arg6;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (BOOL)resolveExternalReferences;
- (void)setLazyReferencesDelegateToObjectContext;
- (int)sourceType;
- (BOOL)success;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;

@end
