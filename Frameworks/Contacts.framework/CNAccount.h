/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {
    NSString *_externalIdentifierString;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *_cnui_displayName;
@property (getter=_cnui_isFacebook, nonatomic, readonly) BOOL _cnui_facebook;
@property (nonatomic, readonly, copy) NSString *externalIdentifierString;
@property (nonatomic, readonly, copy) NSString *identifier;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)identifierProvider;
+ (id)localAccount;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForAccountForContainerWithIdentifier:(id)arg1;
+ (id)predicateForAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForAccountsWithIdentifiers:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifierString;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_cnui_accountStore;
+ (void)_cnui_canRequestRefreshWithCompletion:(id /* block */)arg1;
+ (BOOL)_cnui_requestRefreshWithUserAction:(BOOL)arg1;

- (id)_cnui_displayName;
- (BOOL)_cnui_isFacebook;

@end
