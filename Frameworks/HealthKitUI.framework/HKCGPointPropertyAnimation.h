/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKCGPointPropertyAnimation : HKAnimatableObjectPropertyAnimation {
    struct CGPoint { 
        float x; 
        float y; 
    } _currentValue;
    struct CGPoint { 
        float x; 
        float y; 
    } _endValue;
    struct CGPoint { 
        float x; 
        float y; 
    } _startValue;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } currentValue;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } endValue;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } startValue;

+ (id)animationWithEndingCGPointValue:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(id /* block */)arg4;

- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (struct CGPoint { float x1; float x2; })currentValue;
- (struct CGPoint { float x1; float x2; })endValue;
- (struct CGPoint { float x1; float x2; })startValue;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end
