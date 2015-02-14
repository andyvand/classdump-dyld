/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/StdMovieUIButton.h>

@interface StdMovieUIPlayPauseButton : StdMovieUIButton {

	SEL _playSelector;
	SEL _pauseSelector;
	char _isPlaying;

}
-(void)loadImagesIfNecessary;
-(void)setActionForPlay:(SEL)arg1 forPause:(SEL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end

