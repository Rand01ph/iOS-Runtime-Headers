/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeController : UIViewController <CNContactPickerDelegate, CNContactViewControllerDelegate, MFComposeActivityContinuationOperationDelegate, MFComposeHeaderViewDelegate, MFComposeImageSizeViewDelegate, MFComposeRecipientTextViewDelegate, MFComposeSubjectViewDelegate, MFComposeTypeFactoryDelegate, MFGroupDetailViewControllerDelegate, MFMailComposeToFieldDelegate, MFMailComposeViewDelegate, MFSecureMIMECompositionManagerDelegate, NSUserActivityDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    MFLANContinuationAgent *_LANContinuationAgent;
    MFMailAccountProxyGenerator *_accountProxyGenerator;
    NSString *_addressForMissingIdentity;
    MFAddressPickerReformatter *_addressPickerReformatter;
    BOOL _allowRestrictedAccounts;
    UIView *_alternateTitleView;
    MFModernComposeRecipientAtom *_atomPresentingCard;
    BOOL _attachmentToMarkupIsLoaded;
    id _autorotationDelegate;
    id _autosaveIdentifier;
    BOOL _autosaveIsValid;
    MFLock *_autosaveLock;
    NSTimer *_autosaveTimer;
    NSDate *_autosavedDate;
    NSArray *_bccAddresses;
    MFComposeBodyField *_bodyField;
    unsigned int _bodyTextChanged;
    MFComposeTextContentView *_bodyTextView;
    NSArray *_ccAddresses;
    MFMailComposeRecipientView *_ccField;
    NSDictionary *_certificatesByRecipient;
    UIBarButtonItem *_closeButtonItem;
    _MFMailCompositionContext *_compositionContext;
    CNContactViewController *_contactViewController;
    id _content;
    BOOL _contentVisible;
    MFComposeActivityContinuationOperation *_continuationOperation;
    UIProgressView *_continuationProgressView;
    BOOL _delayToShowMarkupHasPassed;
    <MFMailComposeViewControllerDelegate> *_delegate;
    MFOutgoingMessageDelivery *_delivery;
    unsigned int _didShowNotifyConfirmation;
    int _encryptionIdentityStatus;
    BOOL _encryptionOverrideSetting;
    BOOL _encryptionStatusIsKnown;
    NSDictionary *_errorsByRecipient;
    UIKeyCommand *_escapeKeyCommand;
    unsigned int _fromAddressPickerWasVisible;
    unsigned int _hasViewAppeared;
    unsigned int _hosted;
    NSObject<OS_dispatch_group> *_imageScalingGroup;
    MFComposeImageSizeView *_imageSizeField;
    unsigned int _initialAttachmentCount;
    NSString *_initialTitle;
    unsigned int _isDirty;
    BOOL _isModal;
    unsigned int _isPopoverVisible;
    unsigned int _isSuspended;
    NSDate *_lastActiveDate;
    MFMailboxUid *_lastDraftMailboxUid;
    NSString *_lastDraftMessageID;
    MFMailComposeRecipientView *_lastFocusedRecipientView;
    unsigned short _lastTypedCharacter;
    MFMailMarkup *_markupExtension;
    unsigned int _markupReplyAttachmentLoadingProgress;
    UIAlertController *_notifyConfirmation;
    unsigned int _options;
    NSArray *_originalBccAddresses;
    NSString *_originalSendingEmailAddress;
    NSString *_originatingBundleID;
    CNContactPickerViewController *_peoplePicker;
    UIImagePickerController *_photosImagePickerController;
    UIAlertController *_popoverAlert;
    MFMailPopoverManager *_popoverManager;
    NSString *_primaryAddressForForcedSendingAccount;
    MFMessageContentProgressLayer *_progressIndicatorView;
    MFRecentComposeRecipient *_recentRecipientPresentingCard;
    int _recipientFieldWhileViewUnloaded;
    MFComposeRecipient *_recipientPresentingCard;
    id _remoteViewControllerProxy;
    UITapGestureRecognizer *_requestModalTapGestureRecognizer;
    int _resolution;
    unsigned int _rotationSnapshotTaken;
    MFMutableMessageHeaders *_savedHeaders;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    NSDictionary *_securityScopes;
    UIBarButtonItem *_sendButtonItem;
    UIKeyCommand *_sendKeyCommand;
    NSString *_sendingEmailAddress;
    int _sendingEmailAddressIndex;
    unsigned int _shouldAutosaveWithSuspendInfo;
    unsigned int _showingNotifyConfirmation;
    MFMailSignatureController *_signatureController;
    int _signingIdentityStatus;
    int _sourceAccountManagement;
    unsigned int _stillLoading;
    NSString *_subject;
    MFComposeSubjectView *_subjectField;
    NSArray *_toAddresses;
    MFMailComposeRecipientView *_toField;
    BOOL _useMailDrop;
    unsigned int _useSuspended;
    unsigned int _viewWasUnloaded;
}

