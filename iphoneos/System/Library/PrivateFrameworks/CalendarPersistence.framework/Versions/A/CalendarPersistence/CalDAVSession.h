/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalSession.h>

@class NSMutableDictionary, CalDAVOperationQueue, NSString, NSDate, CalDAVAccountInfoProvider;

@interface CalDAVSession : CalSession {

	NSMutableDictionary* _calendarSources;
	CalDAVOperationQueue* _queue;
	NSString* _pushToken;
	char _pushActive;
	char _isDelegate;
	NSDate* _fullRefreshDate;
	CalDAVAccountInfoProvider* _accountInfoProvider;

}

@property (retain) NSString * pushToken;                                         //@synthesize pushToken=_pushToken - In the implementation block
@property (retain) CalDAVAccountInfoProvider * accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign) char isDelegate;                                              //@synthesize isDelegate=_isDelegate - In the implementation block
@property (retain) NSDate * fullRefreshDate;                                     //@synthesize fullRefreshDate=_fullRefreshDate - In the implementation block
@property (retain) NSMutableDictionary * calendarSources;                        //@synthesize calendarSources=_calendarSources - In the implementation block
-(void)dealloc;
-(id)description;
-(char)activate;
-(void)deactivate;
-(void)setAccountInfoProvider:(CalDAVAccountInfoProvider *)arg1 ;
-(CalDAVAccountInfoProvider *)accountInfoProvider;
-(id)initWithObjectID:(id)arg1 ;
-(void)passwordChanged:(id)arg1 ;
-(id)operationQueue;
-(void)_setupQueueIfNecessary;
-(void)updateAccountInfoProvider;
-(void)reactivate;
-(void)goOnline;
-(void)goOffline;
-(void)synchronizeWithFlags:(long long)arg1 previousMigrateDelay:(long long)arg2 ;
-(char)attemptAutomaticConnect;
-(char)isDelegate;
-(char)_isRefreshing;
-(char)_isPendingRefresh;
-(void)deletePersistedErrorAndNotify;
-(void)synchronizeDelegatesWithCompletion:(/*^block*/id)arg1 ;
-(char)updatePushState:(char)arg1 ;
-(id)_createScheduleCriteria;
-(void)timerFiredWithInfo:(id)arg1 ;
-(id)sourceWithID:(id)arg1 shouldCreate:(char)arg2 ;
-(char)persistError:(id)arg1 forChangeRequestID:(id)arg2 ;
-(id)managedPrincipalInContext:(id)arg1 ;
-(void)synchronizeWithFlags:(long long)arg1 ;
-(id)debugInfo;
-(void)synchronizeAndMigrateWithPreviousDelay:(long long)arg1 ;
-(void)reschedule;
-(double)timeSinceLastSync;
-(char)needsSync;
-(id)sourceWithID:(id)arg1 ;
-(void)removeSourceWithID:(id)arg1 ;
-(char)processChangeRequests:(char)arg1 ;
-(char)persistErrorAndNotify;
-(void)systemNetworkDidChange;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(NSMutableDictionary *)calendarSources;
-(void)setCalendarSources:(NSMutableDictionary *)arg1 ;
-(void)setIsDelegate:(char)arg1 ;
-(NSDate *)fullRefreshDate;
-(void)setFullRefreshDate:(NSDate *)arg1 ;
@end

