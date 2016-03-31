/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleEntity : HDDataEntity

+ (id)_databaseTable;
+ (Class)_deletedEntityClass;
+ (id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)anySampleOfType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (id)columnNamesForTimeOffset;
+ (id)columnsDefinition;
+ (int)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned int)arg2 generateDeletedObjects:(BOOL)arg3 database:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned int)arg2 generateDeletedObjects:(BOOL)arg3 healthDaemon:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)deleteSamplesWithTypes:(id)arg1 sourceIdentifier:(id)arg2 healthDaemon:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)entityEncoderForHealthDaemon:(id)arg1 database:(id)arg2 purpose:(int)arg3 authorizationFilter:(id /* block */)arg4;
+ (id)entityEnumeratorWithType:(id)arg1 daemon:(id)arg2;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)oldestSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (int)preferredEntityType;
+ (BOOL)requiresSampleTypePredicate;
+ (id)samplesTypesForSamplesMatchingPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned int)arg4 anchor:(id*)arg5 error:(id*)arg6;
+ (id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)timePeriodForSamplesOfType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 error:(id*)arg4 cancellationBlock:(id /* block */)arg5;

- (id)_sampleTypeInDatabase:(id)arg1;

@end
