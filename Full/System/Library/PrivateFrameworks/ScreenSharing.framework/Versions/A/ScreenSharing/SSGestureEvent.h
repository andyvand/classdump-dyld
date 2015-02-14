/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSMouseEvent.h>

@interface SSGestureEvent : SSMouseEvent {

	long long mSubType;
	void* mReservedForInstanceVariablesGesture;

}

@property (readonly) long long subType; 
+(id)gestureEventWithCoordinates:(SSPoint)arg1 subType:(long long)arg2 ;
-(id)initWithCoordinates:(SSPoint)arg1 subType:(long long)arg2 ;
-(long long)subType;
@end

