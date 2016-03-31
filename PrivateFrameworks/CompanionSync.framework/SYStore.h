/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStore : NSObject <SYChangeSerializer, SYChangeTrackingWithErrors, SYServiceDelegate> {
    BOOL _allowsDeletes;
    <SYStoreDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct { 
        unsigned int delegateWillUpdate : 1; 
        unsigned int delegateWillUpdateWithCount : 1; 
        unsigned int delegateDidUpdate : 1; 
        unsigned int delegateDidCompleteFullSync : 1; 
        unsigned int delegateAllObjectsDeleted : 1; 
        unsigned int delegateAllObjects : 1; 
        unsigned int delegateShouldPerformInitialSync : 1; 
        unsigned int delegateBeginSyncingAllObjects : 1; 
        unsigned int delegateShouldDeleteOnFailedSync : 1; 
        unsigned int delegateErrorInFullSync : 1; 
        unsigned int delegateStoreEncounteredError : 1; 
        unsigned int delegateDidPair : 1; 
        unsigned int delegateDidUnpair : 1; 
        unsigned int delegateSentMessage : 1; 
        unsigned int delegatePeerProcessedMessage : 1; 
        unsigned int delegateSentLastSyncMessage : 1; 
    } _flags;
    int _maxBytesInFlight;
    SYStoreResetSessionOwner *_pendingResetSessionOwner;
    SYPersistentStore *_persistentStore;
    NSObject<OS_dispatch_queue> *_qosTargetQueue;
    <SYSerialization> *_serializer;
    SYStoreSessionOwner *_sessionOwner;
    SYAtomicFIFO *_sessionQueue;
    SYService *_syService;
}

@property (nonatomic) BOOL allowsDeletes;
@property (nonatomic, copy) NSDictionary *customIDSDeliveryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYStoreDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) unsigned int deliveryQOS;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasCompletedFullSync;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL inDeltaSync;
@property (nonatomic) int maxBytesInFlight;
@property (getter=isPaired, nonatomic, readonly) BOOL paired;
@property (nonatomic, retain) SYStoreResetSessionOwner *pendingResetSessionOwner;
@property (nonatomic, readonly) SYPersistentStore *persistentStore;
@property (nonatomic) int priority;
@property (nonatomic, retain) <SYSerialization> *serializer;
@property (nonatomic, retain) SYStoreSessionOwner *sessionOwner;
@property (nonatomic, readonly) SYAtomicFIFO *sessionQueue;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SYService *syService;
@property (nonatomic) double timeToLive;

- (void).cxx_destruct;
- (void)_enqueueDeltaSessionWithChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(id /* block */)arg5;
- (void)_signalNextQueuedSession;
- (void)_startIncomingSession:(id)arg1;
- (BOOL)_startResetSyncSession:(id)arg1 error:(id*)arg2;
- (void)_transaction:(id /* block */)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(id /* block */)arg5;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 completion:(id /* block */)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (BOOL)addObject:(id)arg1 error:(id*)arg2;
- (BOOL)allowsDeletes;
- (void)blockingTransaction:(id /* block */)arg1;
- (void)blockingTransaction:(id /* block */)arg1 handlingError:(id /* block */)arg2;
- (id)changeFromData:(id)arg1 ofType:(int)arg2;
- (id)customIDSDeliveryOptions;
- (id)dataFromChange:(id)arg1;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(int)arg2 ofType:(int)arg3;
- (id)decodeSYObject:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)deleteObject:(id)arg1;
- (void)deleteObject:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (BOOL)deleteObject:(id)arg1 error:(id*)arg2;
- (unsigned int)deliveryQOS;
- (void)didEndDeltaSync;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(int)arg2;
- (id)encodeSYObject:(id)arg1;
- (BOOL)hasCompletedFullSync;
- (BOOL)inDeltaSync;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(int)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(int)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithServiceName:(id)arg1 priority:(int)arg2 isMasterStore:(BOOL)arg3;
- (BOOL)isPaired;
- (int)maxBytesInFlight;
- (id)pendingResetSessionOwner;
- (id)persistentStore;
- (int)priority;
- (BOOL)resume:(id*)arg1;
- (id)serializer;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (void)service:(id)arg1 incomingData:(id)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 identifier:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (id)sessionOwner;
- (id)sessionQueue;
- (void)setAllowsDeletes:(BOOL)arg1;
- (void)setCustomIDSDeliveryOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryQOS:(unsigned int)arg1;
- (void)setMaxBytesInFlight:(int)arg1;
- (void)setNeedsFullSync;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)setPendingResetSessionOwner:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSessionOwner:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (int)state;
- (id)syService;
- (double)timeToLive;
- (void)transaction:(id /* block */)arg1;
- (void)transaction:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)transaction:(id /* block */)arg1 context:(id)arg2;
- (void)transaction:(id /* block */)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)transaction:(id /* block */)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4;
- (void)transaction:(id /* block */)arg1 handlingError:(id /* block */)arg2;
- (void)updateObject:(id)arg1;
- (void)updateObject:(id)arg1 completion:(id /* block */)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (BOOL)updateObject:(id)arg1 error:(id*)arg2;
- (void)willBeginDeltaSync;

@end
