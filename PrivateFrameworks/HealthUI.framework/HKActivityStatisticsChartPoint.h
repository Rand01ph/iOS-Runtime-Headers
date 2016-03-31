/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint> {
    NSDate *_date;
    NSNumber *_moveGoalValue;
    NSArray *_nodes;
    HKActivityStatisticsChartPointSummary *_summary;
    NSNumber *_totalActiveEnergyBurned;
    HKUnit *_unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_nodesCaloriesPercentDifference;
- (id)allYValues;
- (id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (id)userInfo;
- (id)xValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
