/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    BOOL _firstResponder;
    UIView *_leftPaddingView;
    SBUIButton *_okButton;
    UILabel *_promptLabel;
    UIView *_rightPaddingView;
    BOOL _showsOkButton;
    BOOL _showsPromptLabel;
    UIView *_springView;
    UIView *_springViewParent;
}

@property (nonatomic, readonly) UIButton *okButton;
@property (nonatomic, readonly) UILabel *promptLabel;
@property (nonatomic) BOOL showsOkButton;
@property (nonatomic) BOOL showsPromptLabel;

+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+ (BOOL)_usesTextFieldForFirstResponder;

- (void).cxx_destruct;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg1;
- (void)_getPasscodeFieldSize:(struct CGSize { float x1; float x2; }*)arg1 okButtonSize:(struct CGSize { float x1; float x2; }*)arg2;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_okButtonHit;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_viewSize;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (id)okButton;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)promptLabel;
- (BOOL)resignFirstResponder;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setShowsOkButton:(BOOL)arg1;
- (void)setShowsPromptLabel:(BOOL)arg1;
- (BOOL)showsOkButton;
- (BOOL)showsPromptLabel;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;

@end
