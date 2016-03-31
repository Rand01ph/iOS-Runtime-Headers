/* Generated by RuntimeBrowser.
 */

@protocol RWIProtocolCSSDomainHandler <NSObject>

@required

- (void)addRuleWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3 selector:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSRule *, void*, NSString *, NSString *
- (void)createStyleSheetWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 frameId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, NSString *
- (void)disableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)enableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)forcePseudoStateWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 forcedPseudoClasses:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSArray *
- (void)getAllStyleSheetsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)getComputedStyleForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, int
- (void)getInlineStylesForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, id*, id, int
- (void)getMatchedStylesForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 includePseudo:(void *)arg4 includeInherited:(void *)arg5; // needs 5 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, id*, id, id, int, BOOL*, BOOL*
- (void)getNamedFlowCollectionWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 documentNodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, int
- (void)getStyleSheetTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, NSString *
- (void)getStyleSheetWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSStyleSheetBody *, void*, NSString *
- (void)getSupportedCSSPropertiesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)setRuleSelectorWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 ruleId:(void *)arg3 selector:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSRule *, void*, RWIProtocolCSSRuleId *, NSString *
- (void)setStyleSheetTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3 text:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *, NSString *
- (void)setStyleTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleId:(void *)arg3 text:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSStyle *, void*, RWIProtocolCSSStyleId *, NSString *

@end
