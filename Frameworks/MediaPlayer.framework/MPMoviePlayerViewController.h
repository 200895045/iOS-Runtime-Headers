/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController  {
    id _internal;
}

@property(readonly) MPMoviePlayerController * moviePlayer;


- (id)moviePlayer;
- (void)_restoreStatusBarAnimated:(BOOL)arg1;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)remoteControlReceivedWithEvent:(id)arg1;

@end