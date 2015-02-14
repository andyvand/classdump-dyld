/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalCacheableEventOccurrence.h>

@class NSString, NSMutableDictionary, NSManagedObjectID, NSDate, NSNumber, NSTimeZone, CoreCalendarSource, CalManagedCalendar, NSColor, NSURL;

@interface CalEventOccurrence : NSObject <CalCacheableEventOccurrence> {

	NSString* _occurrenceID;
	NSMutableDictionary* _changedProperties;
	NSManagedObjectID* _managedEventObjectID;
	NSManagedObjectID* _masterManagedEventObjectID;
	NSManagedObjectID* _managedCalendarObjectID;
	NSDate* _date;
	NSDate* _recurrenceDate;
	NSDate* _cachedStart;
	NSDate* _initialStart;
	NSDate* _cachedEnd;
	NSDate* _initialEnd;
	NSDate* _cachedStartDateWithoutTimeComponents;
	NSDate* _cachedEndDateWithoutTimeComponents;
	NSNumber* _cachedDaysSpanned;
	NSNumber* _cachedIsMultiDayTimedEvent;
	NSTimeZone* _timeZone;
	NSString* __localUID;
	NSString* __sharedUID;
	NSString* _accountImageID;
	char _needsRebin;
	NSNumber* _isAllDay;
	NSNumber* _travelDuration;
	NSString* _travelRouteType;
	NSString* _birthdayTitle;
	NSNumber* _needsReply;
	NSNumber* _permission;
	NSNumber* _invitationMode;
	NSNumber* _attendeeIconState;
	NSDate* _creationDate;
	NSString* _title;
	NSNumber* _status;
	NSString* _location;
	NSNumber* _hasAttachment;
	NSString* _myAttendeeStatus;
	NSString* _timeZoneString;
	NSString* _calendarServerAccess;
	char _isEphemeral;

}

