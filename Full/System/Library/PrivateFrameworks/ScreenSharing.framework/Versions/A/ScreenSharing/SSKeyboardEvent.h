/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/SSInputEvent.h>

@interface SSKeyboardEvent : SSInputEvent {

	unsigned long long mKeyCode;
	int mKeyState;
	void* mReservedForInstanceVariablesKeyboard;

}

@property (readonly) unsigned long long keyCode; 
@property (readonly) int keyState; 
+(id)keyboardEventWithKeyCode:(unsigned long long)arg1 withState:(int)arg2 ;
-(id)initWithKeyCode:(unsigned long long)arg1 withState:(int)arg2 ;
-(int)keyState;
-(id)description;
-(unsigned long long)keyCode;
@end

