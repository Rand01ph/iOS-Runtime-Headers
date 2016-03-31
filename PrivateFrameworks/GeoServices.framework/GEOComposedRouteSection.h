/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteSection : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _bounds;
    GEOComposedRouteLeg *_composedRouteLeg;
    unsigned int _composedRouteLegIndex;
    GEOComposedRouteStep *_composedRouteStep;
    unsigned int _finalStepIndex;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _overlayBounds;
    unsigned int _pointCount;
    struct { float x1; float x2; } *_points;
    unsigned int _startPointIndex;
    int _transportType;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) GEOComposedRouteLeg *composedRouteLeg;
@property (nonatomic, readonly) unsigned int composedRouteLegIndex;
@property (nonatomic, readonly) GEOComposedRouteStep *composedRouteStep;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) unsigned int finalStepIndex;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) struct { float x1; float x2; }*points;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } vkBounds;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)_initStepForRoute:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)composedRouteLeg;
- (unsigned int)composedRouteLegIndex;
- (id)composedRouteStep;
- (void)dealloc;
- (id)description;
- (unsigned int)endPointIndex;
- (unsigned int)finalStepIndex;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 bounds:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4 transportType:(int)arg5 finalStepIndex:(unsigned int)arg6;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 transportType:(int)arg4 finalStepIndex:(unsigned int)arg5 fallbackStartCoordinate:(struct { double x1; double x2; })arg6 fallbackEndCoordinate:(struct { double x1; double x2; })arg7;
- (BOOL)isTransfer;
- (unsigned int)pointCount;
- (struct { float x1; float x2; }*)points;
- (unsigned int)startPointIndex;
- (int)transportType;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(BOOL)arg3 verifySnapping:(BOOL)arg4;
- (void)updateLabelExternalObjectsInRenderRegion:(id)arg1 previousSection:(id)arg2 nextSection:(id)arg3 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator { struct fast_shared_ptr<vk::unsynchronized_weak_interface_ptr<vk::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; bool x3; struct mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_4_1_1; } x4; int x5; struct unordered_map<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::hash<unsigned long long>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::equal_to<unsigned long long>, true> > { float x_4_3_1; } x_1_2_4; } x_6_1_1; } x6; struct unordered_map<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::hash<unsigned long long>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<vk::LabelExternalObject> >, std::__1::equal_to<unsigned long long>, true> > { float x_4_3_1; } x_1_2_4; } x_7_1_1; } x7; struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x_8_1_1; unsigned long long *x_8_1_2; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x_3_2_1; } x_8_1_3; } x8; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_3_1; } x_1_2_4; } x_9_1_1; } x9; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_3_1; } x_1_2_4; } x_10_1_1; } x10; struct unordered_map<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink>, std::__1::hash<const GEOTransitLink *>, std::__1::equal_to<const GEOTransitLink *>, std::__1::allocator<std::__1::pair<const GEOTransitLink *const, std::__1::weak_ptr<vk::LabelExternalTransitLink> > > > { struct __hash_table<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, std::__1::__unordered_map_hasher<const GEOTransitLink *, std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, std::__1::hash<const GEOTransitLink *>, true>, std::__1::__unordered_map_equal<const GEOTransitLink *, std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, std::__1::equal_to<const GEOTransitLink *>, true>, std::__1::allocator<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const GEOTransitLink *, std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, std::__1::hash<const GEOTransitLink *>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<const GEOTransitLink *, std::__1::__hash_value_type<const GEOTransitLink *, std::__1::weak_ptr<vk::LabelExternalTransitLink> >, std::__1::equal_to<const GEOTransitLink *>, true> > { float x_4_3_1; } x_1_2_4; } x_11_1_1; } x11; struct unordered_map<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > > > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, std::__1::hash<unsigned long long>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::vector<GEOFeatureStylePair, std::__1::allocator<GEOFeatureStylePair> > >, std::__1::equal_to<unsigned long long>, true> > { float x_4_3_1; } x_1_2_4; } x_12_1_1; } x12; struct unordered_map<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long, vk::LabelExternalObjectsModerator::LinesOnRouteMapKeyHash, vk::LabelExternalObjectsModerator::LinesOnRouteMapKeyEq, std::__1::allocator<std::__1::pair<const vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long> > > { struct __hash_table<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, std::__1::__unordered_map_hasher<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, vk::LabelExternalObjectsModerator::LinesOnRouteMapKeyHash, true>, std::__1::__unordered_map_equal<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, vk::LabelExternalObjectsModerator::LinesOnRouteMapKeyEq, true>, std::__1::allocator<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> *> { struct __hash_node<std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, vk::LabelExternalObjectsModerator::LinesOnRouteMapKeyHash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, std::__1::__hash_value_type<vk::LabelExternalObjectsModerator::LinesOnRouteMapKey, unsigned long long>, vk::LabelExternalObjectsModerator::LinesOnRouteMapKeyEq, true> > { float x_4_3_1; } x_1_2_4; } x_13_1_1; } x13; struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned long long> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true> > { float x_4_3_1; } x_1_2_4; } x_14_1_1; } x14; struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true> > { float x_4_3_1; } x_1_2_4; } x_15_1_1; } x15; }*)arg4 nodeIDToStyleAttributeMap:(struct unordered_map<unsigned long long, std::__1::unordered_map<unsigned int, int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned int, int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > > > > > { }*)arg5;
- (struct { double x1; double x2; double x3; double x4; })vkBounds;

@end