@property (nonatomic, copy) NSString *addressForMissingIdentity;
@property (nonatomic, retain) MFModernComposeRecipientAtom *atomPresentingCard;
@property (nonatomic) BOOL attachmentToMarkupIsLoaded;
@property (nonatomic, retain) <NSCoding> *autosaveIdentifier;
@property (nonatomic, readonly) NSDate *autosavedDate;
@property (nonatomic, retain) NSDictionary *certificatesByRecipient;
@property (nonatomic, retain) CNContactViewController *contactViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayToShowMarkupHasPassed;
@property (nonatomic) id delegate;
@property (nonatomic, readonly) MFOutgoingMessageDelivery *delivery;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *errorsByRecipient;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isModal;
@property (nonatomic, readonly) MFMailboxUid *lastDraftMailboxUid;
@property (nonatomic, readonly) NSString *lastDraftMessageID;
@property (nonatomic) unsigned int markupReplyAttachmentLoadingProgress;
@property (nonatomic, copy) NSString *originatingBundleID;
@property (nonatomic, retain) CNContactPickerViewController *peoplePicker;
@property (nonatomic, retain) UIAlertController *popoverAlert;
@property (nonatomic, retain) MFComposeRecipient *recipientPresentingCard;
@property (nonatomic, retain) id remoteViewControllerProxy;
@property (nonatomic) int sourceAccountManagement;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMailDrop;
@property (getter=isVerticallyCompact, nonatomic, readonly) BOOL verticallyCompact;

+ (void)initialize;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)preferenceForKey:(id)arg1;

