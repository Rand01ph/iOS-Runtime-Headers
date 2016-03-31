/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSendParameters : NSObject <NSCopying> {
    NSMutableDictionary *_params;
}

@property (nonatomic, retain) NSData *accessToken;
@property (nonatomic, retain) NSString *accountUUID;
@property (nonatomic) BOOL activityContinuation;
@property (nonatomic, retain) NSString *alternateCallbackID;
@property (nonatomic, retain) NSArray *bulkedPayload;
@property (nonatomic) BOOL bypassDuet;
@property (nonatomic) BOOL bypassSizeCheck;
@property (nonatomic) BOOL bypassStorage;
@property (nonatomic, retain) NSNumber *command;
@property (nonatomic) BOOL compressPayload;
@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL daemonDeathResend;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *dataToEncrypt;
@property (nonatomic, retain) NSDictionary *deliveryStatusContext;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic, readonly, retain) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL disableAliasValidation;
@property (nonatomic, retain) NSArray *duetIdentifiersOverride;
@property (nonatomic) BOOL encryptPayload;
@property (nonatomic) BOOL enforceRemoteTimeouts;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic, readonly, retain) NSDate *expirationDate;
@property (nonatomic) BOOL fakeMessage;
@property (nonatomic) BOOL fireAndForget;
@property (nonatomic) BOOL forceEncryptionOff;
@property (nonatomic, retain) NSString *fromID;
@property (nonatomic) BOOL homeKitPayload;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *interestingRegistrationProperties;
@property (nonatomic) BOOL isProxiedOutgoingMessage;
@property (nonatomic) BOOL localDelivery;
@property (nonatomic, retain) NSString *localDestinationDeviceUUID;
@property (nonatomic, retain) NSString *mainAccountUUID;
@property (nonatomic, retain) NSDictionary *message;
@property (nonatomic, retain) NSData *messageUUID;
@property (nonatomic) BOOL nonWaking;
@property (nonatomic, retain) NSString *originalfromID;
@property (nonatomic, retain) NSString *peerResponseIdentifier;
@property (nonatomic) int priority;
@property (nonatomic, retain) NSDictionary *protobuf;
@property (nonatomic, retain) NSString *queueOneIdentifier;
@property (nonatomic, retain) NSArray *requireAllRegistrationProperties;
@property (nonatomic) BOOL requireBluetooth;
@property (nonatomic, retain) NSArray *requireLackOfRegistrationProperties;
@property (nonatomic, retain) NSDictionary *resourceMetadata;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) NSString *subService;
@property (nonatomic, retain) NSString *subServiceAccountUUID;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL useDictAsTopLevel;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL wantsDeliveryStatus;
@property (nonatomic) BOOL wantsResponse;

- (id)accessToken;
- (id)accountUUID;
- (BOOL)activityContinuation;
- (id)alternateCallbackID;
- (id)bulkedPayload;
- (BOOL)bypassDuet;
- (BOOL)bypassSizeCheck;
- (BOOL)bypassStorage;
- (id)command;
- (BOOL)compressPayload;
- (BOOL)compressed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)daemonDeathResend;
- (id)data;
- (id)dataToEncrypt;
- (void)dealloc;
- (id)deliveryStatusContext;
- (id)destinations;
- (id)dictionaryRepresentation;
- (BOOL)disableAliasValidation;
- (id)duetIdentifiersOverride;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)encryptPayload;
- (BOOL)enforceRemoteTimeouts;
- (BOOL)expectsPeerResponse;
- (id)expirationDate;
- (BOOL)fakeMessage;
- (BOOL)fireAndForget;
- (BOOL)forceEncryptionOff;
- (id)fromID;
- (BOOL)homeKitPayload;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestingRegistrationProperties;
- (BOOL)isProxiedOutgoingMessage;
- (BOOL)localDelivery;
- (id)localDestinationDeviceUUID;
- (id)mainAccountUUID;
- (id)message;
- (id)messageUUID;
- (BOOL)nonWaking;
- (id)objectForKey:(id)arg1;
- (id)originalfromID;
- (id)peerResponseIdentifier;
- (int)priority;
- (id)protobuf;
- (id)queueOneIdentifier;
- (id)requireAllRegistrationProperties;
- (BOOL)requireBluetooth;
- (id)requireLackOfRegistrationProperties;
- (id)resourceMetadata;
- (id)resourcePath;
- (void)setAccessToken:(id)arg1;
- (void)setAccountUUID:(id)arg1;
- (void)setActivityContinuation:(BOOL)arg1;
- (void)setAlternateCallbackID:(id)arg1;
- (void)setBulkedPayload:(id)arg1;
- (void)setBypassDuet:(BOOL)arg1;
- (void)setBypassSizeCheck:(BOOL)arg1;
- (void)setBypassStorage:(BOOL)arg1;
- (void)setCommand:(id)arg1;
- (void)setCompressPayload:(BOOL)arg1;
- (void)setCompressed:(BOOL)arg1;
- (void)setDaemonDeathResend:(BOOL)arg1;
- (void)setData:(id)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDisableAliasValidation:(BOOL)arg1;
- (void)setDuetIdentifiersOverride:(id)arg1;
- (void)setEncryptPayload:(BOOL)arg1;
- (void)setEnforceRemoteTimeouts:(BOOL)arg1;
- (void)setExpectsPeerResponse:(BOOL)arg1;
- (void)setFakeMessage:(BOOL)arg1;
- (void)setFireAndForget:(BOOL)arg1;
- (void)setForceEncryptionOff:(BOOL)arg1;
- (void)setFromID:(id)arg1;
- (void)setHomeKitPayload:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterestingRegistrationProperties:(id)arg1;
- (void)setIsProxiedOutgoingMessage:(BOOL)arg1;
- (void)setLocalDelivery:(BOOL)arg1;
- (void)setLocalDestinationDeviceUUID:(id)arg1;
- (void)setMainAccountUUID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setNonWaking:(BOOL)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOriginalfromID:(id)arg1;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;
- (void)setRequireAllRegistrationProperties:(id)arg1;
- (void)setRequireBluetooth:(BOOL)arg1;
- (void)setRequireLackOfRegistrationProperties:(id)arg1;
- (void)setResourceMetadata:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setSubService:(id)arg1;
- (void)setSubServiceAccountUUID:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseDictAsTopLevel:(BOOL)arg1;
- (void)setWantsAppAck:(BOOL)arg1;
- (void)setWantsDeliveryStatus:(BOOL)arg1;
- (void)setWantsResponse:(BOOL)arg1;
- (id)subService;
- (id)subServiceAccountUUID;
- (double)timeout;
- (BOOL)useDictAsTopLevel;
- (BOOL)wantsAppAck;
- (BOOL)wantsDeliveryStatus;
- (BOOL)wantsResponse;

@end
