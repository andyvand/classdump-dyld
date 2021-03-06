/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>
#import <AVKit/NSSharingServicePickerDelegate.h>
#import <AVKit/NSSharingServiceDelegate.h>
#import <AVKit/AVTrimControlsViewControllerDelegate.h>

@protocol AVPlayerViewSlowMotionDelegate;
@class NSString, AVPlayerLayer, AVUnsupportedContentIndicatorView, AVAudioOnlyIndicatorView, NSView, AVStatusOverlayView, NSMutableArray, AVLoadingIndicatorView, NSTimer, AVControlsContainerViewController, AVPlayerControlsViewController, AVTrimControlsViewController, NSTrackingArea, NSMenu, AVPlayerController, NSWindow, AVAnimator, NSArray, AVShareController, AVPlayer;

@interface AVPlayerView : NSView <NSSharingServicePickerDelegate, NSSharingServiceDelegate, AVTrimControlsViewControllerDelegate> {

	unsigned _playerShouldAutoplay : 1;
	NSString* _videoGravity;
	AVPlayerLayer* _playerLayer;
	AVUnsupportedContentIndicatorView* _unsupportedContentIndicatorView;
	AVAudioOnlyIndicatorView* _audioOnlyIndicatorView;
	NSView* _contentOverlayView;
	AVStatusOverlayView* _statusOverlayView;
	NSMutableArray* _statusOverlayViewLayoutConstraints;
	AVLoadingIndicatorView* _loadingIndicatorView;
	NSTimer* _loadingIndicatorTimer;
	AVControlsContainerViewController* _controlsContainerViewController;
	AVPlayerControlsViewController* _initialControlsViewController;
	AVPlayerControlsViewController* _playbackControlsViewController;
	AVTrimControlsViewController* _trimControlsViewController;
	AVPlayerControlsViewController* _editControlsViewController;
	NSTrackingArea* _trackingArea;
	long long _showControlsCount;
	NSTimer* _controlsTimer;
	NSTimer* _temporaryControlsTimer;
	unsigned _viewHasBeenSetup : 1;
	unsigned _showsControlsPane : 1;
	unsigned _canHideControls : 1;
	unsigned _isShowingPlaybackControlsForMouseMovingInsideView : 1;
	unsigned _isShowingPlaybackControlsViewForUnsupportedContent : 1;
	unsigned _isShowingPlaybackControlsViewForAudioOnlyContent : 1;
	unsigned _isShowingPlaybackControlsViewForPlayingOnExternalScreen : 1;
	unsigned _didPausePlaybackForSheet : 1;
	unsigned _hideControlsOnMouseUp : 1;
	unsigned _doNotMakeCurrentControlsViewControllerViewFirstResponder : 1;
	unsigned _viewNeedsResetupInViewDidMoveToWindow : 1;
	unsigned _showsFrameSteppingButtons : 1;
	unsigned _showsSharingServiceButton : 1;
	NSMenu* _actionPopUpButtonMenu;
	unsigned _showsFullScreenToggleButton : 1;
	/*^block*/id _trimCompletionBlock;
	AVPlayerController* _playerController;
	unsigned _isFullScreen : 1;
	unsigned long long _savedPresentationOptions;
	NSWindow* _fullScreenWindow;
	NSWindow* _originalWindow;
	NSView* _superview;
	NSView* _placeholderView;
	CGRect _savedViewFrame;
	SCD_Struct_AV4 _slowMotionTimeRange;
	id<AVPlayerViewSlowMotionDelegate> _slowMotionDelegate;
	SCD_Struct_AV5 _slowMotionDelegateRespondsTo;
	long long _playerLayerLayoutMode;
	CGSize _fixedPlayerLayerSize;
	AVAnimator* _animator;
	NSArray* _noHideAreaViews;
	SCD_Struct_AV6 _floatingPlaybackControlsMargin;
	unsigned _canZoomHorizontally : 1;
	unsigned _canZoomVertically : 1;
	unsigned _isZoomed : 1;
	unsigned _showsAlternateMediaTrackPreview : 1;
	unsigned _prefersReducedUserInterface : 1;
	AVShareController* _shareController;
	long long _controlsStyle;

}

