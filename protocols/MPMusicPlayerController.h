/* Generated by RuntimeBrowser.
 */

@protocol MPMusicPlayerController

@optional

- (NSNumber *)allowsBackgroundVideo;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (NSNumber *)currentChapterIndex;
- (NSNumber *)currentPlaybackRate;
- (NSNumber *)currentPlaybackTime;
- (void)endSeeking;
- (NSNumber *)indexOfNowPlayingItem;
- (NSNumber *)isGeniusAvailable;
- (NSNumber *)isGeniusAvailableForSeedItems:(NSArray *)arg1;
- (NSNumber *)isNowPlayingItemFromGeniusMix;
- (MPMediaItem *)nowPlayingItem;
- (MPMediaItem *)nowPlayingItemAtIndex:(NSNumber *)arg1;
- (NSNumber *)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(NSNumber *)arg1;
- (void)play;
- (void)playItem:(MPMediaItem *)arg1;
- (NSNumber *)playbackSpeed;
- (NSNumber *)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (MPMediaQuery *)queueAsQuery;
- (MPRadioStation *)queueAsRadioStation;
- (void)registerForServerDiedNotifications;
- (NSNumber *)repeatMode;
- (NSNumber *)serverIsAlive;
- (void)setAllowsBackgroundVideo:(NSNumber *)arg1;
- (void)setCurrentChapterIndex:(NSNumber *)arg1;
- (void)setCurrentPlaybackRate:(NSNumber *)arg1;
- (void)setCurrentPlaybackTime:(NSNumber *)arg1;
- (void)setNowPlayingItem:(MPMediaItem *)arg1;
- (void)setPlaybackSpeed:(NSNumber *)arg1;
- (void)setQueueWithGeniusMixPlaylist:(MPMediaPlaylist *)arg1;
- (void)setQueueWithItemCollection:(MPMediaItemCollection *)arg1;
- (void)setQueueWithQuery:(MPMediaQuery *)arg1;
- (void)setQueueWithQuery:(MPMediaQuery *)arg1 firstItem:(MPMediaItem *)arg2;
- (void)setQueueWithRadioStation:(MPRadioStation *)arg1;
- (NSNumber *)setQueueWithSeedItems:(NSArray *)arg1;
- (NSNumber *)setQueueWithStoreIDs:(NSArray *)arg1;
- (void)setRepeatMode:(NSNumber *)arg1;
- (void)setShuffleMode:(NSNumber *)arg1;
- (void)setUseApplicationSpecificQueue:(NSNumber *)arg1;
- (void)setUserQueueModificationsDisabled:(NSNumber *)arg1;
- (void)shuffle;
- (NSNumber *)shuffleMode;
- (NSData *)skipInDirection:(NSNumber *)arg1;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToNextItem;
- (void)skipToPreviousChapter;
- (void)skipToPreviousItem;
- (void)stop;
- (NSNumber *)unshuffledIndexOfNowPlayingItem;
- (NSNumber *)userQueueModificationsDisabled;

@end
