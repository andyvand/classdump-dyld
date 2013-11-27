/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPAudioAndSubtitlesControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <MediaPlayer/MPVideoOverlay.h>
#import <MediaPlayer/MPDetailSliderDelegate.h>

@protocol MPVideoOverlayDelegate, MPVideoControllerProtocol;
@class MPAVController, UINavigationBar, MPAVItem, , MPAudioVideoRoutingPopoverController, MPDetailSlider, _UIBackdropView, UIButton, UIStatusBar, UIActivityIndicatorView, UILabel, MPVolumeSlider, MPAudioAndSubtitlesController;

@interface MPVideoPlaybackOverlayView : UIView <MPAudioAndSubtitlesControllerDelegate, UIPopoverControllerDelegate, MPVideoOverlay, MPDetailSliderDelegate> {

	int _style;
	<MPVideoOverlayDelegate>* _delegate;
	MPAVController* _player;
	MPAVItem* _item;
	MPAudioVideoRoutingPopoverController* _airplayPopover;
	MPDetailSlider* _scrubber;
	_UIBackdropView* _bottomBarBackdropView;
	UIButton* _playPauseButton;
	float _auxButtonsLeftEdge;
	UIButton* _airplayButton;
	BOOL _allowsWirelessPlayback;
	BOOL _automaticallyHandleTransportControls;
	BOOL _ticking;
	_UIBackdropView* _topBarBackdropView;
	UIStatusBar* _statusBar;
	UIButton* _doneButton;
	UIActivityIndicatorView* _loadingIndicator;
	UILabel* _loadingLabel;
	UIButton* _scaleButton;
	UILabel* _scrubInstructions1;
	UILabel* _scrubInstructions2;
	MPVolumeSlider* _volumeSlider;
	UIButton* _leftButton;
	UIButton* _rightButton;
	UIButton* _audioAndSubtitlesButton;
	MPAudioAndSubtitlesController* _audioAndSubtitlesController;
	BOOL _ignoreTouchUp;
	BOOL _isAnimatingScrubInstructions;
	BOOL _isShowingScrubInstructions;
	BOOL _shouldResumePlayback;
	int _seekDirection;
	UIButton* _fullscreenButton;
	<MPVideoControllerProtocol>* _videoViewController;
	BOOL _navigationBarHidden;
	MPAVItem* _unimplementedItem;
	unsigned long long _desiredParts;
	unsigned long long _visibleParts;
	unsigned long long _disabledParts;

}

@property (nonatomic,readonly) UIEdgeInsets contentAreaInsets; 
@property (assign,nonatomic) BOOL automaticallyHandleTransportControls;                             //@synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls - In the implementation block
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic,__weak) <MPVideoControllerProtocol> * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (assign,nonatomic) BOOL allowsWirelessPlayback;                                           //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                                              //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UINavigationBar * navigationBar; 
@property (assign,nonatomic,__weak) <MPVideoOverlayDelegate> * delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                       //@synthesize unimplementedItem=_unimplementedItem - In the implementation block
@property (assign,nonatomic) unsigned long long desiredParts;                                       //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) unsigned long long visibleParts;                                       //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) unsigned long long disabledParts;                                      //@synthesize disabledParts=_disabledParts - In the implementation block
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(BOOL)allowsWirelessPlayback;
-(void)setItem:(id)arg1 ;
-(BOOL)navigationBarHidden;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)setAutomaticallyHandleTransportControls:(BOOL)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)stopTicking;
-(void)startTicking;
-(unsigned long long)disabledParts;
-(BOOL)allowsDetailScrubbing;
-(id)_newFrostedGlassBackdropView;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)observeControl:(id)arg1 ;
-(id)_imageNamed:(id)arg1 ;
-(void)_updateScaleButton;
-(void)_scaleButtonTapped:(id)arg1 ;
-(void)_fullscreenButtonTapped:(id)arg1 ;
-(void)_skipButtonTouchDown:(id)arg1 ;
-(void)_skipButtonTouchCancel:(id)arg1 ;
-(void)_skipButtonTouchUpInside:(id)arg1 ;
-(void)_skipButtonTouchUpOutside:(id)arg1 ;
-(void)_playPauseButtonTapped:(id)arg1 ;
-(void)_updateAirplayButton;
-(void)_airplayButtonTapped:(id)arg1 ;
-(void)_audioAndSubtitlesButtonTapped:(id)arg1 ;
-(void)_configureTransportControls;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_unregisterForItemNotifications:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_configureAuxiliaryButtons:(BOOL)arg1 ;
-(BOOL)updateTimeBasedValues;
-(void)_itemChanged:(id)arg1 ;
-(void)_updateVolumeSlider;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_notifyDelegateOfUserEventEnd:(int)arg1 ;
-(void)_showScrubInstructions;
-(void)_notifyDelegateOfUserEventBegin:(int)arg1 ;
-(void)_hideScrubInstructions;
-(void)_buttonInteractionBegan:(id)arg1 ;
-(void)_buttonInteractionCanceled:(id)arg1 ;
-(void)_buttonInteractionEnded:(id)arg1 ;
-(void)_notifyDelegateOfUserEventCancel:(int)arg1 ;
-(void)_notifyDelegateOfUserEvent:(int)arg1 ;
-(void)_startSeeking;
-(void)_registerForItemNotifications:(id)arg1 ;
-(void)_updateLoadingIndicator;
-(void)_setAuxiliaryButton:(id)arg1 hidden:(BOOL)arg2 atX:(float*)arg3 animated:(BOOL)arg4 ;
-(void)_alternateTracksAvailable:(id)arg1 ;
-(void)_durationAvailable:(id)arg1 ;
-(void)_availableRoutesChanged:(id)arg1 ;
-(void)_seekabilityChanged:(id)arg1 ;
-(void)_tick:(id)arg1 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)_videoViewDidMoveToWindow:(id)arg1 ;
-(void)audioAndSubtitleControllerRequestsDismissal:(id)arg1 ;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
-(id)videoViewController;
-(void)setVideoViewController:(id)arg1 ;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2 ;
-(UIEdgeInsets)contentAreaInsets;
-(BOOL)automaticallyHandleTransportControls;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)navigationBar;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(id)item;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
