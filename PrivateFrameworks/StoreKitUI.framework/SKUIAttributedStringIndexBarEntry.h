/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {
    NSAttributedString *_attributedString;
    NSDictionary *_defaultTextAttributes;
    BOOL _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedString;
@property (nonatomic, copy) NSDictionary *defaultTextAttributes;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_invalidateSynthesizedAttributedString;
- (id)_synthesizedAttributedString;
- (void)_tintColorDidChange;
- (id)attributedString;
- (id)defaultTextAttributes;
- (id)description;
- (id)entryAttributedString;
- (unsigned int)hash;
- (id)initWithAttributedString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setDefaultTextAttributes:(id)arg1;

@end