/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayLayoutMonitor : NSObject <FBSDisplayLayoutMonitorClientDelegate> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    unsigned int _displayType;
    unsigned int _qualityOfService;
    NSObject<OS_dispatch_queue> *_queue;
    FBSDisplayLayoutMonitorClient *_queue_client;
    FBSDisplayLayout *_queue_currentLayout;
    id /* block */ _queue_handler;
    BOOL _queue_invalidated;
    NSHashTable *_queue_observers;
    BOOL _sharedInstance;
}

@property (nonatomic, readonly, retain) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int displayType;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int qualityOfService;
@property (readonly) Class superclass;

+ (id)sharedMonitorForDisplayType:(unsigned int)arg1;

- (void)_calloutQueue_postLayout:(id)arg1 withContext:(id)arg2 toObserver:(id)arg3;
- (id)_observers;
- (void)_queue_updateClient;
- (void)_queue_updateLayout:(id)arg1 withContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 handleNewDisplayLayout:(id)arg2 withContext:(id)arg3;
- (unsigned int)clientDisplayType:(id)arg1;
- (unsigned int)clientQualityOfService:(id)arg1;
- (id)currentLayout;
- (void)dealloc;
- (unsigned int)displayType;
- (id /* block */)handler;
- (id)initWithDisplayType:(unsigned int)arg1;
- (id)initWithDisplayType:(unsigned int)arg1 handler:(id /* block */)arg2;
- (id)initWithDisplayType:(unsigned int)arg1 qualityOfService:(unsigned int)arg2 handler:(id /* block */)arg3;
- (void)invalidate;
- (unsigned int)qualityOfService;
- (void)removeObserver:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
