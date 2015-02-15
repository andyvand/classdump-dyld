/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>

@class NSResponder, AVPlayerController, NSSlider, NSView;

@interface AVPlayPauseShuttleControllerView : NSView {

	unsigned _isJogging : 1;
	NSResponder* _firstResponder;
	AVPlayerController* _playerController;
	NSSlider* _shuttleSlider;
	NSView* _viewToHideWhenShuttleSliderShown;

}

@property (__weak) AVPlayerController * playerController;                  //@synthesize playerController=_playerController - In the implementation block
@property (retain) NSSlider * shuttleSlider;                               //@synthesize shuttleSlider=_shuttleSlider - In the implementation block
@property (retain) NSView * viewToHideWhenShuttleSliderShown;              //@synthesize viewToHideWhenShuttleSliderShown=_viewToHideWhenShuttleSliderShown - In the implementation block
@property (getter=isJogging,readonly) char jogging; 
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(char)isJogging;
-(void)setShuttleSlider:(NSSlider *)arg1 ;
-(void)setViewToHideWhenShuttleSliderShown:(NSView *)arg1 ;
-(id)playPauseButton;
-(void)setJogging:(char)arg1 ;
-(NSSlider *)shuttleSlider;
-(NSView *)viewToHideWhenShuttleSliderShown;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)containerView;
-(char)mouseDownCanMoveWindow;
@end

