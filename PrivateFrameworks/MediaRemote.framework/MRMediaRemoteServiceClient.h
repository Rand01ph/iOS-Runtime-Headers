/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteServiceClient : NSObject {
    NSArray *_externalScreenTypeNotificationObservers;
    NSArray *_nowPlayingNotificationObservers;
    void *_nowPlayingPlaybackQueueContext;
    NSArray *_originNotificationObservers;
    BOOL _receivesExternalScreenTypeChangedNotifications;
    BOOL _receivesOriginChangedNotifications;
    BOOL _receivesPlaybackErrorNotifications;
    BOOL _receivesRoutesChangedNotifications;
    BOOL _receivesSupportedCommandsNotifications;
    BOOL _receivesVoiceInputRecordingStateNotifications;
    unsigned int _registeredNowPlayingObservers;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    NSArray *_routingNotificationObservers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct MRMediaRemoteService { } *_service;
    NSArray *_voiceInputNotificationObservers;
}

@property (nonatomic, retain) NSArray *externalScreenTypeNotificationObservers;
@property (nonatomic, retain) NSArray *nowPlayingNotificationObservers;
@property (getter=copyNowPlayingPlaybackQueueContext, nonatomic) void*nowPlayingPlaybackQueueContext;
@property (nonatomic, retain) NSArray *originNotificationObservers;
@property (nonatomic) BOOL receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) BOOL receivesOriginChangedNotifications;
@property (nonatomic) BOOL receivesPlaybackErrorNotifications;
@property (nonatomic) BOOL receivesRoutesChangedNotifications;
@property (nonatomic) BOOL receivesSupportedCommandsNotifications;
@property (nonatomic) BOOL receivesVoiceInputRecordingStateNotifications;
@property (getter=isRegisteredForNowPlayingNotifications, nonatomic, readonly) BOOL registeredForNowPlayingNotifications;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, retain) NSArray *routingNotificationObservers;
@property (nonatomic, readonly) struct MRMediaRemoteService { }*service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic, retain) NSArray *voiceInputNotificationObservers;

+ (id)sharedServiceClient;

- (void*)copyNowPlayingPlaybackQueueContext;
- (void)dealloc;
- (id)externalScreenTypeNotificationObservers;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (BOOL)isRegisteredForNowPlayingNotifications;
- (id)nowPlayingNotificationObservers;
- (id)originNotificationObservers;
- (BOOL)receivesExternalScreenTypeChangedNotifications;
- (BOOL)receivesOriginChangedNotifications;
- (BOOL)receivesPlaybackErrorNotifications;
- (BOOL)receivesRoutesChangedNotifications;
- (BOOL)receivesSupportedCommandsNotifications;
- (BOOL)receivesVoiceInputRecordingStateNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (void)registerOrigin:(struct _MROrigin { }*)arg1 withCompletion:(id /* block */)arg2;
- (id)registeredOrigins;
- (id)routingNotificationObservers;
- (struct MRMediaRemoteService { }*)service;
- (id)serviceQueue;
- (void)setExternalScreenTypeNotificationObservers:(id)arg1;
- (void)setNowPlayingNotificationObservers:(id)arg1;
- (void)setNowPlayingPlaybackQueueContext:(void*)arg1;
- (void)setOriginNotificationObservers:(id)arg1;
- (void)setReceivesExternalScreenTypeChangedNotifications:(BOOL)arg1;
- (void)setReceivesOriginChangedNotifications:(BOOL)arg1;
- (void)setReceivesPlaybackErrorNotifications:(BOOL)arg1;
- (void)setReceivesRoutesChangedNotifications:(BOOL)arg1;
- (void)setReceivesSupportedCommandsNotifications:(BOOL)arg1;
- (void)setReceivesVoiceInputRecordingStateNotifications:(BOOL)arg1;
- (void)setRoutingNotificationObservers:(id)arg1;
- (void)setVoiceInputNotificationObservers:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(id /* block */)arg1;
- (void)unregisterForNowPlayingNotifications;
- (void)unregisterOrigin:(struct _MROrigin { }*)arg1 withCompletion:(id /* block */)arg2;
- (id)voiceInputNotificationObservers;

@end
