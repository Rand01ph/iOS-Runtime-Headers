/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDataStore : NSObject {
    NSMutableArray *_achievements;
    NSMutableDictionary *_cachedValues;
    NSError *_currentRunError;
    NSString *_currentRunErroredPropertyKey;
    <HDHealthDaemon> *_healthDaemon;
    NSMutableDictionary *_updatedValues;
}

@property (nonatomic) unsigned int achievementDoctorRunCount;
@property (nonatomic, readonly) unsigned int achievementDoctorRunCountFromDatabase;
@property (nonatomic, retain) NSMutableArray *achievements;
@property (nonatomic) double bestBriskMinutes;
@property (nonatomic) double bestCalorieBurnGoalMetCalories;
@property (nonatomic) unsigned int bestConsecutiveCompleteDays;
@property (nonatomic) double bestDailyCalorieBurn;
@property (nonatomic) double bestDistance;
@property (nonatomic) unsigned int bestOneTimeStepCount;
@property (nonatomic) unsigned int bestSessionCountAnyWeek;
@property (nonatomic) long long briskMinutesFirstCheckedActivitySummaryIndex;
@property (nonatomic) long long briskMinutesLastCheckedActivitySummaryIndex;
@property (nonatomic) double briskMinutesToday;
@property (nonatomic) double briskMinutesYesterday;
@property (nonatomic, retain) NSMutableDictionary *cachedValues;
@property (nonatomic) long long caloriesBurnedFirstCheckedActivitySummaryIndex;
@property (nonatomic) long long caloriesBurnedLastCheckedActivitySummaryIndex;
@property (nonatomic) double caloriesBurnedToday;
@property (nonatomic) double caloriesBurnedYesterday;
@property (nonatomic) unsigned int consecutiveBriskMinutesGoalsMet;
@property (nonatomic) unsigned int consecutiveCompleteDays;
@property (nonatomic) unsigned int consecutiveStandingHoursGoalsMet;
@property (nonatomic) unsigned int currentGoalConsecutiveCompleteDays;
@property (nonatomic, retain) NSError *currentRunError;
@property (nonatomic, retain) NSString *currentRunErroredPropertyKey;
@property (nonatomic) double distanceToday;
@property (nonatomic, retain) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, retain) NSDate *lastAwardedSevenWorkoutWeekStartDate;
@property (nonatomic, retain) NSDate *lastDistanceDate;
@property (nonatomic, retain) NSDate *lastPerfectWeekAllDate;
@property (nonatomic, retain) NSDate *lastPerfectWeekBriskMinutesDate;
@property (nonatomic, retain) NSDate *lastPerfectWeekCaloriesBurnedDate;
@property (nonatomic, retain) NSDate *lastPerfectWeekStandDate;
@property (nonatomic) long long lastResetSummaryIndexForExerciseGoal;
@property (nonatomic) long long lastResetSummaryIndexForMoveGoal;
@property (nonatomic) long long lastResetSummaryIndexForStandGoal;
@property (nonatomic) long long lastSessionAnchor;
@property (nonatomic, retain) NSDate *lastSessionEndDate;
@property (nonatomic) double latestCalorieBurnGoalMetCalories;
@property (nonatomic) unsigned int lifetimeCompleteDays;
@property (nonatomic) long long standingHoursLastCheckedActivitySummaryIndex;
@property (nonatomic) unsigned int standingHoursToday;
@property (nonatomic) unsigned int standingHoursYesterday;
@property (nonatomic) long long stepCountLastCheckedActivitySummaryIndex;
@property (nonatomic) unsigned int stepCountToday;
@property (nonatomic) unsigned int stepCountYesterday;
@property (nonatomic) unsigned int totalSessionCount;
@property (nonatomic, retain) NSMutableDictionary *updatedValues;

