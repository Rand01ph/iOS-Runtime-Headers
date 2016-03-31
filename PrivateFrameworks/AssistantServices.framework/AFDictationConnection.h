/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver> {
    NSXPCConnection *_connection;
    <AFDictationDelegate> *_delegate;
    BOOL _hasActiveRequest;
    BOOL _isCapturingSpeech;
    BOOL _isWaitingForAudioFile;
    NSSet *_knownOfflineInstalledLanguages;
    NSString *_lastUsedLanguage;
    void *_levelsSharedMem;
    unsigned long _sharedMemSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFDictationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)dictationIsEnabled;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)fetchSupportedLanguageCodes:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_availabilityChanged;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearConnection;
- (id)_connection;
- (void)_connectionClearedForInterruption:(BOOL)arg1;
- (id)_dictationService;
- (id)_dictationServiceWithErrorHandler:(id /* block */)arg1;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_scheduleRequestTimeout;
- (void)_setLevelsWithSharedMem:(id)arg1;
- (void)_stopLevelUpdates;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_willCancelDictation;
- (void)_willCompleteDictation;
- (void)_willFailDictationWithError:(id)arg1;
- (void)_willStartDictationWithOptions:(id)arg1;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (void)dealloc;
- (id)delegate;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1;
- (void)endSession;
- (void)networkAvailability:(id)arg1 isAvailable:(BOOL)arg2;
- (float)peakPower;
- (void)preheat;
- (void)sendEngagementFeedback:(int)arg1 voiceQueryIdentifier:(id)arg2;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;

@end
