/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUTimeAxisDescriptor : NSObject <FUAxisDescriptor> {
    FUDateAnchorRule *_anchorRule;
    float _axisDescriptorPadding;
    NSDateComponents *_axisSpacing;
    NSMutableArray *_cachedAxisLabelColors;
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableDictionary *_dayFormatters;
    BOOL _generateSubAxisDescriptorOnlyForNoonMidnight;
    BOOL _hideClippedLabels;
    UIColor *_highlightedLabelColor;
    UIColor *_highlightedSubLabelColor;
    NSMutableDictionary *_hourFormatters;
    unsigned int _labelAlignment;
    UIFont *_labelFont;
    id _maxValue;
    id _minValue;
    NSMutableDictionary *_monthFormatters;
    UIColor *_selectedLabelColor;
    FUDateAnchorRule *_subAnchorRule;
    BOOL _subAxisCapitalize;
    float _subAxisDescriptorPadding;
    NSDateComponents *_subAxisSpacing;
    float _subAxisVerticalPadding;
    UIFont *_subLabelFont;
    unsigned int _subTextStyle;
    unsigned int _subTimeInterval;
    unsigned int _textStyle;
    unsigned int _timeInterval;
    UIColor *_unhighlightedLabelColor;
    UIColor *_unhighlightedSubLabelColor;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_yearFormatters;
}

@property (nonatomic, retain) FUDateAnchorRule *anchorRule;
@property (nonatomic) float axisDescriptorPadding;
@property (nonatomic, retain) NSDateComponents *axisSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL generateSubAxisDescriptorOnlyForNoonMidnight;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideClippedLabels;
@property (nonatomic, retain) UIColor *highlightedLabelColor;
@property (nonatomic, retain) UIColor *highlightedSubLabelColor;
@property (nonatomic) unsigned int labelAlignment;
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, retain) id maxValue;
@property (nonatomic, retain) id minValue;
@property (nonatomic, retain) UIColor *selectedLabelColor;
@property (nonatomic, retain) FUDateAnchorRule *subAnchorRule;
@property (nonatomic) BOOL subAxisCapitalize;
@property (nonatomic) float subAxisDescriptorPadding;
@property (nonatomic, retain) NSDateComponents *subAxisSpacing;
@property (nonatomic) float subAxisVerticalPadding;
@property (nonatomic, retain) UIFont *subLabelFont;
@property (nonatomic) unsigned int subTextStyle;
@property (nonatomic) unsigned int subTimeInterval;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int textStyle;
@property (nonatomic) unsigned int timeInterval;
@property (nonatomic, retain) UIColor *unhighlightedLabelColor;
@property (nonatomic, retain) UIColor *unhighlightedSubLabelColor;

+ (unsigned int)_getSpacingInterval:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_assertPropertiesValid;
- (void)_clearCache;
- (void)_clearFormatters;
- (void)_generateAxisLabels;
- (void)_generateAxisSubLabels;
- (id)_getLabelsForSpacingInterval:(unsigned int)arg1 withSpacing:(id)arg2 textStyle:(unsigned int)arg3;
- (id)_getStartDateFromTimeInterval:(unsigned int)arg1;
- (id)_getSubLabelsForSpacingInterval:(unsigned int)arg1 withSpacing:(id)arg2 textStyle:(unsigned int)arg3;
- (int)_hourComponentFromDate:(id)arg1;
- (id)_labelAtIndex:(unsigned int)arg1;
- (id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned int)arg2 textStyle:(unsigned int)arg3;
- (id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned int)arg2 textStyle:(unsigned int)arg3;
- (id)_subLabelAtIndex:(unsigned int)arg1;
- (id)anchorRule;
- (float)axisDescriptorPadding;
- (id)axisLabels;
- (id)axisSpacing;
- (id)axisSubLabels;
- (id)dayFormatter:(unsigned int)arg1;
- (Class)expectedDataType;
- (BOOL)generateSubAxisDescriptorOnlyForNoonMidnight;
- (BOOL)hideClippedLabels;
- (id)highlightedLabelColor;
- (id)highlightedSubLabelColor;
- (id)hourFormatter:(unsigned int)arg1;
- (id)init;
- (void)invalidateCaches;
- (unsigned int)labelAlignment;
- (id)labelFont;
- (id)maxValue;
- (id)minValue;
- (id)monthFormatter:(unsigned int)arg1;
- (unsigned int)numLabels;
- (unsigned int)numSubLabels;
- (id)positionForLabelAtIndex:(unsigned int)arg1;
- (id)positionForSubLabelAtIndex:(unsigned int)arg1;
- (void)selectLabel:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (id)selectedLabelColor;
- (void)setAnchorRule:(id)arg1;
- (void)setAxisDescriptorPadding:(float)arg1;
- (void)setAxisSpacing:(id)arg1;
- (void)setGenerateSubAxisDescriptorOnlyForNoonMidnight:(BOOL)arg1;
- (void)setHideClippedLabels:(BOOL)arg1;
- (void)setHighlightedLabelColor:(id)arg1;
- (void)setHighlightedSubLabelColor:(id)arg1;
- (void)setLabelAlignment:(unsigned int)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setSelectedLabelColor:(id)arg1;
- (void)setSubAnchorRule:(id)arg1;
- (void)setSubAxisCapitalize:(BOOL)arg1;
- (void)setSubAxisDescriptorPadding:(float)arg1;
- (void)setSubAxisSpacing:(id)arg1;
- (void)setSubAxisVerticalPadding:(float)arg1;
- (void)setSubLabelFont:(id)arg1;
- (void)setSubTextStyle:(unsigned int)arg1;
- (void)setSubTimeInterval:(unsigned int)arg1;
- (void)setTextStyle:(unsigned int)arg1;
- (void)setTimeInterval:(unsigned int)arg1;
- (void)setUnhighlightedLabelColor:(id)arg1;
- (void)setUnhighlightedSubLabelColor:(id)arg1;
- (id)subAnchorRule;
- (BOOL)subAxisCapitalize;
- (float)subAxisDescriptorPadding;
- (id)subAxisSpacing;
- (float)subAxisVerticalPadding;
- (id)subLabelFont;
- (unsigned int)subTextStyle;
- (unsigned int)subTimeInterval;
- (id)textForLabelAtIndex:(unsigned int)arg1;
- (id)textForSubLabelAtIndex:(unsigned int)arg1;
- (unsigned int)textStyle;
- (unsigned int)timeInterval;
- (id)unhighlightedLabelColor;
- (id)unhighlightedSubLabelColor;
- (id)weekdayFormatter:(unsigned int)arg1;
- (id)yearFormatter:(unsigned int)arg1;

@end
