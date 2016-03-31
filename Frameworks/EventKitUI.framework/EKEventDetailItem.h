/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {
    BOOL _allowsEditing;
    int _cellPosition;
    <EKEventDetailItemDelegate> *_delegate;
    EKEvent *_event;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    BOOL _shouldIndent;
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
}

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) int cellPosition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventDetailItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int maximumNumberOfSubItems;
@property (nonatomic, readonly) BOOL requiresLayoutForSubitemCount;
@property (nonatomic) BOOL shouldIndent;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (BOOL)allowsEditing;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (int)cellPosition;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)delegate;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (void)layoutCellsForWidth:(float)arg1 position:(int)arg2;
- (unsigned int)maximumNumberOfSubItems;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)notifySubitemDidSave:(unsigned int)arg1;
- (unsigned int)numberOfSubitems;
- (BOOL)requiresLayoutForSubitemCount;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setCellPosition:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)setShouldIndent:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (BOOL)shouldIndent;
- (id)viewController;

@end
