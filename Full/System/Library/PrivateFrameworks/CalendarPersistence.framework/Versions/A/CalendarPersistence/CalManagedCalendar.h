/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedNode.h>
#import <CalendarPersistence/EKProtocolCalendar.h>
#import <CalendarPersistence/DefaultAlarmProviderProtocol.h>

@class NSString, NSSet, NSURL, CalManagedDefaultAlarmSet, CalManagedGroup, CalManagedSubscriptionInfo, NSDictionary, NSManagedObjectID;

@interface CalManagedCalendar : CalManagedNode <EKProtocolCalendar, DefaultAlarmProviderProtocol>

@property (retain) NSSet * items; 
@property (retain) CalManagedGroup * group; 
@property (retain) CalManagedSubscriptionInfo * subscriptionInfo; 
@property (assign) char alarmsDisabled; 
@property (assign) long long notificationCount; 
@property (assign) char isMarkedUndeletable; 
@property (assign) char isMarkedImmutableSharees; 
@property (readonly) char isBirthday; 
@property (assign) char isTaskContainer; 
@property (assign) char isEventContainer; 
@property (retain) NSSet * sharees; 
@property (assign) char hasSharees; 
@property (assign) char suppressEventSchedulingNotifications; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy,readonly) NSString * colorString; 
@property (nonatomic,copy,readonly) NSString * symbolicColorName; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (nonatomic,readonly) char allowReminders; 
@property (nonatomic,readonly) char allowEvents; 
@property (nonatomic,copy,readonly) id<EKProtocolCalendarSource> containerSource; 
@property (nonatomic,readonly) char ignoreAlarms; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (nonatomic,readonly) char cachedHasSharees; 
@property (nonatomic,readonly) char isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) char isSubscribed; 
@property (nonatomic,readonly) char isRenameable; 
@property (nonatomic,readonly) char isColorEditable; 
@property (nonatomic,readonly) char isShareable; 
@property (nonatomic,readonly) char allowsScheduling; 
@property (nonatomic,readonly) char isSubscribedHolidayCalendar; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * serverPath; 
@property (nonatomic,copy,readonly) NSString * notes; 
@property (nonatomic,readonly) NSString * sharingStatusString; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) char isDefaultSchedulingCalendar; 
@property (nonatomic,readonly) char isDistinguishedExchangeCalendar; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) NSSet * sharedOwnerAddresses; 
@property (nonatomic,readonly) NSString * defaultOrganizerNameForNewItems; 
@property (nonatomic,readonly) NSURL * defaultOrganizerAddressForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEmailForNewItems; 
@property (nonatomic,readonly) char defaultOrganizerIsMeForNewItems; 
@property (nonatomic,readonly) NSURL * prePublishURL; 
@property (nonatomic,copy,readonly) NSURL * publishURL; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForTimedEvents; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForAllDayEvents; 
@property (assign) char shareDefaultAlarmSettings; 
@property (retain,readonly) CalManagedDefaultAlarmSet * defaultAlarmSet; 
@property (retain,readonly) CalManagedDefaultAlarmSet * localDefaultAlarmSet; 
+(id)pathExtension;
+(id)entityName;
+(void)enableChangeRequestNotifications;
-(void)setChecked:(long long)arg1 ;
-(long long)checked;
-(long long)compare:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(id)properties;
-(NSString *)sharingStatusString;
-(NSSet *)sharedOwnerAddresses;
-(id<EKProtocolCalendarSource>)containerSource;
-(char)isAddressMe:(id)arg1 ;
-(char)isOwnerAddress:(id)arg1 ;
-(char)isOwnerMe;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 ;
-(char)isEventContainer;
-(id)calendarSource;
-(char)isBirthday;
-(NSURL *)defaultOrganizerAddressForNewItems;
-(NSString *)defaultOrganizerNameForNewItems;
-(char)isSubscribed;
-(char)isDefaultSchedulingCalendar;
-(void)setIsEventContainer:(char)arg1 ;
-(void)setIsTaskContainer:(char)arg1 ;
-(char)isTaskContainer;
-(id)iCalendarDocumentWithID:(id)arg1 name:(id)arg2 description:(id)arg3 color:(id)arg4 options:(unsigned long long)arg5 ;
-(char)shareDefaultAlarmSettings;
-(void)willSave;
-(void)prefetchRelationshipsForDelete;
-(id)enclosingSource;
-(id)contextForValidationError;
-(id)attributesToCompareForMerge;
-(void)didSave;
-(char)isRenameable;
-(char)isColorEditable;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 fromServer:(char)arg2 ;
-(char)isFacebookBirthdayCalendar;
-(char)allowsScheduling;
-(char)shouldDisplayAsReminderCalendar;
-(char)shouldDisplayAsEventCalendar;
-(id)subscriptionOrPublishURL;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1 ;
-(NSString *)defaultOrganizerEmailForNewItems;
-(char)isFamilyCalendar;
-(NSString *)sharedOwnerName;
-(NSString *)sharedOwnerAddress;
-(char)isShareable;
-(char)defaultOrganizerIsMeForNewItems;
-(NSString *)serverPath;
-(char)isSubscribedHolidayCalendar;
-(char)_containsEntityName:(id)arg1 ;
-(void)setNeedsPublish:(char)arg1 ;
-(void)updateShareeDerivedProperties;
-(char)isAddressInMeCard:(id)arg1 ;
-(char)shouldShowInPrimaryAccountsShowDelegates:(char)arg1 ;
-(char)allowEvents;
-(char)allowReminders;
-(id)bestDefaultSymbolicColorWithExistingNodes:(id)arg1 ;
-(char)isLocal;
-(int)displayOrder;
-(char)allowsContentModifications;
-(char)ignoreAlarms;
-(char)cachedHasSharees;
-(char)isDistinguishedExchangeCalendar;
-(NSSet *)defaultAlarmsForTimedEvents;
-(NSSet *)defaultAlarmsForAllDayEvents;
-(long long)notificationCount;
-(void)setNotificationCount:(long long)arg1 ;
-(char)containsEvents;
-(char)containsTasks;
-(id)nodesForOrdering;
-(char)isMigrateable;
-(char)hasAddressForMe;
-(id)relationshipsToCompareForMerge;
-(char)shouldShowInPrimaryAccounts;
-(id)bestDefaultSymbolicColor;
-(void)setPublishURL:(NSURL *)arg1 ;
-(void)setIgnoreAlarms:(char)arg1 ;
-(char)_componentIsDangerousAlarm:(id)arg1 ;
-(id)calendarsToCheckForDuplicatedUIDS;
-(id)fixAndReportIssuesInNewlyImportedItem:(id)arg1 ;
-(void)moveEventsAndMastersWithDuplicatedUIDSFromOtherCalendars:(id)arg1 sharedUIDS:(id)arg2 ;
-(id)handleDuplicatedUIDSFromThisCalendar:(id)arg1 context:(id)arg2 ;
-(char)importICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 shouldSaveOnSuccess:(char)arg10 synchronousFinishBlock:(char)arg11 ;
-(char)_containsDangerousAlarms:(id)arg1 ;
-(void)_cleanComponent:(id)arg1 ;
-(char)_importCleanedDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 sharedUIDsToImport:(id)arg4 objectIDsImported:(id)arg5 progressBlock:(/*^block*/id)arg6 abortForIssueBlock:(/*^block*/id)arg7 ;
-(char)importICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 ;
-(void)blockingImportICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 progressBlock:(/*^block*/id)arg6 abortForIssueBlock:(/*^block*/id)arg7 finishBlock:(/*^block*/id)arg8 ;
-(void)asyncImportICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 ;
-(void)asyncImportFiles:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 ;
@end

