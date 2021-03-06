/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, NSArray;

@interface AVPlaybackControlsViewController : UIViewController {
    id _AVSystemControllerCurrentRouteHasVolumeControlDidChangeObserver;
    BOOL _gotoEndOfSeekableRangesButtonEnabled;
    AVPlayerControllerTimeResolver *_intervalTimeResolver;
    BOOL _playPauseButtonEnabled;
    AVPlayerController *_playerController;
    AVPlayerViewController *_playerViewController;
    BOOL _playing;
    AVPlayerControllerTimeResolver *_resolutionTimeResolver;
    int _scaleButtonType;
    BOOL _scanBackwardButtonEnabled;
    BOOL _scanForwardButtonEnabled;
    BOOL _scrubberEnabled;
    NSArray *_scrubberLoadedTimeRanges;
    float _scrubberWidth;
    BOOL _showsDoneButton;
    BOOL _showsExitFullScreenButton;
    BOOL _showsLoadingIndicator;
    BOOL _showsMediaSelectionButton;
    BOOL _showsScaleButton;
    BOOL _showsStreamingControls;
    BOOL _showsVolumeSlider;
    BOOL _skipBackwardThirtySecondsButtonEnabled;
}

@property(getter=isGotoEndOfSeekableRangesButtonEnabled) BOOL gotoEndOfSeekableRangesButtonEnabled;
@property(getter=isPlayPauseButtonEnabled) BOOL playPauseButtonEnabled;
@property(retain) AVPlayerController * playerController;
@property AVPlayerViewController * playerViewController;
@property(getter=isPlaying) BOOL playing;
@property int scaleButtonType;
@property(getter=isScanBackwardButtonEnabled) BOOL scanBackwardButtonEnabled;
@property(getter=isScanForwardButtonEnabled) BOOL scanForwardButtonEnabled;
@property(getter=isScrubberEnabled) BOOL scrubberEnabled;
@property(retain) NSArray * scrubberLoadedTimeRanges;
@property(readonly) float scrubberWidth;
@property BOOL showsDoneButton;
@property BOOL showsExitFullScreenButton;
@property BOOL showsLoadingIndicator;
@property BOOL showsMediaSelectionButton;
@property BOOL showsScaleButton;
@property BOOL showsStreamingControls;
@property BOOL showsVolumeSlider;
@property(getter=isSkipBackwardThirtySecondsButtonEnabled) BOOL skipBackwardThirtySecondsButtonEnabled;

- (void).cxx_destruct;
- (void)_updateVolumeSliderVisibility;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (void)addControlForUserInteractionObservation:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isGotoEndOfSeekableRangesButtonEnabled;
- (BOOL)isPlayPauseButtonEnabled;
- (BOOL)isPlaying;
- (BOOL)isScanBackwardButtonEnabled;
- (BOOL)isScanForwardButtonEnabled;
- (BOOL)isScrubberEnabled;
- (BOOL)isSkipBackwardThirtySecondsButtonEnabled;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerController;
- (id)playerViewController;
- (void)removeControlForUserInteractionObservation:(id)arg1;
- (void)scaleButtonTapped:(id)arg1;
- (int)scaleButtonType;
- (id)scrubberLoadedTimeRanges;
- (void)scrubberValueChanged:(id)arg1;
- (float)scrubberWidth;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)setGotoEndOfSeekableRangesButtonEnabled:(BOOL)arg1;
- (void)setPlayPauseButtonEnabled:(BOOL)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setScaleButtonType:(int)arg1;
- (void)setScanBackwardButtonEnabled:(BOOL)arg1;
- (void)setScanForwardButtonEnabled:(BOOL)arg1;
- (void)setScrubberEnabled:(BOOL)arg1;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (void)setShowsExitFullScreenButton:(BOOL)arg1;
- (void)setShowsLoadingIndicator:(BOOL)arg1;
- (void)setShowsMediaSelectionButton:(BOOL)arg1;
- (void)setShowsScaleButton:(BOOL)arg1;
- (void)setShowsStreamingControls:(BOOL)arg1;
- (void)setShowsVolumeSlider:(BOOL)arg1;
- (void)setSkipBackwardThirtySecondsButtonEnabled:(BOOL)arg1;
- (BOOL)showsDoneButton;
- (BOOL)showsExitFullScreenButton;
- (BOOL)showsLoadingIndicator;
- (BOOL)showsMediaSelectionButton;
- (BOOL)showsScaleButton;
- (BOOL)showsStreamingControls;
- (BOOL)showsVolumeSlider;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)updateScrubberValue:(float)arg1;
- (void)updateVolumeSliderValue:(float)arg1;
- (void)viewDidLoad;
- (void)volumeSliderValueChanged:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
