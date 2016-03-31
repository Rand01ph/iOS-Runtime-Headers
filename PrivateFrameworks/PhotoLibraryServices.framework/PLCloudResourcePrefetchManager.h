/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourcePrefetchManager : NSObject {
    PLCloudPhotoLibraryManager *_cplManager;
    int _defaultPrefetchMode;
    BOOL _enqueuedAutomaticPrefetch;
    BOOL _finishedInitialDownload;
    NSMutableSet *_inflightResources;
    NSDate *_lastPrefetchDate;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_orderedPrefetchConditionStringsOnAssets;
+ (id)_originalResourceTypes;

- (id)_assetPredicateForCPLResourceType:(unsigned int)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (BOOL)_canPrefetchWithBudget:(long long)arg1;
- (void)_forceAutomaticPrefetchDueToSettingsChange;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResource:(id)arg2;
- (id)_identifierForResourceDownload:(id)arg1;
- (void)_incrementPrefetchCountForPLCloudResources:(id)arg1;
- (id)_masterPredicateForCPLResourceType:(unsigned int)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (id)_missingLocalOriginalConditionString;
- (id)_missingThumbnailConditionString;
- (id)_predicateForImageResourcePixelsLessOrEqual:(int)arg1;
- (id)_predicatesForPrefetch;
- (void)_prefetchResources:(id)arg1;
- (void)_reloadDefaultDownload;
- (void)_reloadDownloadOriginalsSetting;
- (id)_resourcePredicateForCPLResourceType:(unsigned int)arg1 additionalResourcePredicates:(id)arg2;
- (void)_resourcesToPrefetchWithBudget:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_resourcesWithPredicate:(id)arg1 limit:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_startPrefetchNextBatch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)dealloc;
- (long long)diskSpaceBudgetForPrefetch;
- (id)init;
- (id)initWithCPLManager:(id)arg1;
- (void)prefetchResource:(unsigned int)arg1 forAssetsWithObjectIDs:(id)arg2;
- (id)prefetchStatusForDebug:(BOOL)arg1;
- (void)startAutomaticPrefetch;

@end
