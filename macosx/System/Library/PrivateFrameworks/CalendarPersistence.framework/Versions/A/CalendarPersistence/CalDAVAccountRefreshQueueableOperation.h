/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@interface CalDAVAccountRefreshQueueableOperation : CalDAVQueueableOperation {

	char _refreshHadChanges;
	char _notifyOnChanges;
	char _fromFullRefresh;
	char _shouldTakePowerAssertion;
	unsigned _powerAssertionID;
	unsigned long long _numberOfInboxEntriesAffected;
	unsigned long long _numberOfEventsAffected;
	unsigned long long _numberOfNotificationsAffected;

}

@property (assign,nonatomic) char fromFullRefresh;                                          //@synthesize fromFullRefresh=_fromFullRefresh - In the implementation block
@property (assign,nonatomic) char notifyOnChanges;                                          //@synthesize notifyOnChanges=_notifyOnChanges - In the implementation block
@property (assign,nonatomic) char shouldTakePowerAssertion;                                 //@synthesize shouldTakePowerAssertion=_shouldTakePowerAssertion - In the implementation block
@property (assign) unsigned powerAssertionID;                                               //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfInboxEntriesAffected;               //@synthesize numberOfInboxEntriesAffected=_numberOfInboxEntriesAffected - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfEventsAffected;                     //@synthesize numberOfEventsAffected=_numberOfEventsAffected - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNotificationsAffected;              //@synthesize numberOfNotificationsAffected=_numberOfNotificationsAffected - In the implementation block
-(void)finalize;
-(void)dealloc;
-(void)finishOperation;
-(void)performOperation;
-(id)initWithSession:(id)arg1 takePowerAssertion:(char)arg2 ;
-(void)setNotifyOnChanges:(char)arg1 ;
-(void)setFromFullRefresh:(char)arg1 ;
-(id)readableDescription;
-(char)_shouldCoalesceWithOperations:(id)arg1 ;
-(char)suppressErrorDialog;
-(void)tearDown;
-(void)dropPowerAssertion;
-(void)resetStatisticsGatheringCounters;
-(void)refreshWithExceptionHandling;
-(char)shouldTakePowerAssertion;
-(void)takePowerAssertion;
-(void)refresh;
-(char)refreshHadChanges;
-(char)holdingPowerAssertion;
-(void)setPowerAssertionID:(unsigned)arg1 ;
-(unsigned)powerAssertionID;
-(void)setNumberOfInboxEntriesAffected:(unsigned long long)arg1 ;
-(void)setNumberOfEventsAffected:(unsigned long long)arg1 ;
-(void)setNumberOfNotificationsAffected:(unsigned long long)arg1 ;
-(unsigned long long)numberOfInboxEntriesAffected;
-(unsigned long long)numberOfEventsAffected;
-(unsigned long long)numberOfNotificationsAffected;
-(void)sendStatistics;
-(void)setShouldTakePowerAssertion:(char)arg1 ;
-(char)notifyOnChanges;
-(char)fromFullRefresh;
-(char)refreshPropertiesForPrincipalCoreDAV:(id)arg1 error:(id*)arg2 ;
-(char)refreshCalendarsForPrincipalCoreDAV:(id)arg1 error:(id*)arg2 ;
-(char)_refreshPropertiesAndCalendarsForPrincipal:(id)arg1 error:(id*)arg2 ;
-(char)rectifyPrincipalPathForPrincipal:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)updatePrincipal:(id)arg1 newPrincipalPath:(id)arg2 ;
-(void)updateCurrentAddresses:(id)arg1 newAddressStrings:(id)arg2 principal:(id)arg3 calendar:(id)arg4 context:(id)arg5 ;
-(char)_refreshCalendarsForPrincipalCoreDAV:(id)arg1 error:(id*)arg2 ;
-(char)_syncReportForPrincipalCoreDAV:(id)arg1 error:(id*)arg2 ;
-(char)_regularRefreshCalendarsForPrincipalCoreDAV:(id)arg1 isDeepRefresh:(char)arg2 error:(id*)arg3 ;
-(void)updatePrincipal:(id)arg1 forCalendarHome:(id)arg2 error:(id*)arg3 ;
-(void)updateInboxForPrincipal:(id)arg1 forInboxContainer:(id)arg2 error:(id*)arg3 ;
-(char)updateAndRefreshCalendarsForPrincipal:(id)arg1 forCalendarContainers:(id)arg2 inboxURL:(id)arg3 inboxContainer:(id)arg4 isDeepRefresh:(char)arg5 deleteMissingCalendars:(char)arg6 error:(id*)arg7 ;
-(char)deleteRemovedCalendarsForPrincipal:(id)arg1 withURLs:(id)arg2 error:(id*)arg3 ;
-(void)updateNotificationsForPrincipal:(id)arg1 forNotificationContainer:(id)arg2 error:(id*)arg3 ;
-(void)updateOutboxForPrincipal:(id)arg1 forOutboxContainer:(id)arg2 error:(id*)arg3 ;
-(void)_propPatchWithNoErrorHandlingStringValue:(id)arg1 nameSpace:(id)arg2 name:(id)arg3 accountInfoProvider:(id)arg4 url:(id)arg5 ;
-(int)_sharingStatusForContainer:(id)arg1 ;
-(void)updateSharees:(id)arg1 forCalendar:(id)arg2 context:(id)arg3 ;
-(char)_isSameTypeOfRefreshAs:(id)arg1 ;
@end

