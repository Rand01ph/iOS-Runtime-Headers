/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_ISOCountryCode;
    NSString *_city;
    NSString *_country;
    NSString *_formattedAddress;
    NSString *_postalCode;
    NSString *_state;
    NSString *_street;
}

@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, readonly) NSMutableDictionary *addressDictionary;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formattedAddress;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)localizedStringForKey:(id)arg1;
+ (id)postalAddressWithDictionaryRepresentation:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)ISOCountryCode;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddress;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)postalCode;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setFormattedAddress:(id)arg1;
- (void)setISOCountryCode:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet:(id)arg1;
- (id)state;
- (id)street;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)addressFormatsDictionary;
+ (id)defaultCountryCode;
+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;
+ (id)localizedCountryNameForCountryCode:(id)arg1;
+ (id)postalAddressWithDictionary:(id)arg1;

- (id)addressDictionary;
- (id)keyboardSettingsForAddressPart:(id)arg1;

// Image: /System/Library/Frameworks/PassKit.framework/PassKit

+ (id)_ABKeyFromCNKey:(id)arg1;
+ (id)_CNKeyFromABKey:(id)arg1;
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;

- (id)backwardsCompatibleDictionaryRepresentation;
- (id)redactedPostalAddress;
- (id)redactedStreetAddress;
- (id)suggestedCountryCode;

@end
