/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class MCProfile, NSString;



@interface MCPayload : NSObject 
{
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    NSInteger _version;
    NSString *_persistentResourceID;
}

@property(readonly) NSString *friendlyName;
@property(readonly) NSArray *installationWarnings;
@property(retain) NSString *persistentResourceID;
@property(readonly) NSInteger version;
@property(readonly) NSString *UUID;
@property(readonly) NSString *organization;
@property(readonly) NSString *identifier;
@property(retain) NSString *displayName;
@property(readonly) NSString *payloadDescription;
@property(readonly) NSString *type;
@property(readonly) MCProfile *profile;

+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)wrapperPayloadDictionary;
+ (id)typeStrings;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (NSInteger)version;
- (id)identifier;
- (id)type;
- (id)title;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)subtitle1Description;
- (id)subtitle2Description;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)persistentResourceID;
- (id)payloadDescription;
- (void)setPersistentResourceID:(id)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (id)stubDictionary;
- (id)organization;
- (id)installationWarnings;
- (id)friendlyName;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)UUID;
- (id)profile;

@end