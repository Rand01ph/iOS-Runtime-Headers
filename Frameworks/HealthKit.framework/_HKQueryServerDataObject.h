/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKQueryServerDataObject : NSObject <NSSecureCoding> {
    _HKFilter *_filter;
    HKObjectType *_objectType;
    BOOL _shouldStayAliveAfterInitialResults;
}

@property (nonatomic, retain) _HKFilter *filter;
@property (nonatomic, retain) HKObjectType *objectType;
@property (nonatomic) BOOL shouldStayAliveAfterInitialResults;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (id)initWithCoder:(id)arg1;
- (id)objectType;
- (void)setFilter:(id)arg1;
- (void)setObjectType:(id)arg1;
- (void)setShouldStayAliveAfterInitialResults:(BOOL)arg1;
- (BOOL)shouldStayAliveAfterInitialResults;

@end
