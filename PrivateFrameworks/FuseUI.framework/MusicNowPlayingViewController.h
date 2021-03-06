/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingViewController : UIViewController <MPURatingControlDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MusicClientContextConsuming, MusicJSNativeViewControllerFactory, MusicJSNowPlayingNativeViewControllerDelegate, MusicNowPlayingItemViewControllerDelegate, MusicNowPlayingVolumeSliderDelegate, MusicPlaybackProgressScrubberDelegate, RUTrackDownloadViewDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UIViewControllerTransitioningDelegate> {
    int _accessoryStyle;
    MusicNowPlayingFloatingButton *_adInfoButton;
    NSArray *_allowedSecondaryControls;
    UIView *_backgroundClippingView;
    MPUBlurEffectView *_backgroundView;
    MusicClientContext *_clientContext;
    MPAVItem *_currentItem;
    MusicNowPlayingItemViewController *_currentItemViewController;
    UIView *_currentItemViewControllerBackgroundView;
    UIView *_currentItemViewControllerContainerView;
    UIView *_detailContainerView;
    BOOL _detailedScrubbing;
    MusicNowPlayingFloatingButton *_dismissButton;
    MusicPlaybackProgressScrubberController *_playbackProgressSliderController;
    MusicPlaybackProgressSliderView *_playbackProgressSliderView;
    MPAVController *_player;
    UIViewController *_presentedDetailViewController;
    MusicNowPlayingRatingControl *_ratingControl;
    MPAudioVideoRoutingPopoverController *_routingPopoverController;
    MPUTransportControlMediaRemoteController *_secondaryTransportControlMediaRemoteController;
    MPUTransportControlsView *_secondaryTransportControls;
    NSTimer *_skipInformationRevealTimer;
    MPUSkipLimitView *_skipLimitView;
    CAGradientLayer *_statusBarLegibilityGradient;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MusicNowPlayingTitlesView *_titlesView;
    RUTrackDownloadView *_trackDownloadButton;
    UIPanGestureRecognizer *_transitionPanGestureRecognizer;
    MusicNowPlayingPresentationController *_transitionPresentationController;
    MPUTransportControlMediaRemoteController *_transportControlMediaRemoteController;
    MPUTransportControlsView *_transportControls;
    MPUVibrantContentEffectView *_vibrantEffectView;
    MusicNowPlayingVolumeSlider *_volumeSlider;
}

@property (nonatomic) int accessoryStyle;
@property (nonatomic, readonly) MusicNowPlayingFloatingButton *adInfoButton;
@property (nonatomic, retain) UIView *backgroundClippingView;
@property (nonatomic, retain) MPUBlurEffectView *backgroundView;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) MusicNowPlayingItemViewController *currentItemViewController;
@property (nonatomic, readonly) UIView *currentItemViewControllerBackgroundView;
@property (nonatomic, readonly) UIView *currentItemViewControllerContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *detailContainerView;
@property (nonatomic, readonly) MusicNowPlayingFloatingButton *dismissButton;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *persistentAnimationLayers;
@property (nonatomic, readonly) MusicPlaybackProgressScrubberController *playbackProgressSliderController;
@property (nonatomic, readonly) MusicPlaybackProgressSliderView *playbackProgressSliderView;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) UIViewController *presentedDetailViewController;
@property (nonatomic, readonly) MusicNowPlayingRatingControl *ratingControl;
@property (nonatomic, readonly) MPUTransportControlMediaRemoteController *secondaryTransportControlMediaRemoteController;
@property (nonatomic, readonly) MPUTransportControlsView *secondaryTransportControls;
@property (nonatomic, readonly) MPUSkipLimitView *skipLimitView;
@property (nonatomic, readonly) CAGradientLayer *statusBarLegibilityGradient;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MusicNowPlayingTitlesView *titlesView;
@property (nonatomic, readonly) RUTrackDownloadView *trackDownloadButton;
@property (nonatomic, readonly) MPUTransportControlMediaRemoteController *transportControlMediaRemoteController;
@property (nonatomic, readonly) MPUTransportControlsView *transportControls;
@property (nonatomic, retain) MPUVibrantContentEffectView *vibrantEffectView;
@property (nonatomic, readonly) MusicNowPlayingVolumeSlider *volumeSlider;

