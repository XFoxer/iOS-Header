//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Arc4State {
    unsigned int _field1;
    unsigned int _field2;
    char *_field3;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DeviceLibrary;

struct DeviceLibraryView;

struct Entity;

struct EntityCache;

struct EntityClass {
    CDUnknownFunctionPointerType *_field1;
    struct mutex _field2;
    struct unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> _field3;
    struct unordered_map<mlcore::ModelPropertyBase *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelPropertyBase *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, std::__1::allocator<std::__1::pair<mlcore::ModelPropertyBase *const, mlcore::EntityClass *>>> _field4;
};

struct EntityQuery;

struct EntityQueryResult;

struct ITColor {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct LibraryView;

struct LocalizedSearchQuery;

struct LocalizedSearchScope;

struct MPAddKeepLocalControlStatus {
    long long statusType;
    double downloadProgress;
};

struct MPLibraryActiveKeepLocalStatus {
    long long statusType;
    double downloadProgress;
};

struct MPLibraryAddStatusObserverConfiguration {
    _Bool isValidContentType;
    _Bool isLibraryAdded;
    _Bool hasCleanContent;
    _Bool hasExplicitContent;
    _Bool isLibraryAddEligible;
};

struct ModelPropertyBase {
    CDUnknownFunctionPointerType *_field1;
    struct EntityClass *_field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
};

struct Predicate;

struct PropertiesQuery;

struct Query;

struct QueryResult;

struct SortDescriptor;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _MSVSignedRange {
    long long location;
    long long length;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*> *_field1;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long>>> {
    struct __tree<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__1::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
    struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long>>> {
    struct __tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *>>> {
    struct __tree<std::__1::__value_type<long, MPIdentifierSet *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MPIdentifierSet *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, MPIdentifierSet *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, MPIdentifierSet *>, std::__1::less<long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<mlcore::DeviceLibrary> {
    struct DeviceLibrary *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::DeviceLibraryView> {
    struct DeviceLibraryView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::Entity> {
    struct Entity *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::EntityCache> {
    struct EntityCache *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::EntityQuery> {
    struct EntityQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::EntityQueryResult> {
    struct EntityQueryResult *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::LibraryView> {
    struct LibraryView *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::LocalizedSearchQuery> {
    struct LocalizedSearchQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::LocalizedSearchScope> {
    struct LocalizedSearchScope *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::Predicate> {
    struct Predicate *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::PropertiesQuery> {
    struct PropertiesQuery *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::Query> {
    struct Query *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::QueryResult> {
    struct QueryResult *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>>> {
    map_be45dc27 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>>> {
    map_a9534c58 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>>> {
    struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<mlcore::ModelPropertyBase *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelPropertyBase *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, std::__1::allocator<std::__1::pair<mlcore::ModelPropertyBase *const, mlcore::EntityClass *>>> {
    struct __hash_table<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true>, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true>, std::__1::allocator<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> {
    struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<long, std::__1::allocator<long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long *, std::__1::allocator<long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *>> {
    struct ModelPropertyBase **_field1;
    struct ModelPropertyBase **_field2;
    struct __compressed_pair<mlcore::ModelPropertyBase **, std::__1::allocator<mlcore::ModelPropertyBase *>> {
        struct ModelPropertyBase **_field1;
    } _field3;
};

struct vector<mlcore::SortDescriptor, std::__1::allocator<mlcore::SortDescriptor>> {
    struct SortDescriptor *_field1;
    struct SortDescriptor *_field2;
    struct __compressed_pair<mlcore::SortDescriptor *, std::__1::allocator<mlcore::SortDescriptor>> {
        struct SortDescriptor *_field1;
    } _field3;
};

struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>>;

struct vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache>>> {
    shared_ptr_1c86f238 *__begin_;
    shared_ptr_1c86f238 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<mlcore::EntityCache>*, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache>>> {
        shared_ptr_1c86f238 *__value_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    long long _field9;
} CDStruct_d4f770cf;

typedef struct {
    _Bool useCarPlayBrowseTopLevelContentOnly;
    _Bool useCarPlayBrowseTopLevelRequestReorderingHeuristics;
} CDStruct_d2d88407;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int identifiers:1;
    unsigned int name:1;
} CDStruct_63a3d127;

typedef struct {
    int mobileiPodPrefsChanged;
    int mobileiPodPlaybackPrefsChangedAllowCellularData;
    int videoPrefsChanged;
    int airplayPrefsChanged;
} CDStruct_c0841ed3;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned int identifiers:1;
    unsigned int title:1;
    struct {
        unsigned int identifiers:1;
        unsigned int name:1;
        unsigned int artwork:1;
    } showCreator;
} CDStruct_93f342fe;

// Ambiguous groups
typedef struct {
    unsigned int identifiers:1;
    unsigned int text:1;
    unsigned int hasStoreLyrics:1;
    unsigned int hasTimeSyncedLyrics:1;
} CDStruct_78b3e931;

typedef struct {
    unsigned int identifiers:1;
} CDStruct_f9384266;

typedef struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
    struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_2a6257c2;

typedef struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_be45dc27;

typedef struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_a9534c58;

typedef struct shared_ptr<mlcore::DeviceLibrary> {
    struct DeviceLibrary *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_0f3dbfb3;

typedef struct shared_ptr<mlcore::DeviceLibraryView> {
    struct DeviceLibraryView *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_6af3da69;

typedef struct shared_ptr<mlcore::Entity> {
    struct Entity *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_27513921;

typedef struct shared_ptr<mlcore::EntityCache> {
    struct EntityCache *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_1c86f238;

typedef struct shared_ptr<mlcore::EntityQuery> {
    struct EntityQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e8455ceb;

typedef struct shared_ptr<mlcore::EntityQueryResult> {
    struct EntityQueryResult *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_274c5e8b;

typedef struct shared_ptr<mlcore::LibraryView> {
    struct LibraryView *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5c01893c;

typedef struct shared_ptr<mlcore::LocalizedSearchQuery> {
    struct LocalizedSearchQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_299ddd6f;

typedef struct shared_ptr<mlcore::LocalizedSearchScope> {
    struct LocalizedSearchScope *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c450ebdb;

typedef struct shared_ptr<mlcore::Predicate> {
    struct Predicate *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_cf7b8a22;

typedef struct shared_ptr<mlcore::PropertiesQuery> {
    struct PropertiesQuery *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_889ae36a;

typedef struct shared_ptr<mlcore::Query> {
    struct Query *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_34add297;

typedef struct shared_ptr<mlcore::QueryResult> {
    struct QueryResult *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_56e9c9de;

typedef struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>>> {
    map_be45dc27 *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_87e3a99b;

typedef struct shared_ptr<std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, mlcore::ModelPropertyBase *>>>> {
    map_a9534c58 *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_0a0a634d;

typedef struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>>> {
    struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_8b9a1f72;

typedef struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
} vector_bbba3654;

typedef struct vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *>> {
    struct ModelPropertyBase **_field1;
    struct ModelPropertyBase **_field2;
    struct __compressed_pair<mlcore::ModelPropertyBase **, std::__1::allocator<mlcore::ModelPropertyBase *>> {
        struct ModelPropertyBase **_field1;
    } _field3;
} vector_90d4f7ff;

typedef struct vector<mlcore::SortDescriptor, std::__1::allocator<mlcore::SortDescriptor>> {
    struct SortDescriptor *_field1;
    struct SortDescriptor *_field2;
    struct __compressed_pair<mlcore::SortDescriptor *, std::__1::allocator<mlcore::SortDescriptor>> {
        struct SortDescriptor *_field1;
    } _field3;
} vector_11bc6599;

