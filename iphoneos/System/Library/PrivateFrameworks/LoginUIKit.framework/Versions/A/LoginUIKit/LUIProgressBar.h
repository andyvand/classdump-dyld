/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, NSTimer;

@interface LUIProgressBar : NSView {

	NSImage* _emptyLeftCap;
	NSImage* _emptyMiddle;
	NSImage* _emptyRightCap;
	NSImage* _fullLeftCap;
	NSImage* _fullMiddle;
	NSImage* _fullRightCap;
	NSTimer* _updateTimer;
	float _value;
	float _minValue;
	float _maxValue;
	float _currentValue;
	float _step;
	int _progressBarStyle;
	char _drawsBackground;
	char _animates;
	char _usingBlackBar;
	/*^block*/id _animationCompleteBlock;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)setDrawsBackground:(char)arg1 ;
-(char)drawsBackground;
-(void)_commonInit;
-(void)setValue:(float)arg1 ;
-(float)maxValue;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(void)setMaxValue:(float)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(float)value;
-(void)_updateCurrentValue:(id)arg1 ;
-(void)resetValue;
-(int)progressBarStyle;
-(void)setProgressBarStyle:(int)arg1 ;
-(void)setAnimationCompleteCallback:(/*^block*/id)arg1 ;
@end