+ (id)_keyForBestSessionCaloriesWithActivityType:(unsigned int)arg1;
+ (id)_keyForSessionCountOverFirstSessionMinimumDurationWithActivityType:(unsigned int)arg1;
+ (id)_keyForSessionCountWithActivityType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)_transaction_mergeInboxKeyValuesIntoLocalWithError:(id*)arg1 numberOfMergedValues:(unsigned int*)arg2;
- (BOOL)_transaction_removeDuplicateAddedAchievementsWithError:(id*)arg1;
- (id)_valueForKey:(id)arg1;
- (unsigned int)achievementDoctorRunCount;
- (unsigned int)achievementDoctorRunCountFromDatabase;
- (id)achievements;
- (void)addAchievement:(id)arg1;
- (void)addAchievements:(id)arg1;
- (double)bestBriskMinutes;
- (double)bestCalorieBurnGoalMetCalories;
- (unsigned int)bestConsecutiveCompleteDays;
- (double)bestDailyCalorieBurn;
- (double)bestDistance;
- (unsigned int)bestOneTimeStepCount;
- (double)bestSessionCaloriesForActivityType:(unsigned int)arg1;
- (unsigned int)bestSessionCountAnyWeek;
- (long long)briskMinutesFirstCheckedActivitySummaryIndex;
- (long long)briskMinutesLastCheckedActivitySummaryIndex;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (id)cachedValues;
- (long long)caloriesBurnedFirstCheckedActivitySummaryIndex;
- (long long)caloriesBurnedLastCheckedActivitySummaryIndex;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (BOOL)commit:(id*)arg1;
- (unsigned int)consecutiveBriskMinutesGoalsMet;
- (unsigned int)consecutiveCompleteDays;
- (unsigned int)consecutiveStandingHoursGoalsMet;
- (unsigned int)countOfUnalertedAchievements;
- (unsigned int)currentGoalConsecutiveCompleteDays;
- (id)currentRunError;
- (id)currentRunErroredPropertyKey;
- (id)dateForKey:(id)arg1;
- (double)distanceToday;
- (double)doubleForKey:(id)arg1;
- (id)healthDaemon;
- (id)init;
- (id)initWithHealthDaemon:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (id)lastAwardedSevenWorkoutWeekStartDate;
- (id)lastDistanceDate;
- (id)lastPerfectWeekAllDate;
- (id)lastPerfectWeekBriskMinutesDate;
- (id)lastPerfectWeekCaloriesBurnedDate;
- (id)lastPerfectWeekStandDate;
- (long long)lastResetSummaryIndexForExerciseGoal;
- (long long)lastResetSummaryIndexForMoveGoal;
- (long long)lastResetSummaryIndexForStandGoal;
- (long long)lastSessionAnchor;
- (id)lastSessionEndDate;
- (double)latestCalorieBurnGoalMetCalories;
- (unsigned int)lifetimeCompleteDays;
- (void)markAchievementAlerted:(id)arg1;
- (unsigned int)sessionCountForActivityType:(unsigned int)arg1;
- (unsigned int)sessionCountOverFirstSessionMininumDurationForActivityType:(unsigned int)arg1;
- (void)setAchievementDoctorRunCount:(unsigned int)arg1;
- (void)setAchievements:(id)arg1;
- (void)setBestBriskMinutes:(double)arg1;
- (void)setBestCalorieBurnGoalMetCalories:(double)arg1;
- (void)setBestConsecutiveCompleteDays:(unsigned int)arg1;
- (void)setBestDailyCalorieBurn:(double)arg1;
- (void)setBestDistance:(double)arg1;
- (void)setBestOneTimeStepCount:(unsigned int)arg1;
- (void)setBestSessionCalories:(double)arg1 forActivityType:(unsigned int)arg2;
- (void)setBestSessionCountAnyWeek:(unsigned int)arg1;
- (void)setBriskMinutesFirstCheckedActivitySummaryIndex:(long long)arg1;
- (void)setBriskMinutesLastCheckedActivitySummaryIndex:(long long)arg1;
- (void)setBriskMinutesToday:(double)arg1;
- (void)setBriskMinutesYesterday:(double)arg1;
- (void)setCachedValues:(id)arg1;
- (void)setCaloriesBurnedFirstCheckedActivitySummaryIndex:(long long)arg1;
- (void)setCaloriesBurnedLastCheckedActivitySummaryIndex:(long long)arg1;
- (void)setCaloriesBurnedToday:(double)arg1;
- (void)setCaloriesBurnedYesterday:(double)arg1;
- (void)setConsecutiveBriskMinutesGoalsMet:(unsigned int)arg1;
- (void)setConsecutiveCompleteDays:(unsigned int)arg1;
- (void)setConsecutiveStandingHoursGoalsMet:(unsigned int)arg1;
- (void)setCurrentGoalConsecutiveCompleteDays:(unsigned int)arg1;
- (void)setCurrentRunError:(id)arg1;
- (void)setCurrentRunErroredPropertyKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDistanceToday:(double)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setHealthDaemon:(id)arg1;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (void)setLastAwardedSevenWorkoutWeekStartDate:(id)arg1;
- (void)setLastDistanceDate:(id)arg1;
- (void)setLastPerfectWeekAllDate:(id)arg1;
- (void)setLastPerfectWeekBriskMinutesDate:(id)arg1;
- (void)setLastPerfectWeekCaloriesBurnedDate:(id)arg1;
- (void)setLastPerfectWeekStandDate:(id)arg1;
- (void)setLastResetSummaryIndexForExerciseGoal:(long long)arg1;
- (void)setLastResetSummaryIndexForMoveGoal:(long long)arg1;
- (void)setLastResetSummaryIndexForStandGoal:(long long)arg1;
- (void)setLastSessionAnchor:(long long)arg1;
- (void)setLastSessionEndDate:(id)arg1;
- (void)setLatestCalorieBurnGoalMetCalories:(double)arg1;
- (void)setLifetimeCompleteDays:(unsigned int)arg1;
- (void)setSessionCount:(unsigned int)arg1 activityType:(unsigned int)arg2;
- (void)setSessionCountOverFirstSessionMinimumDuration:(unsigned int)arg1 activityType:(unsigned int)arg2;
- (void)setStandingHoursLastCheckedActivitySummaryIndex:(long long)arg1;
- (void)setStandingHoursToday:(unsigned int)arg1;
- (void)setStandingHoursYesterday:(unsigned int)arg1;
- (void)setStepCountLastCheckedActivitySummaryIndex:(long long)arg1;
- (void)setStepCountToday:(unsigned int)arg1;
- (void)setStepCountYesterday:(unsigned int)arg1;
- (void)setTotalSessionCount:(unsigned int)arg1;
- (void)setUnsignedInteger:(unsigned int)arg1 forKey:(id)arg2;
- (void)setUpdatedValues:(id)arg1;
- (long long)standingHoursLastCheckedActivitySummaryIndex;
- (unsigned int)standingHoursToday;
- (unsigned int)standingHoursYesterday;
- (long long)stepCountLastCheckedActivitySummaryIndex;
- (unsigned int)stepCountToday;
- (unsigned int)stepCountYesterday;
- (unsigned int)totalSessionCount;
- (id)unalertedAchievements;
- (id)uncommittedAchievements;
- (unsigned int)unsignedIntegerForKey:(id)arg1;
- (id)updatedValues;

@end
