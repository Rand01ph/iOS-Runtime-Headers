/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKLayer : CALayer 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitBounds;
    struct CGPoint { 
        float x; 
        float y; 
    } _hitOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _hitOutset;
}

@property(readonly) CGRect hitBounds; /* unknown property attribute: V_hitBounds */
@property CGPoint hitOutset; /* unknown property attribute: V_hitOutset */
@property CGPoint hitOffset; /* unknown property attribute: V_hitOffset */


- (void)_updateHitBounds;
- (void)setHitOutset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHitOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitBounds;
- (struct CGPoint { float x1; float x2; })hitOutset;
- (struct CGPoint { float x1; float x2; })hitOffset;

@end