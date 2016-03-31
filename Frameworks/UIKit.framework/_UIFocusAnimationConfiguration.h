/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusAnimationConfiguration : NSObject <NSCopying> {
    unsigned int _animationOptions;
    double _focusingBaseDuration;
    double _focusingDelay;
    float _focusingDurationScaleFactorLowerBound;
    float _focusingDurationScaleFactorUpperBound;
    double _minimumFocusDuration;
    float _unfocusingBackgroundFadeDurationPercentage;
    double _unfocusingBaseDuration;
    float _unfocusingDurationScaleFactorLowerBound;
    float _unfocusingDurationScaleFactorUpperBound;
    double _unfocusingRepositionBaseDuration;
}

@property (nonatomic) unsigned int animationOptions;
@property (nonatomic) double focusingBaseDuration;
@property (nonatomic) double focusingDelay;
@property (nonatomic) float focusingDurationScaleFactorLowerBound;
@property (nonatomic) float focusingDurationScaleFactorUpperBound;
@property (nonatomic) double minimumFocusDuration;
@property (nonatomic) float unfocusingBackgroundFadeDurationPercentage;
@property (nonatomic) double unfocusingBaseDuration;
@property (nonatomic) float unfocusingDurationScaleFactorLowerBound;
@property (nonatomic) float unfocusingDurationScaleFactorUpperBound;
@property (nonatomic) double unfocusingRepositionBaseDuration;

+ (id)configurationWithStyle:(int)arg1;

- (float)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (float)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (float)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (float)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (unsigned int)animationOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)focusingBaseDuration;
- (double)focusingDelay;
- (float)focusingDurationScaleFactorLowerBound;
- (float)focusingDurationScaleFactorUpperBound;
- (id)init;
- (double)minimumFocusDuration;
- (void)setAnimationOptions:(unsigned int)arg1;
- (void)setFocusingBaseDuration:(double)arg1;
- (void)setFocusingDelay:(double)arg1;
- (void)setFocusingDurationScaleFactorLowerBound:(float)arg1;
- (void)setFocusingDurationScaleFactorUpperBound:(float)arg1;
- (void)setMinimumFocusDuration:(double)arg1;
- (void)setUnfocusingBackgroundFadeDurationPercentage:(float)arg1;
- (void)setUnfocusingBaseDuration:(double)arg1;
- (void)setUnfocusingDurationScaleFactorLowerBound:(float)arg1;
- (void)setUnfocusingDurationScaleFactorUpperBound:(float)arg1;
- (void)setUnfocusingRepositionBaseDuration:(double)arg1;
- (float)unfocusingBackgroundFadeDurationPercentage;
- (double)unfocusingBaseDuration;
- (float)unfocusingDurationScaleFactorLowerBound;
- (float)unfocusingDurationScaleFactorUpperBound;
- (double)unfocusingRepositionBaseDuration;

@end