- (void)_accountsChanged:(id)arg1;
- (id)_addressFieldForField:(int)arg1;
- (id)_allRecipientViews;
- (id)_alternateTitleView;
- (BOOL)_anyRecipientViewContainsAddress:(id)arg1;
- (void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1;
- (id)_attachmentToMarkup;
- (void)_autosaveTimerFired:(id)arg1;
- (id)_availableAccountProxies;
- (void)_bodyTextChanged:(id)arg1;
- (void)_checkForEmptySubjectWithContinuation:(id /* block */)arg1;
- (void)_checkForInvalidAddressesWithContinuation:(id /* block */)arg1;
- (void)_checkForReplyAndForwardRestriction;
- (void)_clearMessageValues;
- (void)_close;
- (void)_composeViewDidDraw:(id)arg1;
- (id)_contactViewControllerForRecipient:(id)arg1;
- (void)_createAndAddContinuationProgressViewIfNecessary;
- (id)_defaultAccount;
- (unsigned int)_defaultAtomPresentationOptions;
- (Class)_deliveryClass;
- (void)_dismissPeoplePicker:(id)arg1;
- (void)_dismissPersonCard;
- (void)_displayPopoverAlert:(id)arg1;
- (id)_documentForActivityContinuation;
- (void)_draftContentDidChange;
- (id)_emailAddresses;
- (unsigned long)_estimateMessageSize;
- (void)_explainAirplaneMode;
- (int)_fieldForAddressField:(id)arg1;
- (void)_finishEnteringRecipients;
- (void)_finishModalAlertClosingComposition:(BOOL)arg1;
- (void)_finishPopoverAlertClosingComposition:(BOOL)arg1;
- (void)_finishedComposing;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)_focusBccHeaderCommandInvoked:(id)arg1;
- (void)_focusGained:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (BOOL)_hasEncryptionIdentityError;
- (BOOL)_hasRecipients;
- (void)_hideContinuationProgressViewAnimated:(BOOL)arg1;
- (BOOL)_isActiveComposeController;
- (BOOL)_isPopoverOrActionSheetOrAlertVisible;
- (BOOL)_isReplyOrForward;
- (BOOL)_isRestoredComposition;
- (BOOL)_isSetupForDelivery;
- (BOOL)_isTabKeyCommandInvocationPossible;
- (void)_leaveMessageInOutbox;
- (void)_loadAttachments;
- (void)_loadCompositionContext;
- (void)_loadingContextDidLoad:(id)arg1;
- (void)_makeComposeUserActivityCurrent;
- (id)_messageForAutosave;
- (id)_messageForDraft;
- (id)_messageForRemoteDelivery;
- (id)_messageUseSuspendInfo:(BOOL)arg1 endingEditing:(BOOL)arg2;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (id)_newLegacyAddressBookViewControllerForRecipient:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_optimalRectForPresentingPopoverInWebView:(id)arg1;
- (id)_outgoingMessageWithSubstituteDocument:(id)arg1 useSuspendInfo:(BOOL)arg2 endingEditing:(BOOL)arg3;
- (void)_physicallyScaleImagesToScale:(unsigned int)arg1;
- (void)_popoverWillBePresented:(id)arg1;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_prepareCompositionContextForLoading:(id)arg1;
- (void)_prepareForSuspend;
- (void)_prepareImagesForSendWithContinuation:(id /* block */)arg1;
- (void)_presentModalAlert:(id)arg1;
- (void)_promptForMailDropIfNecessaryWithContinuation:(id /* block */)arg1;
- (void)_recipientTextChanged:(id)arg1;
- (id)_reformattedAddressAtIndex:(unsigned int)arg1;
- (unsigned int)_reloadNumberOfReformattedAddressesWithMaximumWidth:(float)arg1 defaultFontSize:(float)arg2;
- (void)_removeRecent;
- (void)_requestBecomeModalGestureRecognized:(id)arg1;
- (void)_resetProxyGenerator;
- (void)_resetSecureCompositionManager;
- (void)_resetSecureCompositionManagerUsingNewAccount:(BOOL)arg1;
- (void)_restoreMessageValues;
- (void)_saveMessageValues;
- (void)_scaleImages;
- (BOOL)_secureCompositionManagerHasRecipients;
- (void)_setAutosaveIsValid:(BOOL)arg1;
- (void)_setInitialStateForImageField;
- (void)_setIsLoading:(BOOL)arg1;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (BOOL)_setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
- (void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned int)arg2;
- (void)_setUpDeliveryObject;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForDraft:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForSaveAsDraft;
- (BOOL)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1;
- (BOOL)_shouldEnableCloseButton;
- (BOOL)_shouldEnableSendButton;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (BOOL)_shouldUseMailDrop;
- (void)_showMissingIdentityAlert;
- (void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(BOOL)arg2;
- (unsigned long)_sizeForScale:(unsigned int)arg1 imagesOnly:(BOOL)arg2;
- (void)_subjectTextChanged:(id)arg1;
- (void)_tabKeyCommandInvoked:(id)arg1;
- (void)_tryAddSenderToBccRecipients;
- (void)_unscaleImages;
- (void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2;
- (void)_updateBodyFieldAutoCorrectionContext;
- (void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity { }*)arg3 error:(id)arg4;
- (void)_updateImageSizeTitles;
- (void)_updateNavigationBarTitleAnimated:(BOOL)arg1;
- (void)_updateOriginalBccStatusForRestore;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg1;
- (void)_updatePersonCard;
- (void)_updateRecipientAtomStyles;
- (void)_updateSMIMEButtonEnabledForRecipientCount;
- (void)_updateSMIMEButtonForEncryptionStatus:(int)arg1;
- (void)_updateSendAndCloseEnabled;
- (void)_updateTableCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (BOOL)_wantsEncryption;
- (id)accountProxyGenerator;
- (void)activityContinuationOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)activityContinuationOperation:(id)arg1 didFinishReceivingData:(id)arg2;
- (void)activityContinuationOperation:(id)arg1 didFinishSendingDataWithResult:(unsigned int)arg2;
- (void)activityContinuationOperationReceivedBytes:(id)arg1;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (void)addSignature:(BOOL)arg1;
- (id)addressForMissingIdentity;
- (id)addressesForField:(int)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)atomPresentingCard;
- (void)attachmentFinishedLoading:(id)arg1;
- (id)attachmentIcon:(id)arg1;
- (BOOL)attachmentToMarkupIsLoaded;
- (id)attachments;
- (void)attachmentsRemoved:(id)arg1;
- (id)autosaveIdentifier;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (id)autosavedDate;
- (BOOL)bccAddressesDirtied;
- (id)bccRecipients;
- (id)bodyField;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canShowAttachmentPicker;
- (BOOL)canShowFromField;
- (BOOL)canShowImageSizeField;
- (id)ccRecipients;
- (id)certificatesByRecipient;
- (void)changeQuoteLevel:(int)arg1;
- (BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)clearAllFields;
- (void)clearInitialTitle;
- (void)close:(id)arg1;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
- (void)composeShortcutInvoked:(id)arg1;
- (void)composeSubjectViewDidRemoveContent:(id)arg1;
- (void)composeSubjectViewDidSelectNotifyButton:(id)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (int)composeType;
- (id)compositionContext;
- (int)compositionType;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)currentScaleImageSize;
- (void)dealloc;
- (BOOL)delayToShowMarkupHasPassed;
- (id)delegate;
- (int)deliverMessageRemotely;
- (id)delivery;
- (void)didBecomeActiveComposeController;
- (void)didInsertAttachment:(id)arg1;
- (void)didInsertBodyText:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didSelectCellAtRow:(unsigned int)arg1;
- (void)dismissMarkupViewController;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (void)dismissSheet;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)emailAddresses;
- (id)errorsByRecipient;
- (void)finalizeSignature;
- (void)forceSaveAsDraft;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)handleLargeMessageComposeContinuationWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3;
- (void)handleMarkupData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 attachment:(id)arg4;
- (void)handleMarkupError:(id)arg1 attachment:(id)arg2;
- (void)handleMarkupURL:(id)arg1 attachment:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasAnyHiddenTrailingEmptyQuote;
- (BOOL)hasAttachments;
- (void)hostApplicationDidEnterBackground;
- (void)hostApplicationWillEnterForeground;
- (BOOL)hosted;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned int)arg2;
- (void)importDocument;
- (id)initWithCompositionContext:(id)arg1 options:(unsigned int)arg2;
- (void)insertPhotoOrVideo;
- (BOOL)isDirty;
- (BOOL)isModal;
- (BOOL)isSavingAsDraft;
- (BOOL)isShowingRecentPersonCard;
- (BOOL)isVerticallyCompact;
- (id)keyCommands;
- (id)lastDraftMailboxUid;
- (id)lastDraftMessageID;
- (void)loadView;
- (id)mailComposeView;
- (void)markupAttachment:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })markupAttachmentBoundsForAttachment:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })markupAttachmentMaskForAttachment:(id)arg1;
- (id)markupReplacementAttachment;
- (unsigned int)markupReplyAttachmentLoadingProgress;
- (id)navigationBarTitle;
- (id)navigationControllerForRecentPersonCard;
- (BOOL)needsDelivery;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)originatingBundleID;
- (id)peoplePicker;
- (void)pickInitialFirstResponder;
- (id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (unsigned int)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned int)arg2;
- (id)popoverAlert;
- (id)popoverManager;
- (id)popoverManagerCreateIfNeeded:(BOOL)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (int)popoverPresentationStyleForViewController:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentMarkupViewController:(id)arg1;
- (BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
- (unsigned int)presentationOptionsForRecipient:(id)arg1;
- (id)presentationViewController;
- (id)recipientPresentingCard;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (id)remoteViewControllerProxy;
- (void)removeAddressAtIndex:(unsigned int)arg1 field:(int)arg2;
- (int)resolution;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)savedHeaders;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (void)securityScopeForURL:(id)arg1 withHandler:(id /* block */)arg2;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)send:(id)arg1;
- (void)sendMessage;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (id)sendingEmailAddressIfExists;
- (BOOL)sendingEmailDirtied;
- (void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(id /* block */)arg5;
- (void)serializedPlaceholderForFileName:(id)arg1 fileSize:(int)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(id /* block */)arg5;
- (void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(id /* block */)arg4;
- (void)setAddressForMissingIdentity:(id)arg1;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (void)setAtomPresentingCard:(id)arg1;
- (void)setAttachmentToMarkupIsLoaded:(BOOL)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned int)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setCertificatesByRecipient:(id)arg1;
- (void)setCompositionContext:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setDelayToShowMarkupHasPassed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (void)setErrorsByRecipient:(id)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)setInitialTitle:(id)arg1;
- (void)setIsModal:(BOOL)arg1;
- (void)setMarkupReplyAttachmentLoadingProgress:(unsigned int)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (void)setPopoverAlert:(id)arg1;
- (void)setProgressUIVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRecipientPresentingCard:(id)arg1;
- (void)setRecipientsKeyboardType:(int)arg1;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)setSavedHeaders:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setUseMailDrop:(BOOL)arg1;
- (BOOL)shouldCreateRichTextRepresentation;
- (BOOL)shouldShowSMIMEButton;
- (void)showPhotoPickerWithSourceType:(int)arg1 fromSource:(id)arg2;
- (int)sourceAccountManagement;
- (id)subject;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tappedSMIMEButton;
- (id)toRecipients;
- (void)updateSignature;
- (void)updateUserActivityState:(id)arg1;
- (BOOL)useMailDrop;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
