/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUBorderView : UIView {
    MPUBorderConfiguration *_borderConfiguration;
    BOOL _hidesWhenFullyTransparent;
}

@property (nonatomic, copy) MPUBorderConfiguration *borderConfiguration;
@property (nonatomic) BOOL hidesWhenFullyTransparent;
@property (nonatomic, readonly) float requiredOutsetForDropShadow;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } resizableImageCapInsets;

+ (float)requiredOutsetForDropShadow;

- (void).cxx_destruct;
- (id)borderConfiguration;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hidesWhenFullyTransparent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)requiredOutsetForDropShadow;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })resizableImageCapInsets;
- (void)setBorderConfiguration:(id)arg1;
- (void)setHidesWhenFullyTransparent:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
