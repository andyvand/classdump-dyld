/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@interface MPInlineAudioTransportControls : MPTransportControls {

	int _style;

}
-(id)pauseButtonImage;
-(id)playButtonImage;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(id)newVolumeSlider;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3 ;
-(CGRect)availableProgressControlAreaFrame;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
@end
