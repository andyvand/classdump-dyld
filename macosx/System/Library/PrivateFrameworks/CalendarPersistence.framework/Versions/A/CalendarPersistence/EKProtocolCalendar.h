/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSSet, NSURL;


@protocol EKProtocolCalendar <EKProtocolObject>
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy,readonly) NSString * colorString; 
@property (nonatomic,copy,readonly) NSString * symbolicColorName; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (nonatomic,readonly) char allowReminders; 
@property (nonatomic,readonly) char allowEvents; 
@property (nonatomic,copy,readonly) id<EKProtocolCalendarSource> containerSource; 
@property (nonatomic,readonly) char ignoreAlarms; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (readonly) char isMarkedUndeletable; 
@property (readonly) char isMarkedImmutableSharees; 
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
@required
-(NSString *)path;
-(id)title;
-(id)color;
-(NSString *)calendarIdentifier;
-(NSString *)sharingStatusString;
-(NSSet *)sharedOwnerAddresses;
-(id<EKProtocolCalendarSource>)containerSource;
-(NSString *)symbolicColorName;
-(NSString *)colorString;
-(NSURL *)defaultOrganizerAddressForNewItems;
-(NSString *)defaultOrganizerNameForNewItems;
-(char)isSubscribed;
-(char)isDefaultSchedulingCalendar;
-(NSString *)notes;
-(char)suppressEventSchedulingNotifications;
-(char)isMarkedImmutableSharees;
-(char)isRenameable;
-(char)isColorEditable;
-(char)isFacebookBirthdayCalendar;
-(id)sharees;
-(char)allowsScheduling;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(NSString *)defaultOrganizerEmailForNewItems;
-(char)isFamilyCalendar;
-(NSString *)sharedOwnerName;
-(NSString *)sharedOwnerAddress;
-(char)isShareable;
-(char)defaultOrganizerIsMeForNewItems;
-(NSString *)serverPath;
-(char)isSubscribedHolidayCalendar;
-(char)allowEvents;
-(char)allowReminders;
-(int)displayOrder;
-(char)allowsContentModifications;
-(char)ignoreAlarms;
-(char)isMarkedUndeletable;
-(char)cachedHasSharees;
-(char)isDistinguishedExchangeCalendar;
-(NSSet *)defaultAlarmsForTimedEvents;
-(NSSet *)defaultAlarmsForAllDayEvents;

@end

