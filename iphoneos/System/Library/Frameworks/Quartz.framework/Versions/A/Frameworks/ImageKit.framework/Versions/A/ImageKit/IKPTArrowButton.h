/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSMutableDictionary, NSString;

@interface IKPTArrowButton : NSButton {

	long long _direction;
	long long _index;
	NSMutableDictionary* _attr;
	long long _trackingRectTag;
	char _active;
	char _displayCapsule;
	CGRect _activeRect;
	NSString* _string;

}

@property (assign,nonatomic) long long direction; 
@property (assign,nonatomic) long long index;                  //@synthesize index=_index - In the implementation block
-(void)setIndex:(long long)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)index;
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
-(void)setIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(id)leftArrowPathInRect:(CGRect)arg1 ;
-(id)rightArrowPathInRect:(CGRect)arg1 ;
-(id)capsulePathInRect:(CGRect)arg1 ;
-(CGSize)sizeForString;
@end

