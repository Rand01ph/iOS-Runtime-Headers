/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationController : NSObject <AFDictationDelegate, _UITouchPhaseChangeDelegate> {
    NSArray *_availableLanguages;
    id _callCenter;
    void *_callCenterFrameworkFileHandle;
    AFDictationConnection *_connection;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    BOOL _deferredCancellationRequested;
    UIAlertView *_dictationAvailableSoonAlert;
    UIWindow *_dictationPresenterWindow;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    BOOL _discardNextHypothesis;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    id /* block */ _finalResultsOperation;
    BOOL _hasPreheated;
    UIRepeatedAction *_helpMessageCycleAction;
    UIKeyboardInputMode *_inputModeThatInvokedDictation;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _insertionRange;
    NSString *_language;
    double _lastAnimationUpdateTimeStamp;
    NSString *_lastHypothesis;
    AFDictationOptions *_options;
    NSMutableArray *_pendingEdits;
    BOOL _performingStreamingEditingOperation;
    AFPreferences *_preferences;
    NSString *_previousHypothesis;
    BOOL _recievingResults;
    NSTimer *_recordingLimitTimer;
    BOOL _streamingAnimationActive;
    CADisplayLink *_streamingAnimationDisplayLink;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_targetHypothesis;
    int _updatingDocument;
    BOOL _wantsAvailabilityMonitoringWhenAppActive;
    BOOL _wasDisabledDueToTelephonyActivity;
    BOOL cancelledByWaitingForLocalResults;
    BOOL dictationStartedFromGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIWindow *dictationPresenterWindow;
@property (nonatomic, retain) _UIDictationPrivacySheetController *dictationPrivacySheetController;
@property (nonatomic) BOOL dictationStartedFromGesture;
@property (nonatomic) BOOL discardNextHypothesis;
@property (nonatomic) BOOL hasPreheated;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIKeyboardInputMode *inputModeThatInvokedDictation;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } insertionRange;
@property (nonatomic, copy) NSString *lastHypothesis;
@property (nonatomic, retain) NSMutableArray *pendingEdits;
@property (nonatomic) BOOL performingStreamingEditingOperation;
@property (nonatomic, copy) NSString *previousHypothesis;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetHypothesis;
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive;

+ (id)activeConnection;
+ (id)activeInstance;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)dictationIsFunctional;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)disableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned int)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(int)arg4 useServerCapitalization:(BOOL)arg5;
+ (BOOL)isRunning;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (void)logDictationString:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (BOOL)openAssistantFrameworkIfNecessary;
+ (void)poppedLastStreamingOperation;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString { }*)arg3 useServerCapitalization:(BOOL)arg4;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString { }*)arg3 useServerCapitalization:(BOOL)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 fromKeyboard:(BOOL)arg3 useServerCapitalization:(BOOL)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 ranges:(id*)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 ranges:(id*)arg3 options:(id)arg4;
+ (float)serverManualEndpointingThreshold;
+ (BOOL)setupForOpeningConnections;
+ (BOOL)setupForPhraseSerialization;
+ (id)sharedInstance;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (BOOL)shouldEnableGestureHandler;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
+ (void)siriPreferencesChanged;
+ (BOOL)starkScreenExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (BOOL)takesPressesBegan:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPressesChanged:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPressesEnded:(id)arg1 forTextView:(id)arg2;
+ (void)updateLandingView;
+ (BOOL)usingServerManualEndpointingThreshold;
+ (BOOL)usingTypeAndTalk;
+ (int)viewMode;

- (void)_beginEnableDictationPrompt;
- (id)_connection;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)_cycleHelpMessage;
- (void)_displayLinkFired:(id)arg1;
- (void)_displaySecureContentsAsPlainText:(BOOL)arg1 afterDelay:(double)arg2;
- (void)_endEnableDictationPromptAnimated:(BOOL)arg1;
- (id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 documentTextInRange:(id*)arg4;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_presentOptInAlertForDictationInputMode;
- (void)_presentPrivacySheetWithCompletion:(id /* block */)arg1;
- (id)_rangeByExtendingRange:(id)arg1 backward:(int)arg2 forward:(int)arg3 inputDelegate:(id)arg4;
- (void)_restartDictation;
- (void)_runFinalizeOperation;
- (void)_setFinalResultHandler:(id /* block */)arg1;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (float)audioLevel;
- (void)cancelDictation;
- (void)cancelDictationForTextStoreChangesInResponder:(id)arg1;
- (void)cancelRecordingLimitTimer;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)completeStartConnectionForReason:(int)arg1;
- (id)connection;
- (id)connectionForStatisticsLogging;
- (void)dealloc;
- (void)delayedTelephonyCheckingSetup;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (BOOL)dictationEnabled;
- (BOOL)dictationIsModifyingText;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (id)dictationPresenterWindow;
- (id)dictationPrivacySheetController;
- (BOOL)dictationStartedFromGesture;
- (void)disableAutorotation;
- (BOOL)disabledDueToTelephonyActivity;
- (BOOL)discardNextHypothesis;
- (void)dismissDictationView:(id)arg1;
- (void)enableProximity;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)forceHelpMessageCycle;
- (BOOL)hasPreheated;
- (id)init;
- (id)inputModeThatInvokedDictation;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertionRange;
- (BOOL)isIgnoringDocumentChanges;
- (BOOL)isRecievingResults;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)lastHypothesis;
- (BOOL)needsLeadingSpaceForPhrases:(id)arg1;
- (BOOL)needsTrailingSpaceForPhrases:(id)arg1;
- (id)pendingEdits;
- (void)performIgnoringDocumentChanges:(id /* block */)arg1;
- (BOOL)performingStreamingEditingOperation;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (void)presentOptInAlertWithCompletion:(id /* block */)arg1;
- (id)previousHypothesis;
- (void)proximityStateChanged:(id)arg1;
- (void)reenableAutorotation;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)restartDictationForTypeAndTalk;
- (struct __CFString { }*)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (id)selectedTextForInputDelegate:(id)arg1;
- (void)setDictationInputmode;
- (void)setDictationPresenterWindow:(id)arg1;
- (void)setDictationPrivacySheetController:(id)arg1;
- (void)setDictationStartedFromGesture:(BOOL)arg1;
- (void)setDiscardNextHypothesis:(BOOL)arg1;
- (void)setHasPreheated:(BOOL)arg1;
- (void)setInputModeThatInvokedDictation:(id)arg1;
- (void)setInsertionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setPerformingStreamingEditingOperation:(BOOL)arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setWantsAvailabilityMonitoringWhenAppActive:(BOOL)arg1;
- (void)setupConnectionOptions;
- (void)setupForDictationStartForReason:(int)arg1;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (BOOL)shouldPresentOptInAlert;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(int)arg1;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForReason:(int)arg1;
- (void)startHelpMessageCycle;
- (void)startRecordingLimitTimer;
- (int)state;
- (void)stopDictation;
- (void)stopHelpMessageCycle;
- (id)streamingOperations;
- (id)supportedDictationLanguages:(id /* block */)arg1;
- (BOOL)supportsInputMode:(id)arg1 error:(id*)arg2;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (id)targetHypothesis;
- (BOOL)wantsAvailabilityMonitoringWhenAppActive;
- (BOOL)wasDisabledDueToTelephonyActivity;

@end
