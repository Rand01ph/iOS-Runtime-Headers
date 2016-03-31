/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECXPCObjectFactory : NSObject {
    unsigned int _allowBattery;
    long long _intervalHours;
    long long _intervalMinutes;
    long long _intervalSeconds;
    unsigned int _priorityLevel;
    BOOL _repeating;
    BOOL _requireClassC;
    BOOL _requireScreenSleep;
}

@property (nonatomic) long long intervalHours;
@property (nonatomic) long long intervalMinutes;
@property (nonatomic) long long intervalSeconds;
@property (nonatomic) BOOL repeating;
@property (nonatomic) BOOL requireClassC;
@property (nonatomic) BOOL requireScreenSleep;

- (const char *)_activityPriority;
- (long long)_getInterval;
- (BOOL)_shouldAllowBattery;
- (void)allowBattery;
- (void)disallowBattery;
- (id)getXPCObject;
- (id)init;
- (long long)intervalHours;
- (long long)intervalMinutes;
- (long long)intervalSeconds;
- (BOOL)repeating;
- (BOOL)requireClassC;
- (BOOL)requireScreenSleep;
- (void)setIntervalHours:(long long)arg1;
- (void)setIntervalMinutes:(long long)arg1;
- (void)setIntervalSeconds:(long long)arg1;
- (void)setPriorityLevelMaintenance;
- (void)setPriorityLevelUtility;
- (void)setRepeating:(BOOL)arg1;
- (void)setRequireClassC:(BOOL)arg1;
- (void)setRequireScreenSleep:(BOOL)arg1;

@end