@property (assign,nonatomic) char isEphemeral;                                            //@synthesize isEphemeral=_isEphemeral - In the implementation block
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSString * location; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSString * accountImageID;                                   //@synthesize accountImageID=_accountImageID - In the implementation block
@property (assign,nonatomic) char needsRebin;                                             //@synthesize needsRebin=_needsRebin - In the implementation block
@property (assign,nonatomic) char isAllDay; 
@property (nonatomic,readonly) char isFloating; 
@property (nonatomic,readonly) char needsReply; 
@property (nonatomic,readonly) char isStatusMaybe; 
@property (nonatomic,readonly) char isStatusDeclined; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double travelDuration; 
@property (nonatomic,readonly) NSString * travelRouteType; 
@property (nonatomic,readonly) char hasAttachment; 
@property (nonatomic,readonly) int attendeeIconState; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,retain,readonly) CoreCalendarSource * calendarSource; 
@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * recurrenceDate;                                     //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,retain,readonly) NSString * sharedUID; 
@property (nonatomic,retain,readonly) NSString * localUID; 
@property (nonatomic,retain) NSManagedObjectID * managedEventObjectID;                    //@synthesize managedEventObjectID=_managedEventObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * masterManagedEventObjectID;              //@synthesize masterManagedEventObjectID=_masterManagedEventObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * managedCalendarObjectID;                 //@synthesize managedCalendarObjectID=_managedCalendarObjectID - In the implementation block
@property (nonatomic,retain,readonly) CalManagedCalendar * calendar; 
@property (nonatomic,retain,readonly) NSColor * color; 
@property (nonatomic,readonly) unsigned long long calendarOrder; 
@property (nonatomic,retain) NSString * occurrenceID;                                     //@synthesize occurrenceID=_occurrenceID - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateForSorting; 
@property (retain) NSString * title; 
@property (retain) NSURL * url; 
@property (nonatomic,retain) NSDate * cachedStart;                                        //@synthesize cachedStart=_cachedStart - In the implementation block
@property (nonatomic,retain) NSDate * cachedEnd;                                          //@synthesize cachedEnd=_cachedEnd - In the implementation block
@property (nonatomic,retain) NSDate * cachedStartDateWithoutTimeComponents;               //@synthesize cachedStartDateWithoutTimeComponents=_cachedStartDateWithoutTimeComponents - In the implementation block
@property (nonatomic,retain) NSDate * cachedEndDateWithoutTimeComponents;                 //@synthesize cachedEndDateWithoutTimeComponents=_cachedEndDateWithoutTimeComponents - In the implementation block
@property (nonatomic,retain) NSNumber * cachedDaysSpanned;                                //@synthesize cachedDaysSpanned=_cachedDaysSpanned - In the implementation block
@property (nonatomic,retain) NSNumber * cachedIsMultiDayTimedEvent;                       //@synthesize cachedIsMultiDayTimedEvent=_cachedIsMultiDayTimedEvent - In the implementation block
@property (nonatomic,retain) NSDate * initialStart;                                       //@synthesize initialStart=_initialStart - In the implementation block
@property (nonatomic,retain) NSDate * initialEnd;                                         //@synthesize initialEnd=_initialEnd - In the implementation block
@property (nonatomic,retain) NSTimeZone * cachedTimeZone;                                 //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSString * __localUID;                                       //@synthesize _localUID=__localUID - In the implementation block
@property (nonatomic,retain) NSString * __sharedUID;                                      //@synthesize _sharedUID=__sharedUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)legacyOccurrenceFromOccurrence:(id)arg1 ;
+(id)occurrenceInCalendar:(id)arg1 ;
+(id)changedPropertiesToCheck;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(id)init;
-(void)dealloc;
-(double)duration;
-(NSString *)description;
-(unsigned long long)hash;
-(NSURL *)url;
-(id)commitEditing;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)discardEditing;
-(char)isEditable;
-(long long)compare:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(int)status;
-(NSDate *)date;
-(char)isValid;
-(NSColor *)color;
-(CalManagedCalendar *)calendar;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)endDate;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)location;
-(id)creationDate;
-(id)_managedObjectContext;
-(char)isFloating;
-(void)setLocation:(NSString *)arg1 ;
-(id)myAttendeeStatus;
-(NSString *)localUID;
-(NSString *)occurrenceID;
-(NSString *)sharedUID;
-(id)repository;
-(char)isDetachedEntity;
-(char)hasRecurrenceData;
-(void)setEndDate:(NSDate *)arg1 ;
-(char)needsReply;
-(double)travelDuration;
-(id)changedValues;
-(int)invitationMode;
-(char)isPrivateAndDelegateOrCalendarSharedToMe;
-(char)isAllDay;
-(char)isEqualToOccurrence:(id)arg1 ;
-(CoreCalendarSource *)calendarSource;
-(char)ableToMoveToCalendar:(id)arg1 ;
-(int)permission;
-(char)isEditableIgnoringInvitationStatus:(char)arg1 ;
-(char)isPrivate;
-(id)calendarServerAccess;
-(void)setIsAllDay:(char)arg1 ;
-(char)hasAttachment;
-(id)initWithOccurrenceID:(id)arg1 ;
-(int)attendeeIconState;
-(id)initWithManagedEvent:(id)arg1 date:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)initWithManagedEvent:(id)arg1 ;
-(NSString *)travelRouteType;
-(void)setIsEphemeral:(char)arg1 ;
-(void)setManagedCalendarObjectID:(NSManagedObjectID *)arg1 ;
-(void)set__sharedUID:(NSString *)arg1 ;
-(void)set__localUID:(NSString *)arg1 ;
-(void)setAccountImageID:(NSString *)arg1 ;
-(void)setOccurrenceID:(NSString *)arg1 ;
-(void)setManagedEventObjectID:(NSManagedObjectID *)arg1 ;
-(void)setMasterManagedEventObjectID:(NSManagedObjectID *)arg1 ;
-(void)_updateObjectIDsFromManagedEvent:(id)arg1 ;
-(void)setRecurrenceDate:(NSDate *)arg1 ;
-(void)setInitialStart:(NSDate *)arg1 ;
-(void)setCachedStart:(NSDate *)arg1 ;
-(void)setInitialEnd:(NSDate *)arg1 ;
-(void)setCachedEnd:(NSDate *)arg1 ;
-(void)setCachedTimeZone:(NSTimeZone *)arg1 ;
-(void)setCachedEndDateWithoutTimeComponents:(NSDate *)arg1 ;
-(void)setCachedStartDateWithoutTimeComponents:(NSDate *)arg1 ;
-(void)setCachedDaysSpanned:(NSNumber *)arg1 ;
-(void)setCachedIsMultiDayTimedEvent:(NSNumber *)arg1 ;
-(char)isEphemeral;
-(NSManagedObjectID *)managedEventObjectID;
-(unsigned long long)calendarOrder;
-(id)managedEventInUserOrChildContext;
-(id)_legacyDateFromOccurrenceDate:(id)arg1 ;
-(id)_entityPropertyForChangedKey:(id)arg1 ;
-(id)_entityKeyForKey:(id)arg1 ;
-(id)_entityValueForValue:(id)arg1 ;
-(id)commitEditingWithDelegate:(id)arg1 ;
-(NSString *)__localUID;
-(NSString *)__sharedUID;
-(id)managedCalendarInUserOrChildContext;
-(char)_hasTimeChange;
-(id)commitDateTimeChangeWithDelegate:(id)arg1 ;
-(char)_hasAnyChange;
-(id)commitWithDelegate:(id)arg1 ;
-(char)validateForCommit;
-(id)commitWithDelegate:(id)arg1 commitWholeRecurrence:(char)arg2 ;
-(id)commitDateTimeChangeWithDelegate:(id)arg1 withEntityTimeZone:(char)arg2 ;
-(void)removePropertyForKey:(id)arg1 ;
-(NSDate *)initialEnd;
-(NSDate *)initialStart;
-(id)_managedEventInContext:(id)arg1 ;
-(id)_managedCalendarInContext:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSTimeZone *)cachedTimeZone;
-(NSNumber *)cachedDaysSpanned;
-(NSNumber *)cachedIsMultiDayTimedEvent;
-(id)startDateWithoutTimeComponents;
-(NSDate *)cachedStartDateWithoutTimeComponents;
-(NSDate *)cachedEndDateWithoutTimeComponents;
-(long long)daysSpanned;
-(NSDate *)cachedStart;
-(void)setNeedsRebin:(char)arg1 ;
-(NSDate *)cachedEnd;
-(id)committedPropertyForKey:(id)arg1 ;
-(id)changedPropertyForKey:(id)arg1 ;
-(NSManagedObjectID *)masterManagedEventObjectID;
-(NSManagedObjectID *)managedCalendarObjectID;
-(long long)compareTimeEndingRecently:(id)arg1 ;
-(char)deleteWithDelegate:(id)arg1 ;
-(id)userOrChildContext;
-(char)associatedWithChildContext;
-(id)managedCalendarInContext:(id)arg1 ;
-(char)isStatusMaybe;
-(char)isStatusDeclined;
-(char)isMultiDayTimedEvent;
-(id)endDateWithoutTimeComponents;
-(char)hasDetachedOccurrences;
-(char)supportsAttachments;
-(id)legacyOccurrence;
-(NSDate *)dateForSorting;
-(NSDate *)recurrenceDate;
-(NSString *)accountImageID;
-(char)needsRebin;
-(id)propertyForKey:(id)arg1 ;
@end

