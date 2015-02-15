/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSMouseEvent.h>

@interface SSMouseButtonEvent : SSMouseEvent {

	long long mButton;
	int mState;
	void* mReservedForInstanceVariablesMouseButton;

}

@property (readonly) long long button; 
@property (readonly) int state; 
+(id)mouseButtonEventWithCoordinates:(SSPoint)arg1 withButton:(long long)arg2 withState:(int)arg3 ;
-(id)initWithCoordinates:(SSPoint)arg1 withButton:(long long)arg2 withState:(int)arg3 ;
-(int)state;
-(long long)button;
@end

