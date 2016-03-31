/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {
    NSArray *_alternativeStrings;
}

+ (BOOL)supportsSecureCoding;

- (id)alternativeStrings;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;

@end
