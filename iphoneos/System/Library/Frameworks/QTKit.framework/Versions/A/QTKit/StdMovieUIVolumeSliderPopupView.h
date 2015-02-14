/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>

@interface StdMovieUIVolumeSliderPopupView : NSView {

	CGRect knobRect;
	CGRect bgRect;
	CGRect oldbounds;
	double _value;
	double _minValue;
	double _maxValue;
	SEL _action;
	id _target;
	char _continuous;

}
+(void)fadeTimerStep:(id)arg1 ;
+(void)initialize;
-(void)popupSliderWithEvent:(id)arg1 forView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)trackWithEvent:(id)arg1 ;
-(void)fadeAway;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)target;
-(SEL)action;
-(void)setValue:(double)arg1 ;
-(char)isContinuous;
-(void)setContinuous:(char)arg1 ;
-(double)maxValue;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(double)value;
-(void)loadImages;
@end

