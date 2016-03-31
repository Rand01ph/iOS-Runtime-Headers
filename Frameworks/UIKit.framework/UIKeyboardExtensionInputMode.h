/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {
    NSExtension *_extension;
}

@property (nonatomic, retain) NSExtension *extension;

- (id)containingBundle;
- (id)containingBundleDisplayName;
- (void)dealloc;
- (BOOL)defaultLayoutIsASCIICapable;
- (id)displayName;
- (id)extendedDisplayName;
- (id)extension;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isAllowedForTraits:(id)arg1;
- (BOOL)isDefaultRightToLeft;
- (BOOL)isDesiredForTraits:(id)arg1;
- (BOOL)isExtensionInputMode;
- (id)normalizedIdentifierLevels;
- (void)setExtension:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;

@end
