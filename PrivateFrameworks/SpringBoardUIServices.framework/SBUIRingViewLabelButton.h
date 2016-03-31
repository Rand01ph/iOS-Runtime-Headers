/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRingViewLabelButton : UIControl {
    UILabel *_label;
    TPRevealingRingView *_ringView;
}

@property (nonatomic, readonly) TPRevealingRingView *backgroundRing;
@property (nonatomic, readonly) UILabel *label;

- (void).cxx_destruct;
- (id)backgroundRing;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setHighlighted:(BOOL)arg1;

@end