- (void).cxx_destruct;
- (void)_adInfoButtonTapped:(id)arg1;
- (void)_beginVisualEngagement;
- (void)_currentItemTitlesDidChangeNotification:(id)arg1;
- (void)_didSkipTrackNotification:(id)arg1;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_dismissDetailViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_handleTapGestureRecognizerAction:(id)arg1;
- (void)_handleTransitionPanGestureRecognizerAction:(id)arg1;
- (BOOL)_hasShareButton;
- (id)_imageForTransportButtonWithControlType:(int)arg1 usingTransportControlMediaRemoteController:(id)arg2;
- (void)_invalidateSkipInformationRevealTimer;
- (void)_layoutSkipLimitView;
- (void)_peekSkipLimit:(struct { int x1; int x2; double x3; })arg1;
- (void)_playerContentsDidChangeNotification:(id)arg1;
- (void)_playerCurrentItemDidChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_presentDetailViewController:(id)arg1;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;
- (void)_revealSkipInformationMomentarily;
- (void)_scheduleSkipInformationRevealTimer;
- (void)_setCurrentItem:(id)arg1 skipUpdatingView:(BOOL)arg2 forceUpdatingView:(BOOL)arg3;
- (void)_setLyricsVisible:(BOOL)arg1;
- (void)_setRatingsVisible:(BOOL)arg1;
- (id)_shareButton;
- (BOOL)_shouldDismissAutomaticallyForCurrentPlaybackState;
- (void)_showContextualActionsWithTransportButton:(id)arg1 includeSharing:(BOOL)arg2 includeStandardActions:(BOOL)arg3;
- (void)_showUpNext;
- (void)_showUpNext:(id)arg1;
- (void)_skipLimitDidChangeNotification:(id)arg1;
- (void)_statusBarFrameChangeNotification:(id)arg1;
- (void)_triggerAutomaticDismissalWithCompletionHandler:(id /* block */)arg1;
- (void)_updateBackgroundEffects;
- (void)_updateNowPlayingInfo;
- (void)_updateSupportedCommands;
- (void)_updateTitles;
- (int)accessoryStyle;
- (id)adInfoButton;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)backgroundClippingView;
- (id)backgroundView;
- (id)clientContext;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentItemFrameForContentContainerBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)currentItemViewController;
- (id)currentItemViewControllerBackgroundView;
- (id)currentItemViewControllerContainerView;
- (void)dealloc;
- (id)detailContainerView;
- (id)dismissButton;
- (void)dismissButtonTapped:(id)arg1;
- (void)dismissDetailViewController:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithPlayer:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)nowPlayingItemViewControllerArtworkImageDidChange:(id)arg1;
- (void)nowPlayingItemViewControllerWantsToExitFullScreen:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)persistentAnimationLayers;
- (void)playbackProgressScrubber:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)playbackProgressScrubberTrackingDidBegin:(id)arg1;
- (void)playbackProgressScrubberTrackingDidEnd:(id)arg1;
- (id)playbackProgressSliderController;
- (id)playbackProgressSliderView;
- (id)player;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (void)presentSharingOptions;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedDetailViewController;
- (id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1;
- (id)ratingControl;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (id)secondaryTransportControlMediaRemoteController;
- (id)secondaryTransportControls;
- (void)setAccessoryStyle:(int)arg1;
- (void)setBackgroundClippingView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setVibrantEffectView:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotate;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (id)skipLimitView;
- (id)statusBarLegibilityGradient;
- (unsigned int)supportedInterfaceOrientations;
- (id)titlesView;
- (id)trackDownloadButton;
- (void)trackDownloadView:(id)arg1 stateDidChangeToState:(int)arg2;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlMediaRemoteController;
- (id)transportControlMediaRemoteController:(id)arg1 alternateKeyForMediaRemoteNowPlayingInfoKey:(id)arg2;
- (void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(id)arg3 shouldLaunchApplication:(BOOL)arg4;
- (id)transportControls;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(int)arg2 proposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)transportControlsView:(id)arg1 adjustedMaximumLayoutWidthOfTransportButtonWithControlType:(int)arg2;
- (id)transportControlsView:(id)arg1 buttonForControlType:(int)arg2;
- (struct CGSize { float x1; float x2; })transportControlsView:(id)arg1 defaultTransportButtonSizeWithProposedSize:(struct CGSize { float x1; float x2; })arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(int)arg2;
- (void)transportControlsViewDidLayoutSubviews:(id)arg1;
- (id)vibrantEffectView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)volumeSlider;
- (void)volumeSlider:(id)arg1 didSelectRoutesButton:(id)arg2;

@end
