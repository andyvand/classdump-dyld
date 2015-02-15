/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABThrottlingLogger : NSObject {

	NSMutableDictionary* _intervals;
	NSMutableDictionary* _timestamps;

}
+(id)sharedInstance;
-(char)_canSendLogForTag:(id)arg1 ;
-(void)_touchLogForTag:(id)arg1 ;
-(double)throttlingIntervalForTag:(id)arg1 ;
-(double)_timeIntervalSinceLastLogForTag:(id)arg1 ;
-(void)setThrottlingInterval:(double)arg1 forTag:(id)arg2 ;
-(void)logWithTag:(id)arg1 message:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

