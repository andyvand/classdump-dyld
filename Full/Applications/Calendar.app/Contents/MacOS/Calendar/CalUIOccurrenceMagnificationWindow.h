/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CalUIOccurrenceWindow.h>
#import <Calendar/NSAnimationDelegate.h>

@class NSViewAnimation, NSString;

@interface CalUIOccurrenceMagnificationWindow : CalUIOccurrenceWindow <NSAnimationDelegate> {

	double _scaleFactor;
	CGRect _originalRect;
	double _maxWidth;
	NSViewAnimation* _setFrameAnimation;

}

@property (assign,nonatomic) double scaleFactor;                     //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) CGRect originalRect;                              //@synthesize originalRect=_originalRect - In the implementation block
@property (assign) double maximumWidth;                              //@synthesize maxWidth=_maxWidth - In the implementation block
@property (retain) NSViewAnimation * setFrameAnimation;              //@synthesize setFrameAnimation=_setFrameAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)magnifyForOccurrence:(id)arg1 scale:(double)arg2 ;
-(void)setOriginalRect:(CGRect)arg1 ;
-(void)setSetFrameAnimation:(NSViewAnimation *)arg1 ;
-(void)updateWindowPosition:(id)arg1 ;
-(void)occurrenceWindowDidResize:(id)arg1 ;
-(void)occurrenceVisibleFrameDidChange:(id)arg1 ;
-(CGRect)originalRect;
-(void)setScaleX:(double)arg1 Y:(double)arg2 ;
-(NSViewAnimation *)setFrameAnimation;
-(void)closeAndAnimate:(char)arg1 ;
-(void)_updatePositionForOccurrence:(id)arg1 ;
-(void)updatePositionForOccurrence:(id)arg1 ;
-(void)magnifyByFactor:(double)arg1 ;
-(void)windowDidOrderOnScreen:(id)arg1 ;
-(double)maximumWidth;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(char)animationShouldStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 ;
-(void)animationDidEnd:(id)arg1 ;
-(void)close;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeKeyWindow;
@end
