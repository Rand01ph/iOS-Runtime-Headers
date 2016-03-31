/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCumulativeCollectionCalculator : HDCollectionCalculator {
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _bySource;
    long long _currentAligned;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _currentInterval;
    unsigned int _dataCount;
    NSMutableArray *_futureBuckets;
    NSMutableArray *_futureCounts;
    NSMutableArray *_futureIntervals;
    BOOL _lastBucket;
    HDLastIntervalInfo *_lastIntervalInfo;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _lastIntervalSources;
    unsigned int _mergeStrategy;
    double _mergedSum;
    NSArray *_orderedSourceIds;
}

@property (nonatomic) long long currentAligned;
@property (nonatomic) unsigned int dataCount;
@property (nonatomic, retain) NSMutableArray *futureBuckets;
@property (nonatomic, retain) NSMutableArray *futureCounts;
@property (nonatomic, retain) NSMutableArray *futureIntervals;
@property (nonatomic) BOOL lastBucket;
@property (nonatomic, readonly) HDLastIntervalInfo *lastIntervalInfo;
@property (nonatomic) unsigned int mergeStrategy;
@property (nonatomic, retain) NSArray *orderedSourceIds;
@property (nonatomic, readonly) NSDictionary *sumsBySource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (double)_advanceUntilInterval:(long long)arg1;
- (unsigned int)_bucketCount;
- (double)_endDateForBucket:(unsigned int)arg1;
- (double)_putInFutureBucketsValue:(double)arg1 timeAfterEnd:(double)arg2 valuePerSecond:(double)arg3 sampleEndTime:(double)arg4 sourceId:(unsigned long long)arg5;
- (void)_splitValue:(double)arg1 perSecond:(double)arg2 sourceId:(long long)arg3 sampleInfo:(struct { double x1; double x2; long long x3; long long x4; double x5; })arg4 sampleEndTime:(double)arg5;
- (double)_startDateForBucket:(unsigned int)arg1;
- (double)addCurrentBucket;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (BOOL)advanceBucket;
- (long long)currentAligned;
- (unsigned int)dataCount;
- (id)description;
- (id)futureBuckets;
- (id)futureCounts;
- (id)futureIntervals;
- (BOOL)hasData;
- (id)initWithBucketBoundaries:(id)arg1 orderedSourceIds:(id)arg2 mergeStrategy:(unsigned int)arg3;
- (BOOL)lastBucket;
- (id)lastIntervalInfo;
- (unsigned int)mergeStrategy;
- (id)orderedSourceIds;
- (void)resumeWithValue:(double)arg1 sumsBySource:(id)arg2 lastIntervalInfo:(id)arg3 dataCount:(unsigned int)arg4;
- (void)setCurrentAligned:(long long)arg1;
- (void)setDataCount:(unsigned int)arg1;
- (void)setFutureBuckets:(id)arg1;
- (void)setFutureCounts:(id)arg1;
- (void)setFutureIntervals:(id)arg1;
- (void)setLastBucket:(BOOL)arg1;
- (void)setMergeStrategy:(unsigned int)arg1;
- (void)setOrderedSourceIds:(id)arg1;
- (id)sumsBySource;

@end
