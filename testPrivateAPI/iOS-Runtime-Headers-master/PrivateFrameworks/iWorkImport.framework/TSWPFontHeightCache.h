/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontHeightCache : NSObject {
    unsigned int  _cacheSize;
    struct list<unsigned long, std::__1::allocator<unsigned long> > { 
        struct __list_node_base<unsigned long, void *> { 
            struct __list_node_base<unsigned long, void *> {} *__prev_; 
            struct __list_node_base<unsigned long, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<unsigned long, void *> > > { 
            unsigned long __first_; 
        } __size_alloc_; 
    }  _fontHashList;
    struct map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > > { 
        struct __tree<std::__1::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, TSWPFontHeightCacheEntry> > > { 
            struct __tree_node<std::__1::__value_type<unsigned long, TSWPFontHeightCacheEntry>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, TSWPFontHeightCacheEntry>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__1::less<unsigned long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _fontHashToInfoMap;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _lock;
    unsigned int  _maxCacheSize;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedCache;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; })fontHeightInfoForFont:(struct __CTFont { }*)arg1;
- (id)init;
- (void)p_addEntryForFont:(struct __CTFont { }*)arg1 heightInfo:(const struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2;
- (BOOL)p_findEntryForFont:(struct __CTFont { }*)arg1 outHeightInfo:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2 collision:(BOOL*)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
