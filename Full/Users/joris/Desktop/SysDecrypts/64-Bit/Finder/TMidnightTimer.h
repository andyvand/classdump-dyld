/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Finder/Finder-Structs.h>
@interface TMidnightTimer : NSObject {

	TNSRef<NSTimer *> _midnightTimer;
	TNSRef<NSDate *> _midnightFireDate;
	TNSRef<NSDateComponents *> _dateComponents;

}
-(void)aboutToTearDown;
-(void)checkTimersAfterSleeping:(id)arg1 ;
-(void)_systemTimeChanged:(id)arg1 ;
-(void)_setUpMidnightTimer;
-(void)_checkTimerAndFireDate;
-(void)postNotificationIfDayChanged;
-(void)_midnightPassed:(id)arg1 ;
-(id)init;
@end
