/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSTimer;

@interface IKImageBrowserMagnifying : NSObject {

	CGPoint _center;
	char _state;
	double _time;
	float _delay;
	NSTimer* _timer;
	int _mode;

}
-(void)processCells:(id)arg1 withBrowser:(id)arg2 ;
-(void)alternateMagnifying;
-(void)dealloc;
-(void)stop;
-(void)start;
-(char)isActive;
-(void)setMode:(int)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
@end
