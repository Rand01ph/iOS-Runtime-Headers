/* Generated by RuntimeBrowser.
 */

@protocol WBSHistoryLoader <NSObject>

@required

- (id)initWithURL:(NSURL *)arg1 itemCountLimit:(unsigned int)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void)startLoading;
- (void)waitForLoadingToComplete;

@end
