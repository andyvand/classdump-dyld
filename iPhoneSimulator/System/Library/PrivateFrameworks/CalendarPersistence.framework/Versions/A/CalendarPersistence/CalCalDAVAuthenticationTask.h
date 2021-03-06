/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalDAVBasicAccountInfoProvider, CalCalDAVTaskManager;

@interface CalCalDAVAuthenticationTask : CalSingleSynchronousTask {

	CalDAVBasicAccountInfoProvider* _accountInfoProvider;
	CalCalDAVTaskManager* _taskManager;

}

@property (nonatomic,retain) CalDAVBasicAccountInfoProvider * accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
-(void)dealloc;
-(void)setAccountInfoProvider:(CalDAVBasicAccountInfoProvider *)arg1 ;
-(CalDAVBasicAccountInfoProvider *)accountInfoProvider;
-(id)initWithBasicAccountInfoProvider:(id)arg1 ;
-(void)authenticateSynchronously;
@end

