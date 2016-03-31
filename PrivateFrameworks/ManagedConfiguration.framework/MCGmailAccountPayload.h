/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCGmailAccountPayload : MCPayload {
    NSString *_accountDescription;
    NSString *_accountName;
    NSString *_emailAddress;
}

@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, readonly, retain) NSString *accountName;
@property (nonatomic, readonly, retain) NSString *emailAddress;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountName;
- (id)description;
- (id)emailAddress;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)mustInstallNonInteractively;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;

@end
