/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditModel : NSObject <NSCopying> {
    int _appliedOrientation;
    BOOL _autoCropped;
    NSArray *_autoRedEyeCorrections;
    NSString *_autoSmartColorIdentifier;
    float _autoSmartColorLevel;
    NSString *_autoSmartToneIdentifier;
    float _autoSmartToneLevel;
    NSString *_autoWhiteBalanceIdentifier;
    NSDictionary *_autoWhiteBalanceSettings;
    float _blackPointLevelOffset;
    float _brightnessLevelOffset;
    float _bwGrainLevelOffset;
    float _bwHueLevelOffset;
    float _bwNeutralGammaLevelOffset;
    float _bwStrengthLevelOffset;
    float _bwToneLevelOffset;
    float _colorCastLevelOffset;
    float _colorContrastLevelOffset;
    float _colorVibrancyLevelOffset;
    float _contrastLevelOffset;
    int _cropConstraintHeight;
    int _cropConstraintWidth;
    NSString *_effectFilterName;
    int _effectFilterVersion;
    float _exposureLevelOffset;
    float _highlightsLevelOffset;
    NSArray *_legacyAutoEnhanceFilters;
    BOOL _legacyAutoEnhanceIsOn;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _normalizedCropRect;
    NSArray *_redEyeCorrections;
    float _shadowsLevelOffset;
    BOOL _smartBWEnabled;
    float _smartBWLevel;
    NSDictionary *_smartBWStatistics;
    BOOL _smartColorEnabled;
    float _smartColorLevel;
    NSDictionary *_smartColorStatistics;
    BOOL _smartToneEnabled;
    float _smartToneLevel;
    NSDictionary *_smartToneStatistics;
    float _straightenAngle;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _trimEndTimeOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _trimStartTimeOffset;
    BOOL _whiteBalanceEnabled;
    float _whiteBalanceFaceI;
    float _whiteBalanceFaceQ;
    float _whiteBalanceFaceStrength;
    float _whiteBalanceFaceWarmth;
}

@property (nonatomic, readonly) int appliedOrientation;
@property (getter=isAutoCropped, nonatomic, readonly) BOOL autoCropped;
@property (nonatomic, readonly, copy) NSArray *autoRedEyeCorrections;
@property (nonatomic, readonly, copy) NSString *autoSmartColorIdentifier;
@property (nonatomic, readonly) float autoSmartColorLevel;
@property (nonatomic, readonly, copy) NSString *autoSmartToneIdentifier;
@property (nonatomic, readonly) float autoSmartToneLevel;
@property (nonatomic, readonly, copy) NSString *autoWhiteBalanceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *autoWhiteBalanceSettings;
@property (nonatomic, readonly) float blackPointLevelOffset;
@property (nonatomic, readonly) float brightnessLevelOffset;
@property (nonatomic, readonly) float bwGrainLevelOffset;
@property (nonatomic, readonly) float bwHueLevelOffset;
@property (nonatomic, readonly) float bwNeutralGammaLevelOffset;
@property (nonatomic, readonly) float bwStrengthLevelOffset;
@property (nonatomic, readonly) float bwToneLevelOffset;
@property (nonatomic, readonly) float colorCastLevelOffset;
@property (nonatomic, readonly) float colorContrastLevelOffset;
@property (nonatomic, readonly) float colorVibrancyLevelOffset;
@property (nonatomic, readonly) float contrastLevelOffset;
@property (getter=isCropConstrained, nonatomic, readonly) BOOL cropConstrained;
@property (nonatomic, readonly) int cropConstraintHeight;
@property (nonatomic, readonly) int cropConstraintWidth;
@property (nonatomic, readonly, copy) NSString *effectFilterName;
@property (nonatomic, readonly) int effectFilterVersion;
@property (nonatomic, readonly) float exposureLevelOffset;
@property (nonatomic, readonly) BOOL hasAnyAutoEnhancement;
@property (nonatomic, readonly) BOOL hasIdentityCrop;
@property (nonatomic, readonly) BOOL hasRedEyeCorrections;
@property (nonatomic, readonly) float highlightsLevelOffset;
@property (nonatomic, readonly, copy) NSArray *legacyAutoEnhanceFilters;
@property (nonatomic, readonly) BOOL legacyAutoEnhanceIsOn;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic, readonly, copy) NSArray *redEyeCorrections;
@property (nonatomic, readonly) float shadowsLevelOffset;
@property (getter=isSmartBWEnabled, nonatomic, readonly) BOOL smartBWEnabled;
@property (nonatomic, readonly) float smartBWLevel;
@property (nonatomic, readonly, copy) NSDictionary *smartBWStatistics;
@property (getter=isSmartColorEnabled, nonatomic, readonly) BOOL smartColorEnabled;
@property (nonatomic, readonly) float smartColorLevel;
@property (nonatomic, readonly, copy) NSDictionary *smartColorStatistics;
@property (getter=isSmartToneEnabled, nonatomic, readonly) BOOL smartToneEnabled;
@property (nonatomic, readonly) float smartToneLevel;
@property (nonatomic, readonly, copy) NSDictionary *smartToneStatistics;
@property (nonatomic, readonly) float straightenAngle;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } trimEndTimeOffset;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } trimStartTimeOffset;
@property (getter=isWhiteBalanceEnabled, nonatomic, readonly) BOOL whiteBalanceEnabled;
@property (nonatomic, readonly) float whiteBalanceFaceI;
@property (nonatomic, readonly) float whiteBalanceFaceQ;
@property (nonatomic, readonly) float whiteBalanceFaceStrength;
@property (nonatomic, readonly) float whiteBalanceFaceWarmth;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)_identityModel;
+ (void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(struct { /* ? */ }**)arg3;
+ (void)_loadSubfilterReferenceLevelsIfNeeded;
+ (float)_referenceValueOfType:(int)arg1 fromLevels:(struct { float x1; float x2; float x3; })arg2;
+ (int)identityCropConstraint;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })identityNormalizedCropRect;
+ (int)identityOrientation;
+ (float)referenceBWGrainLevelOfType:(int)arg1;
+ (float)referenceBWHueLevelOfType:(int)arg1;
+ (float)referenceBWNeutralGammaLevelOfType:(int)arg1;
+ (float)referenceBWStrengthLevelOfType:(int)arg1;
+ (float)referenceBWToneLevelOfType:(int)arg1;
+ (float)referenceBlackPointLevelOfType:(int)arg1;
+ (float)referenceBrightnessLevelOfType:(int)arg1;
+ (float)referenceColorCastLevelOfType:(int)arg1;
+ (float)referenceColorContrastLevelOfType:(int)arg1;
+ (float)referenceColorVibrancyLevelOfType:(int)arg1;
+ (float)referenceContrastLevelOfType:(int)arg1;
+ (float)referenceExposureLevelOfType:(int)arg1;
+ (float)referenceHighlightsLevelOfType:(int)arg1;
+ (float)referenceShadowsLevelOfType:(int)arg1;
+ (float)referenceSmartBWLevelOfType:(int)arg1;
+ (float)referenceSmartColorLevelOfType:(int)arg1;
+ (float)referenceSmartToneLevelOfType:(int)arg1;
+ (float)referenceStraightenAngleOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceILevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceQLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceStrengthLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceWarmthLevelOfType:(int)arg1;

