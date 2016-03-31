/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPPassphraseEntryPane : DevicePINPane {
    BOOL _formPresentation;
    CDPPaneHeaderView *_headerView;
    float _keyboardOffset;
}

@property (nonatomic) BOOL formPresentation;

- (void).cxx_destruct;
- (void)_keyboardLayoutChanged;
- (void)_layoutHeaderRect;
- (void)_layoutPinViewWithHeight:(float)arg1;
- (void)_layoutSubviews;
- (void)dealloc;
- (BOOL)formPresentation;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSmallScreen;
- (float)keyboardHeightOffset;
- (void)layoutSubviews;
- (void)setFormPresentation:(BOOL)arg1;

@end