@property (assign) char showsFrameSteppingButtons; 
@property (assign) char showsSharingServiceButton; 
@property (retain) NSMenu * actionPopUpButtonMenu; 
@property (assign) char showsFullScreenToggleButton; 
@property (readonly) char canBeginTrimming; 
@property (retain) AVPlayerController * playerController; 
@property (readonly) char isFullScreen; 
@property (assign) char canHideControls; 
@property (readonly) char isTrimming; 
@property (assign) SCD_Struct_AV4 slowMotionTimeRange; 
@property (__weak) id<AVPlayerViewSlowMotionDelegate> slowMotionDelegate; 
@property (assign) long long playerLayerLayoutMode; 
@property (assign) CGSize fixedPlayerLayerSize; 
@property (readonly) CGRect playerLayerFrame; 
@property (readonly) char showsControlsPane; 
@property (readonly) char prefersUnobscuredContent; 
@property (retain) NSArray * noHideAreaViews; 
@property (assign) SCD_Struct_AV6 floatingPlaybackControlsMargin; 
@property (assign) char canZoomHorizontally; 
@property (assign) char canZoomVertically; 
@property (getter=isZoomed) char zoomed; 
@property (assign) char showsAlternateMediaTrackPreview; 
@property (readonly) AVShareController * shareController; 
@property (assign) char prefersReducedUserInterface; 
@property (readonly) char canShowSharingServiceButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) AVPlayer * player; 
@property (assign) long long controlsStyle;                                                      //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,readonly) char readyForDisplay; 
@property (readonly) CGRect videoBounds; 
@property (readonly) NSView * contentOverlayView; 
@property (retain) AVPlayerControlsViewController * playbackControlsViewController; 
@property (retain) AVTrimControlsViewController * trimControlsViewController; 
@property (retain) AVPlayerControlsViewController * editControlsViewController; 
+(char)wantsPlayerLayerLayout;
+(id)keyPathsForValuesAffectingPlayer;
+(id)keyPathsForValuesAffectingVideoGravity;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingCanBeginTrimming;
+(char)automaticallyNotifiesObserversOfPlayerController;
+(id)keyPathsForValuesAffectingIsTrimming;
+(id)keyPathsForValuesAffectingPlayerLayerFrame;
+(id)keyPathsForValuesAffectingPrefersUnobscuredContent;
+(id)keyPathsForValuesAffectingCanShowSharingServiceButton;
+(void)initialize;
+(id)restorableStateKeyPaths;
-(void)setZoomed:(char)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)_setupPlayerLayer;
-(void)_setupUnsupportedContentIndicatorView;
-(void)_setupAudioOnlyIndicatorView;
-(void)_setupLoadingIndicatorView;
-(void)_setupStatusOverlayView;
-(void)_setupContentOverlayView;
-(void)_setupControlsContainerView;
-(void)playerControllerDidSeekChapter:(id)arg1 ;
-(void)playerControllerDidChangePlaybackStateByHandlingEvent:(id)arg1 ;
-(void)_showOrHideControls;
-(void)_setupTrackingAreas;
-(void)_layoutStatusOverlayView;
-(SCD_Struct_AV6)floatingPlaybackControlsMargin;
-(char)_isUnsupportedContent;
-(char)_isAudioOnlyContent;
-(void)_showControlsTemporarily;
-(void)_hideControlsIfPossible;
-(void)_showControlsIfNeeded;
-(void)_fireTemporaryControlsTimer:(id)arg1 ;
-(char)showsControlsPane;
-(AVPlayerControlsViewController *)playbackControlsViewController;
-(NSArray *)noHideAreaViews;
-(id)_noHideAreaViews;
-(char)canHideControls;
-(long long)controlsStyle;
-(char)_mouseInNoHideArea;
-(id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
-(void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1 ;
-(id)_currentControlsViewController;
-(void)_fireControlsTimer:(id)arg1 ;
-(void)setPlaybackControlsViewController:(AVPlayerControlsViewController *)arg1 ;
-(AVTrimControlsViewController *)trimControlsViewController;
-(AVPlayerControlsViewController *)editControlsViewController;
-(void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1 ;
-(void)_fireLoadingIndicatorTimer:(id)arg1 ;
-(void)_updateUnsupportedContentIndicatorView;
-(void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
-(char)isTrimming;
-(void)trimControlsViewControllerDidCancel:(id)arg1 ;
-(void)_updateAudioOnlyIndicatorView;
-(void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
-(void)flashChapterNumber:(unsigned long long)arg1 chapterTitle:(id)arg2 ;
-(void)trimControlsViewControllerDidTrim:(id)arg1 ;
-(CGRect)videoBounds;
-(void)setTrimControlsViewController:(AVTrimControlsViewController *)arg1 ;
-(void)setEditControlsViewController:(AVPlayerControlsViewController *)arg1 ;
-(void)_hideControlsIfPossibleAfterDelay;
-(void)setControlsStyle:(long long)arg1 ;
-(char)showsFrameSteppingButtons;
-(void)setShowsFrameSteppingButtons:(char)arg1 ;
-(char)showsSharingServiceButton;
-(void)setShowsSharingServiceButton:(char)arg1 ;
-(NSMenu *)actionPopUpButtonMenu;
-(void)setActionPopUpButtonMenu:(NSMenu *)arg1 ;
-(char)showsFullScreenToggleButton;
-(void)setShowsFullScreenToggleButton:(char)arg1 ;
-(void)beginTrimmingWithMaximumDuration:(SCD_Struct_AV3)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_restorePlaybackControlsAfterTrimmingWithTrimControlsViewController:(id)arg1 ;
-(void)_callTrimCompletionHandlerWithResult:(long long)arg1 ;
-(char)canBeginTrimming;
-(void)beginTrimmingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)exitFullScreen:(id)arg1 ;
-(void)setIsFullScreen:(char)arg1 ;
-(void)setCanHideControls:(char)arg1 ;
-(SCD_Struct_AV4)slowMotionTimeRange;
-(void)setSlowMotionTimeRange:(SCD_Struct_AV4)arg1 ;
-(id<AVPlayerViewSlowMotionDelegate>)slowMotionDelegate;
-(void)setSlowMotionDelegate:(id<AVPlayerViewSlowMotionDelegate>)arg1 ;
-(long long)playerLayerLayoutMode;
-(CGRect)playerLayerFrameForBoundsSize:(CGSize)arg1 playerLayerLayoutMode:(long long)arg2 ;
-(CGSize)fixedPlayerLayerSize;
-(CGRect)playerLayerFrame;
-(void)setPlayerLayerLayoutMode:(long long)arg1 ;
-(void)setFixedPlayerLayerSize:(CGSize)arg1 ;
-(char)prefersReducedUserInterface;
-(void)toggleZoom:(id)arg1 ;
-(char)prefersUnobscuredContent;
-(void)setNoHideAreaViews:(NSArray *)arg1 ;
-(void)setFloatingPlaybackControlsMargin:(SCD_Struct_AV6)arg1 ;
-(char)canZoomHorizontally;
-(void)setCanZoomHorizontally:(char)arg1 ;
-(char)canZoomVertically;
-(void)setCanZoomVertically:(char)arg1 ;
-(char)showsAlternateMediaTrackPreview;
-(void)setShowsAlternateMediaTrackPreview:(char)arg1 ;
-(void)showEditControlsViewController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)hideEditControlsViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVShareController *)shareController;
-(void)setPrefersReducedUserInterface:(char)arg1 ;
-(void)_showControlsForPopUpButtonOrPopover;
-(void)_hideControlsForPopUpButtonOrPopover;
-(char)canShowSharingServiceButton;
-(void)showSharingServicePickerRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(char)canShareCompositionWithService:(id)arg1 ;
-(void)doService:(id)arg1 withItems:(id)arg2 ;
-(id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(CGSize)arg3 contentRect:(CGRect*)arg4 ;
-(void)performWithService:(id)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVPlayer *)player;
-(NSString *)videoGravity;
-(char)isReadyForDisplay;
-(CGRect)videoRect;
-(void)enterFullScreen:(id)arg1 ;
-(NSView *)contentOverlayView;
-(void)dealloc;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(id)animator;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)windowWillBeginSheet:(id)arg1 ;
-(void)windowDidEndSheet:(id)arg1 ;
-(id)previewThumbnailImage;
-(void)rotateWithEvent:(id)arg1 ;
-(void)tabletPoint:(id)arg1 ;
-(void)tabletProximity:(id)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(void)sharingService:(id)arg1 willShareItems:(id)arg2 ;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(char)isZoomed;
-(char)isFullScreen;
@end

