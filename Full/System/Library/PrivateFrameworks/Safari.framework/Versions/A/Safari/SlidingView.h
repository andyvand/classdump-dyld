/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSView;

@interface SlidingView : NSObject {

	NSView* view;
	CGRect startFrame;
	CGRect endFrame;
	double startTime;
	double duration;

}
-(id)initWithStartFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 ;
-(CGRect)frameForTime:(double)arg1 ;
-(CGRect)endFrame;
@end

