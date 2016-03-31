/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUModelObject : NSObject <NSCopying> {
    MPUIdentiferSet *_identifiers;
    NSMutableSet *_initializedProperties;
    BOOL _wasFullyInitialized;
}

@property (nonatomic, readonly, copy) MPUIdentiferSet *identifiers;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initializedProperties;
- (BOOL)_wasFullyInitialized;
- (void)appendIdentifiersToDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithType:(unsigned int)arg1;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 block:(id /* block */)arg2;

@end
