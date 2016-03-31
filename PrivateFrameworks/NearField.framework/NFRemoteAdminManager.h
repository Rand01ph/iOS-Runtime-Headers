/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFRemoteAdminManager : NSObject <NFRemoteAdminManagerCallbacks, NSXPCConnectionDelegate> {
    NSXPCConnection *_connection;
    NSMutableSet *_eventListeners;
    BOOL _hasEventListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedRemoteAdminManager;

- (void)_checkForConnectionReset;
- (void)connectToServer:(id)arg1 callback:(id /* block */)arg2;
- (void)dealloc;
- (void)didCloseXPCConnection:(id)arg1;
- (id)init;
- (id)nextRequestForServer:(id)arg1;
- (BOOL)queueServerConnection:(id)arg1;
- (BOOL)queueServerConnectionForApplets:(id)arg1;
- (void)registerEventListener:(id)arg1;
- (id)registrationInfo;
- (void)remoteAdminCleanupProgress:(double)arg1;
- (BOOL)setRegistrationInfo:(id)arg1;
- (void)unregisterEventListener:(id)arg1;

@end
