/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportViewController : UICollectionViewController <PLCameraImporterDelegate, PLConfigurableNavigationDisplayOptions, PUSectionedGridLayoutDelegate> {
    id __cachedViewSizeTransitionContext;
    struct CGSize { 
        float width; 
        float height; 
    } __cachedViewSizeTransitionContextSize;
    float __collectionViewLayoutReferenceWidth;
    UIImage *__missingThumbnailPlaceholder;
    id __pendingViewSizeTransitionContext;
    _UIContentUnavailableView *__placeholderView;
    PUPhotosGridViewControllerSpec *__spec;
    int __thumbnailImageFormat;
    BOOL _allowsSelection;
    unsigned int _busyCount;
    BOOL _canSkipDupCheckOnDelete;
    BOOL _completedAnImport;
    BOOL _containsMultiRepAssets;
    NSString *_customTitle;
    UIView *_customTitleView;
    UIBarButtonItem *_deleteButtonItem;
    NSTimer *_deletedItemsTimer;
    PLEmptyAlbumView *_emptyAlbumView;
    NSCache *_extensionPlaceholdersCache;
    NSTimer *_icSleepPreventionTimer;
    UIBarButtonItem *_importButtonItem;
    struct __CFUserNotification { } *_importCompleteNotification;
    PLImportSessionInfo *_importSessionInfo;
    PLCameraImporter *_importer;
    NSMutableIndexSet *_itemsAlreadyInLibraryIndexes;
    UIView *_loadingIndicatorView;
    id _mstreamd_pause_context;
    BOOL _readingImportItems;
    BOOL _skipDupCheckOnDelete;
    UIBarButtonItem *_stopBarItem;
    PLTemporaryImageTable *_thumbnailTable;
    NSMutableIndexSet *_thumbnailsNotYetLoaded;
}

@property (setter=_setCachedViewSizeTransitionContext:, nonatomic, retain) id _cachedViewSizeTransitionContext;
@property (setter=_setCachedViewSizeTransitionContextSize:, nonatomic) struct CGSize { float x1; float x2; } _cachedViewSizeTransitionContextSize;
@property (setter=_setCollectionViewLayoutReferenceWidth:, nonatomic) float _collectionViewLayoutReferenceWidth;
@property (nonatomic, readonly) UIImage *_missingThumbnailPlaceholder;
@property (setter=_setPendingViewSizeTransitionContext:, nonatomic, retain) id _pendingViewSizeTransitionContext;
@property (setter=_setPlaceholderView:, nonatomic, retain) _UIContentUnavailableView *_placeholderView;
@property (setter=_setSpec:, nonatomic, retain) PUPhotosGridViewControllerSpec *_spec;
@property (nonatomic, readonly) int _thumbnailImageFormat;
@property (copy) NSString *customTitle;
@property (retain) UIView *customTitleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PLCameraImporter *importer;
@property (readonly) Class superclass;

+ (id)_newGridLayoutFromSpec:(id)arg1;

- (void).cxx_destruct;
- (void)_addEmptyAlbumViewWithError:(id)arg1 animated:(BOOL)arg2;
- (void)_alertViewDidDismiss;
- (void)_beginImportForItemAtIndex:(unsigned int)arg1;
- (void)_beginUninterruptibleOperation;
- (id)_bestReferenceItemIndexPath;
- (id)_cachedViewSizeTransitionContext;
- (struct CGSize { float x1; float x2; })_cachedViewSizeTransitionContextSize;
- (void)_cancelAlerts;
- (float)_collectionViewLayoutReferenceWidth;
- (id)_deletableIndexesOfItemsAtIndexes:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)_deletedItemsTimerFired:(id)arg1;
- (void)_dismissPopupsAnimated:(BOOL)arg1;
- (void)_endImport;
- (void)_endUninterruptibleOperation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (id)_gridLayout;
- (void)_icSleepPreventionTimerFired:(id)arg1;
- (void)_importItems;
- (void)_importItemsAtIndexes:(id)arg1;
- (void)_invalidateCachedViewSizeTransitionContext;
- (BOOL)_isItemVisibleAtIndex:(int)arg1;
- (id)_loadingIndicatorView;
- (id)_localizedCameraName;
- (id)_missingThumbnailPlaceholder;
- (id)_newEmptyPlaceholderView;
- (id)_newGenericImageForItemWithExtension:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_pendingViewSizeTransitionContext;
- (void)_photosDatabaseHasChanged:(id)arg1;
- (id)_placeholderForItem:(id)arg1;
- (id)_placeholderView;
- (void)_reloadDataAndKeepSelection;
- (void)_removeEmptyAlbumViewAnimated:(BOOL)arg1;
- (void)_requestNextThumbnail;
- (void)_scrollToCurrentImportIndex;
- (id)_selectedIndexes;
- (void)_setCachedViewSizeTransitionContext:(id)arg1;
- (void)_setCachedViewSizeTransitionContextSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setCollectionViewLayoutReferenceWidth:(float)arg1;
- (void)_setPendingViewSizeTransitionContext:(id)arg1;
- (void)_setPlaceholderView:(id)arg1;
- (void)_setSelectedIndexes:(id)arg1;
- (void)_setSpec:(id)arg1;
- (id)_spec;
- (id)_textBadgeStringForCameraItem:(id)arg1;
- (int)_thumbnailImageFormat;
- (id)_thumbnailPathString;
- (void)_updateCell:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (void)_updateItemViewAtIndex:(unsigned int)arg1;
- (void)_updateLayoutMetrics;
- (void)_updateThumbnailDataForImportItem:(id)arg1;
- (void)_updateThumbnailForCell:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_updateToolbarAnimated:(BOOL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)customTitle;
- (id)customTitleView;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (void)import:(id)arg1;
- (void)importAll:(id)arg1;
- (id)importDevice;
- (void)importSelected:(id)arg1;
- (id)importer;
- (void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned int)arg3;
- (void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4;
- (void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
- (void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
- (void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didRemoveImportItems:(id)arg2 atIndexes:(id)arg3;
- (void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isImporting;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)setCustomTitle:(id)arg1;
- (void)setCustomTitleView:(id)arg1;
- (void)setImportDevice:(id)arg1;
- (void)setImporter:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showImportedBadgesForItemsAtIndexes:(id)arg1;
- (void)stopImport:(id)arg1;
- (id)textBadgeStringForImageAtIndex:(int)arg1;
- (BOOL)updateSpec;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
