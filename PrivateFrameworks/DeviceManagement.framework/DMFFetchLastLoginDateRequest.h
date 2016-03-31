/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchLastLoginDateRequest : CATTaskRequest {
    NSSet *_appleIDs;
}

@property (nonatomic, copy) NSSet *appleIDs;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)appleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppleIDs:(id)arg1;

@end
