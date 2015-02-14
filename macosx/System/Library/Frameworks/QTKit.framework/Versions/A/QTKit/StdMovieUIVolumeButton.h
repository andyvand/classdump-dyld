/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/StdMovieUIButton.h>

@class StdMovieUIVolumeSliderPopupView;

@interface StdMovieUIVolumeButton : StdMovieUIButton {

	char _muted;
	double _currentVolume;
	unsigned long long _currentImageIndex;
	StdMovieUIVolumeSliderPopupView* _volumeSlider;

}
-(void)setMuted:(char)arg1 ;
-(char)muted;
-(void)setVolumeLevel:(double)arg1 ;
-(double)volumeLevel;
-(void)popupVolumeSlider;
-(void)_volumeSliderMoved:(id)arg1 ;
-(void)_loadImagesIfNecessary;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
@end

