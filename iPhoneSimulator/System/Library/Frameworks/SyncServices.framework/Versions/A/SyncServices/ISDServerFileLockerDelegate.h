/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ISDServerFileLockerDelegate : NSObject
+(id)instance;
-(int)fileLocker:(id)arg1 actionForApparentlyAbandonedLock:(id)arg2 onAttempt:(int)arg3 ;
-(void)fileLocker:(id)arg1 lockWasStolen:(id)arg2 ;
@end

