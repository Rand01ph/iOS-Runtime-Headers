/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHealthKitAchievementStatistics : PBCodable <NSCopying> {
    long long _consecutiveBriskMinuteGoalsMet;
    long long _consecutiveCompleteDays;
    long long _consecutiveStandingHoursGoalsMet;
    long long _currentCalorieGoalConsecutiveCompleteDays;
    struct { 
        unsigned int consecutiveBriskMinuteGoalsMet : 1; 
        unsigned int consecutiveCompleteDays : 1; 
        unsigned int consecutiveStandingHoursGoalsMet : 1; 
        unsigned int currentCalorieGoalConsecutiveCompleteDays : 1; 
    } _has;
}

@property (nonatomic) long long consecutiveBriskMinuteGoalsMet;
@property (nonatomic) long long consecutiveCompleteDays;
@property (nonatomic) long long consecutiveStandingHoursGoalsMet;
@property (nonatomic) long long currentCalorieGoalConsecutiveCompleteDays;
@property (nonatomic) BOOL hasConsecutiveBriskMinuteGoalsMet;
@property (nonatomic) BOOL hasConsecutiveCompleteDays;
@property (nonatomic) BOOL hasConsecutiveStandingHoursGoalsMet;
@property (nonatomic) BOOL hasCurrentCalorieGoalConsecutiveCompleteDays;

- (long long)consecutiveBriskMinuteGoalsMet;
- (long long)consecutiveCompleteDays;
- (long long)consecutiveStandingHoursGoalsMet;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentCalorieGoalConsecutiveCompleteDays;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConsecutiveBriskMinuteGoalsMet;
- (BOOL)hasConsecutiveCompleteDays;
- (BOOL)hasConsecutiveStandingHoursGoalsMet;
- (BOOL)hasCurrentCalorieGoalConsecutiveCompleteDays;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConsecutiveBriskMinuteGoalsMet:(long long)arg1;
- (void)setConsecutiveCompleteDays:(long long)arg1;
- (void)setConsecutiveStandingHoursGoalsMet:(long long)arg1;
- (void)setCurrentCalorieGoalConsecutiveCompleteDays:(long long)arg1;
- (void)setHasConsecutiveBriskMinuteGoalsMet:(BOOL)arg1;
- (void)setHasConsecutiveCompleteDays:(BOOL)arg1;
- (void)setHasConsecutiveStandingHoursGoalsMet:(BOOL)arg1;
- (void)setHasCurrentCalorieGoalConsecutiveCompleteDays:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