- (void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(float)arg3;
- (id)_debugDictionaryRepresentation;
- (BOOL)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(BOOL*)arg2;
- (int)appliedOrientation;
- (id)autoRedEyeCorrections;
- (id)autoSmartColorIdentifier;
- (float)autoSmartColorLevel;
- (id)autoSmartToneIdentifier;
- (float)autoSmartToneLevel;
- (id)autoWhiteBalanceIdentifier;
- (id)autoWhiteBalanceSettings;
- (float)blackPointLevelOffset;
- (float)brightnessLevelOffset;
- (float)bwGrainLevelOffset;
- (float)bwHueLevelOffset;
- (float)bwNeutralGammaLevelOffset;
- (float)bwStrengthLevelOffset;
- (float)bwToneLevelOffset;
- (float)colorCastLevelOffset;
- (float)colorContrastLevelOffset;
- (float)colorVibrancyLevelOffset;
- (float)contrastLevelOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cropConstraintHeight;
- (int)cropConstraintWidth;
- (void)dealloc;
- (id)description;
- (id)effectFilterName;
- (int)effectFilterVersion;
- (float)exposureLevelOffset;
- (BOOL)hasAnyAutoEnhancement;
- (BOOL)hasIdentityCrop;
- (BOOL)hasRedEyeCorrections;
- (float)highlightsLevelOffset;
- (id)init;
- (BOOL)isAutoCropped;
- (BOOL)isCropConstrained;
- (BOOL)isCropConstraintEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEffectFilterEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryIdentity;
- (BOOL)isIdentityModel;
- (BOOL)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartBWEnabled;
- (BOOL)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartColorEnabled;
- (BOOL)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartToneEnabled;
- (BOOL)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isTrimEqualToPhotoEditModel:(id)arg1;
- (BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1;
- (BOOL)isWhiteBalanceEnabled;
- (id)legacyAutoEnhanceFilters;
- (BOOL)legacyAutoEnhanceIsOn;
- (id)mutableCopy;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })normalizedCropRect;
- (id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1;
- (id)pl_aggregateNameForEffectFilter;
- (struct CGSize { float x1; float x2; })pl_dataCropConstraintSizeForImageGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pl_dataCropRectForImageGeometry:(id)arg1 straightenAngle:(float)arg2;
- (BOOL)pl_isCropConstraintEnabled;
- (BOOL)pl_isCropEnabled;
- (id)redEyeCorrections;
- (float)shadowsLevelOffset;
- (float)smartBWLevel;
- (id)smartBWStatistics;
- (float)smartColorLevel;
- (id)smartColorStatistics;
- (float)smartToneLevel;
- (id)smartToneStatistics;
- (float)straightenAngle;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trimEndTimeOffset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trimStartTimeOffset;
- (float)whiteBalanceFaceI;
- (float)whiteBalanceFaceQ;
- (float)whiteBalanceFaceStrength;
- (float)whiteBalanceFaceWarmth;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (BOOL)_pu_hasIrisConflicts;

@end
