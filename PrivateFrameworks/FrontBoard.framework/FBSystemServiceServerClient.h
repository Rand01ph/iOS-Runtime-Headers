/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceServerClient : BSBasicServerClient <FBSystemServiceClient> {
    NSString *_bundleID;
    NSString *_bundlePath;
    BOOL _extension;
    NSString *_facilityID;
    <FBSystemServiceFacilityClient> *_facilityclient;
    BOOL _suspended;
    BOOL _uiApp;
}

@property (getter=isUIApp, nonatomic) BOOL UIApp;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *bundlePath;
@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExtension, nonatomic) BOOL extension;
@property (nonatomic, retain) <FBSystemServiceFacilityClient> *facilityClient;
@property (nonatomic, retain) NSString *facilityID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, retain) FBProcess *process;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) BOOL suspended;

- (id)bundleID;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (id)facilityClient;
- (id)facilityID;
- (id)initWithConnection:(id)arg1;
- (BOOL)isExtension;
- (BOOL)isSuspended;
- (BOOL)isUIApp;
- (int)pid;
- (id)process;
- (void)resume;
- (void)setBundlePath:(id)arg1;
- (void)setExtension:(BOOL)arg1;
- (void)setFacilityClient:(id)arg1;
- (void)setFacilityID:(id)arg1;
- (void)setUIApp:(BOOL)arg1;
- (void)suspend;

@end
