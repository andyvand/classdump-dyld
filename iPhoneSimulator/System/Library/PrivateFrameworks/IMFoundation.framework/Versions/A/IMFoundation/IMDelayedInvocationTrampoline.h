/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSArray;

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {

	NSArray* _modes;
	double _delay;

}
-(id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

