/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKActivityRingView : UIView {
    HKActivitySummary *_activitySummary;
    _HKShapeView *_maskView;
    float _ringInsetPercentage;
    HKRingsView *_ringsView;
}

@property (nonatomic, retain) HKActivitySummary *activitySummary;
@property (getter=_ringInsetPercentage, setter=_setRingInsetPercentage:, nonatomic) float ringInsetPercentage;

- (void).cxx_destruct;
- (float)_ringDiameter;
- (float)_ringInsetPercentage;
- (void)_setActivityRingViewBackgroundColor:(id)arg1;
- (void)_setActivityRingViewBackgroundTransparent:(BOOL)arg1;
- (void)_setRingInsetPercentage:(float)arg1;
- (void)_setUpAfterInit;
- (void)_setUpRingsView;
- (void)_updateMaskPath;
- (void)_updateRingsViewDiameter;
- (id)activitySummary;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActivitySummary:(id)arg1;
- (void)setActivitySummary:(id)arg1 animated:(BOOL)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
