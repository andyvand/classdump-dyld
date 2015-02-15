/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class AVPlayerLayer, NSView, NSImageView, NSTextField, NSString, IMAVPlayer;

@interface IMVideoView : NSView {

	AVPlayerLayer* _videoLayer;
	NSView* _airplayBackground;
	NSImageView* _airplayTVImage;
	NSTextField* _airplayLabel;
	NSTextField* _airplayRouteLabel;
	NSString* _airplayRouteName;
	char _airplayActive;
	char _externalDisplay;
	IMAVPlayer* _player;

}

@property (assign,nonatomic) char airplayActive;                         //@synthesize airplayActive=_airplayActive - In the implementation block
@property (assign,nonatomic) char externalDisplay;                       //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (nonatomic,readonly) char smallAirplayBackground; 
@property (nonatomic,retain) AVPlayerLayer * videoLayer;                 //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,retain) NSString * airplayRouteName;                //@synthesize airplayRouteName=_airplayRouteName - In the implementation block
@property (assign,nonatomic) IMAVPlayer * player;                        //@synthesize player=_player - In the implementation block
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
-(void)setAirplayActive:(char)arg1 ;
-(void)setAirplayRouteName:(NSString *)arg1 ;
-(void)updateAirplayNoContentView;
-(char)externalDisplay;
-(AVPlayerLayer *)videoLayer;
-(char)airplayActive;
-(void)setExternalDisplay:(char)arg1 ;
-(NSString *)airplayRouteName;
-(IMAVPlayer *)player;
-(void)dealloc;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end
