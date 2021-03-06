/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSButton.h>

@class NSMutableDictionary, NSString;

@interface QCDashboardButton : NSButton {

	long long _direction;
	NSMutableDictionary* _attr;
	long long _trackingRectTag;
	char _active;
	char _displayCapsule;
	CGRect _activeRect;
	NSString* _string;
	id _controller;

}
-(void)setDirection:(int)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)mouseUp:(id)arg1 ;
-(void)drawHoverTarget;
-(void)drawCapsule;
-(CGRect)hoverRectForDirection;
-(void)updateTrackingRect;
-(char)checkPoint:(CGPoint)arg1 ;
-(CGRect)capsuleRectForDirection;
-(id)initWithFrame:(CGRect)arg1 andController:(id)arg2 ;
-(void)setIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(id)leftArrowPathInRect:(CGRect)arg1 ;
-(id)rightArrowPathInRect:(CGRect)arg1 ;
-(id)capsulePathInRect:(CGRect)arg1 ;
-(CGSize)sizeForString;
@end

