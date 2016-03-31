/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKURLBag : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    AKURLSession *_URLSession;
    NSDictionary *_URLsByIdentifier;
    NSObject<OS_dispatch_queue> *_bagFetchQueue;
    NSDictionary *_environments;
    NSDate *_lastFetchedDate;
}

@property (nonatomic, readonly) NSString *APSEnvironment;
@property (nonatomic, readonly) unsigned int IDMSEnvironment;
@property (nonatomic, readonly) NSURL *absintheCertURL;
@property (nonatomic, readonly) NSURL *absintheSessionURL;
@property (nonatomic, readonly) NSURL *basicAuthURL;
@property (nonatomic, readonly) NSURL *changePasswordURL;
@property (nonatomic, readonly) NSURL *checkInURL;
@property (nonatomic, readonly) NSURL *configurationInfoURL;
@property (nonatomic, readonly) NSURL *createAppleIDURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *endProvisioningURL;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSURL *iForgotContinuationURL;
@property (nonatomic, readonly) NSURL *iForgotURL;
@property (nonatomic, readonly) NSURL *notificationAckURL;
@property (nonatomic, readonly) NSURL *startProvisioningURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *syncAnisetteURL;
@property (nonatomic, readonly) NSURL *tokenUpgradeURL;
@property (nonatomic, readonly) NSURL *trustedDevicesURL;
@property (nonatomic, readonly) NSURL *upgradeEligibilityCheckURL;
@property (nonatomic, readonly) NSURL *upgradeUIURL;
@property (nonatomic, readonly) NSURL *validateCodeURL;

+ (id)keyForEscapeHatchURL;
+ (BOOL)looksLikeiForgotURLKey:(id)arg1;
+ (id)sharedBag;

- (void).cxx_destruct;
- (id)APSEnvironment;
- (unsigned int)IDMSEnvironment;
- (void)_handleURLBagResponseWithData:(id)arg1 error:(id)arg2;
- (void)_requestNewURLBagIfNecessary;
- (id)_urlAtKey:(id)arg1;
- (id)absintheCertURL;
- (id)absintheSessionURL;
- (id)basicAuthURL;
- (id)changePasswordURL;
- (id)checkInURL;
- (id)configurationInfoURL;
- (id)createAppleIDURL;
- (id)endProvisioningURL;
- (id)escapeHatchURL;
- (id)iForgotContinuationURL;
- (id)iForgotURL;
- (id)init;
- (id)notificationAckURL;
- (void)refresh;
- (id)startProvisioningURL;
- (id)syncAnisetteURL;
- (id)tokenUpgradeURL;
- (id)trustedDevicesURL;
- (id)upgradeEligibilityCheckURL;
- (id)upgradeUIURL;
- (id)validateCodeURL;

@end
