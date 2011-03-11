/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoViewController, NSMutableArray, NSMutableDictionary;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
    NSMutableArray *_clientPorts;
    NSMutableDictionary *_clientPortsForPIDs;
    NSMutableDictionary *_clientStateForPIDs;
    MPVideoViewController *_videoViewController;
    int _activeClientPID;
    int _extendedModeNotifyToken;
    unsigned int _queuePrepared : 1;
}

+ (BOOL)_canSeedGeniusWithItem:(id)arg1;

- (id)numberOfItems;
- (id)init;
- (void)dealloc;
- (void)shuffle;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (id)nowPlayingItemAtIndex:(id)arg1;
- (id)springboardNowPlayingInfo;
- (void)setPlaybackSpeed:(id)arg1;
- (id)playbackSpeed;
- (id)unshuffledIndexOfNowPlayingItem;
- (id)isNowPlayingItemFromGeniusMix;
- (void)skipToNextChapter;
- (void)skipToPreviousChapter;
- (void)prepareQueueForPlayback;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (void)_applicationStateChangedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_appDefaultsChangedNotification:(id)arg1;
- (void)_registerClientPort:(unsigned int)arg1 forProcessID:(int)arg2;
- (void)_clientPortInvalidated:(id)arg1;
- (id)_clientState;
- (id)_clientStateForPID:(int)arg1;
- (BOOL)_clientPIDHasPermissionToPlay:(int)arg1;
- (BOOL)_activeClientPIDHasPermissionToPlay;
- (BOOL)_currentClientPIDHasPermissionToPlay;
- (id)_avControllerForClientPID:(int)arg1;
- (id)_avControllerForClientPID:(int)arg1 ignoreExtendedMode:(BOOL)arg2;
- (void)_prepareQueueIfNecessary;
- (void)_endPlaybackForClientIfNecessary:(int)arg1;
- (void)_endPlayback;
- (void)_tearDownVideoView;
- (id)allowsRemoteUIAccess;
- (BOOL)useApplicationSpecificQueue;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (void)playItem:(id)arg1;
- (id)queueAsQuery;
- (void)setNowPlayingItem:(id)arg1;
- (void)skipToBeginningOrPreviousItem;
- (void)registerForServerDiedNotifications;
- (id)indexOfNowPlayingItem;
- (id)isGeniusAvailable;
- (id)setQueueWithSeedItems:(id)arg1;
- (void)setAllowsRemoteUIAccess:(id)arg1;
- (id)currentChapterIndex;
- (void)setCurrentChapterIndex:(id)arg1;
- (id)serverIsAlive;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (id)_avController;
- (void)setCurrentPlaybackTime:(id)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)pauseWithFadeoutDuration:(id)arg1;
- (id)playbackState;
- (void)setRepeatMode:(id)arg1;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)setQueueWithQuery:(id)arg1;
- (void)endSeeking;
- (id)shuffleMode;
- (id)repeatMode;
- (id)currentPlaybackTime;
- (id)nowPlayingItem;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)skipToNextItem;
- (void)setShuffleMode:(id)arg1;
- (void)_setQueueWithQuery:(id)arg1;

@end