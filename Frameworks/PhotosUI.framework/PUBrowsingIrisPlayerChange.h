/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingIrisPlayerChange : PUViewModelChange {
    BOOL _canPlayVitalityDidChange;
    BOOL _hasPendingVitalityHintDidChange;
    BOOL _isPlayerLoadingAllowedDidChange;
    BOOL _playbackStateDidChange;
    BOOL _playerDidChange;
    BOOL _playerStatusDidChange;
}

@property (nonatomic) BOOL canPlayVitalityDidChange;
@property (nonatomic) BOOL hasPendingVitalityHintDidChange;
@property (nonatomic) BOOL isPlayerLoadingAllowedDidChange;
@property (nonatomic) BOOL playbackStateDidChange;
@property (nonatomic) BOOL playerDidChange;
@property (nonatomic) BOOL playerStatusDidChange;

- (void)_setCanPlayVitalityDidChange:(BOOL)arg1;
- (void)_setHasPendingVitalityHintDidChange:(BOOL)arg1;
- (void)_setPlaybackStateDidChange:(BOOL)arg1;
- (void)_setPlayerDidChange:(BOOL)arg1;
- (void)_setPlayerLoadingAllowedDidChange:(BOOL)arg1;
- (void)_setPlayerStatusDidChange:(BOOL)arg1;
- (BOOL)canPlayVitalityDidChange;
- (BOOL)hasChanges;
- (BOOL)hasPendingVitalityHintDidChange;
- (BOOL)isPlayerLoadingAllowedDidChange;
- (BOOL)playbackStateDidChange;
- (BOOL)playerDidChange;
- (BOOL)playerStatusDidChange;

@end
