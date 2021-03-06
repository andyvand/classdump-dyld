/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerControlsViewController.h>

@class NSTimer, NSView, AVPlayPauseShuttleControllerView;

@interface AVFloatingPlaybackControlsViewController : AVPlayerControlsViewController {

	double _shuttleSliderValue;
	NSTimer* _shuttleSliderTimer;
	NSView* _initialFirstResponder;
	AVPlayPauseShuttleControllerView* _playPauseShuttleControllerView;
	/*^block*/id _nextKeyViewSetupBlock;

}
+(id)keyPathsForValuesAffectingIntrinsicControlsContentViewSize;
-(void)setupNextKeyView;
-(id)backgroundBackdropViewMaskImage;
-(long long)layoutStyle;
-(CGSize)intrinsicControlsContentViewSize;
-(SCD_Struct_AV6)controlsContentViewMargin;
-(id)controlsStyleIdentifier;
-(char)movableControlsContentView;
-(void)fireShuttleSliderTimer:(id)arg1 ;
-(void)shuttleSliderChanged:(id)arg1 ;
-(void)loadView;
-(id)initialFirstResponder;
@end

