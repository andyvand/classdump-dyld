/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarItem.h>
#import <EventKit/EKProtocolMutableEventOccurrence.h>
#import <EventKit/CalDateRangeProtocol.h>

@class NSDate, NSString, NSNumber, NSCalendar, EKParticipant, NSArray, EKStructuredLocation, NSDictionary, NSManagedObjectID, NSURL, NSTimeZone, NSSet;

@interface EKEvent : EKCalendarItem <EKProtocolMutableEventOccurrence, CalDateRangeProtocol> {

	char isPhantom;
	char isYearlessBirthday;
	char isYearlessLeapMonthBirthday;
	NSString* lunarCalendarString;
	unsigned long long participantsStatus;
	NSString* sliceParentID;
	NSString* birthdayTitle;
	NSString* nameForBirthday;
	NSDate* _cachedStartOfDayForStartDate;
	NSDate* _cachedStartOfDayForEndDate;
	NSNumber* _cachedIsMultiDayTimedEvent;
	NSNumber* _cachedDaysSpanned;
	NSCalendar* _cachedTimeValuesCalendar;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) char allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) int availability; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) char isDetached; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (nonatomic,readonly) NSString * birthdayPersonUniqueID; 
@property (assign,nonatomic) char isPhantom; 
@property (nonatomic,retain) NSArray * locations; 
@property (assign,nonatomic) long long privacyLevel; 
@property (getter=isPrivacySet,nonatomic,readonly) char privacySet; 
@property (getter=isPrivacySetInDelegateOrSharedToMeCalendar,nonatomic,readonly) char privacySetInDelegateOrSharedToMeCalendar; 
@property (nonatomic,retain) EKStructuredLocation * structuredLocation; 
@property (nonatomic,retain) EKStructuredLocation * travelStartLocation; 
@property (assign,nonatomic) double travelTime; 
@property (nonatomic,readonly) char allowsAlarmModifications; 
@property (nonatomic,readonly) char allowsAllDayModifications; 
@property (nonatomic,readonly) char allowsAvailabilityModifications; 
@property (nonatomic,readonly) char allowsParticipantStatusModifications; 
@property (nonatomic,readonly) char allowsPrivateModifications; 
@property (nonatomic,readonly) char allowsTravelTimeModifications; 
@property (nonatomic,retain) NSDate * cachedStartOfDayForStartDate;                                                                          //@synthesize cachedStartOfDayForStartDate=_cachedStartOfDayForStartDate - In the implementation block
@property (nonatomic,retain) NSDate * cachedStartOfDayForEndDate;                                                                            //@synthesize cachedStartOfDayForEndDate=_cachedStartOfDayForEndDate - In the implementation block
@property (nonatomic,retain) NSNumber * cachedIsMultiDayTimedEvent;                                                                          //@synthesize cachedIsMultiDayTimedEvent=_cachedIsMultiDayTimedEvent - In the implementation block
@property (nonatomic,retain) NSNumber * cachedDaysSpanned;                                                                                   //@synthesize cachedDaysSpanned=_cachedDaysSpanned - In the implementation block
@property (nonatomic,retain) NSCalendar * cachedTimeValuesCalendar;                                                                          //@synthesize cachedTimeValuesCalendar=_cachedTimeValuesCalendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,retain,readonly) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSNumber * calendarItemPermissionNumber; 
@property (nonatomic,copy,readonly) id<EKProtocolCalendar> container; 
@property (nonatomic,copy,readonly) NSString * recurrenceRuleString; 
@property (nonatomic,readonly) char cachedHasAttendee; 
@property (nonatomic,readonly) char cachedHasAttachment; 
@property (nonatomic,readonly) char cachedHasAlarm; 
@property (nonatomic,readonly) char cachedIsCalendarOwnerInvitedAttendee; 
@property (nonatomic,readonly) char cachedIsCurrentUserInvitedAttendee; 
@property (nonatomic,copy,readonly) id<EKProtocolParticipant> participantForMe; 
@property (nonatomic,copy,readonly) NSString * organizerName; 
@property (nonatomic,copy,readonly) NSURL * organizerURL; 
@property (nonatomic,copy,readonly) NSString * organizerEmail; 
@property (nonatomic,readonly) char organizedByMe; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSString * scheduleAgentString; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZoneObject; 
@property (nonatomic,copy,readonly) NSDate * startDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char defaultAlarmWasDeleted; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSNumber * priorityNumber; 
@property (nonatomic,readonly) NSString * lunarCalendarString; 
@property (nonatomic,copy,readonly) NSDate * endDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSSet * notificationBoxMessageSet; 
@property (nonatomic,copy,readonly) NSString * privacyLevelString; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,readonly) int availabilityEnum; 
@property (nonatomic,readonly) double travelDuration; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> ekStructuredLocation; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> ekStructuredStartLocation; 
@property (nonatomic,readonly) unsigned long long participantsStatus; 
@property (nonatomic,copy,readonly) NSString * responseComment; 
@property (nonatomic,readonly) char dontSendNotificationForChanges; 
@property (nonatomic,copy,readonly) NSString * sliceParentID; 
@property (nonatomic,copy,readonly) NSString * birthdayTitle; 
@property (nonatomic,readonly) NSString * nameForBirthday; 
@property (nonatomic,readonly) char isYearlessBirthday; 
@property (nonatomic,readonly) char isYearlessLeapMonthBirthday; 
+(id)eventWithEventStore:(id)arg1 ;
+(Class)frozenClass;
+(id)itemWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(unsigned long long)hashForObject:(id)arg1 ;
+(id)knownImmutableKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownSingleValueKeys;
+(id)batchChangeNotificationName;
+(id)_eventWithMasterEvent:(id)arg1 forRecurrenceDate:(id)arg2 ;
+(id)_eventWithOriginalOccurrence:(id)arg1 forRecurrenceDate:(id)arg2 store:(id)arg3 ;
+(char)_isValidRecurrenceDate:(id)arg1 inSeries:(id)arg2 ;
+(id)_basicChangesRequiringSpanAll;
+(id)_eventWithOriginalOccurrence:(id)arg1 forRecurrenceDate:(id)arg2 createPartialBackingObject:(char)arg3 eventStore:(id)arg4 ;
+(int)_eventAvailabilityForParticipantStatus:(int)arg1 ;
+(char)_isValidRecurrenceDate:(id)arg1 event:(id)arg2 master:(id)arg3 ;
+(char)_eventsFromSameSeriesAreOutOfOrderForEvent:(id)arg1 otherEvent:(id)arg2 ;
+(id)eventFromICSEvent:(id)arg1 withDocument:(id)arg2 inStore:(id)arg3 ;
+(id)knownSkipValidationKeys;
+(id)eventFromICSEvent:(id)arg1 inStore:(id)arg2 ;
+(id)_stringForEventStatus:(int)arg1 ;
-(NSString *)eventIdentifier;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(char)canMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 error:(id*)arg3 ;
-(char)canMoveOrCopyFromCalendar:(id)arg1 toCalendar:(id)arg2 error:(id*)arg3 ;
-(id)frozenObject;
-(void)clearCachedTimeValues;
-(char)validate:(id*)arg1 ;
-(char)_validateEntityTypeIsSupported:(id*)arg1 ;
-(char)_validateEditable:(id*)arg1 ;
-(char)_validateRecurrence:(id*)arg1 ;
-(char)_needsAttendeePartStatReset;
-(void)_applyKnownImmutableValuesFrom:(id)arg1 ;
-(id)externalURI;
-(id)_keysToChangeForDuplicateWithOptions:(long long)arg1 ;
-(void)_updateDatesForRecurrenceDate:(id)arg1 ;
-(char)validateWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)isValidRecurrenceDate:(id)arg1 ;
-(char)isOnlyOccurrence;
-(char)isUndetached;
-(char)isDeletedDetached;
-(char)isUnexcepted;
-(void)_removeNotificationBoxMessage:(id)arg1 ;
-(char)intersectsRangeIfFloating:(id)arg1 normalRange:(id)arg2 ;
-(id)conflictDetails;
-(void)createConflictsForDates:(id)arg1 ;
-(char)hasChangesRequiringSpanAll;
-(char)saveWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(char)_isPrivacySetInDelegateOrSharedToMeCalendar:(id)arg1 ;
-(char)_isNonDetachedOccurrenceInSeries;
-(char)isPrivacySetInDelegateOrSharedToMeCalendar;
-(id)startDateIncludingTravelUnadjustedFromUTC;
-(char)_hasBasicChangesRequiringSpanAll;
-(char)_hasRecurrenceRuleChangeRequiringSpanAll;
-(char)_hasOrHadRecurrenceRule;
-(char)_hasRecurrenceRuleChangeHelperIncludeAddition:(char)arg1 includeRemoval:(char)arg2 ;
-(char)allowsAvailabilityModifications;
-(char)_allowsAnyModificationsByAttendees;
-(void)setNotificationBoxMessageSet:(NSSet *)arg1 ;
-(char)_requirementsToMoveOrCopyToCalendarHelperAllowedToMoveOrCopyEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(char)_requirementsToMoveToCalendarHelperDuplicationRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(char)_requirementsToMoveToCalendarHelperAlterationsRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(char)_requirementsToMoveToCalendarHelperReinviteAttendeesRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(char)_requirementsToMoveToCalendarHelperNeedToRemoveOriginalToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(char)_requirementsToMoveToCalendarHelperRemoveAttendeesRequiredToMoveEventFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(long long)requirementsToMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(char)_canMoveOrCopyFromCalendar:(id)arg1 toCalendar:(id)arg2 allowedRequirements:(long long)arg3 error:(id*)arg4 ;
-(char)_validateDatesWithError:(id*)arg1 ;
-(char)_validatePrivacyWithError:(id*)arg1 ;
-(char)_validateSpan:(int)arg1 error:(id*)arg2 ;
-(id)_conflictDatesFromConflicts:(id)arg1 ;
-(id)_existingOrNewOccurrenceForDate:(id)arg1 ;
-(void)_updateDatesForStartDate:(id)arg1 ;
-(void)setBirthdayTitle:(NSString *)arg1 ;
-(NSCalendar *)cachedTimeValuesCalendar;
-(void)setCachedTimeValuesCalendar:(NSCalendar *)arg1 ;
-(void)setCachedStartOfDayForStartDate:(NSDate *)arg1 ;
-(void)setCachedStartOfDayForEndDate:(NSDate *)arg1 ;
-(void)checkAndSetCalendarForCaching:(id)arg1 ;
-(NSDate *)cachedStartOfDayForStartDate;
-(NSDate *)cachedStartOfDayForEndDate;
-(id)startOfDayForStartDateInCalendar:(id)arg1 ;
-(id)_sortedExpandedEventsForSeriesTilLatestRelevantDateHelperEarlyDate:(id)arg1 laterDate:(id)arg2 ;
-(char)overlapsWithOrIsSameDayAsEventInSeries;
-(char)seriesHasOutOfOrderEvents;
-(char)alarmOverlapsWithEventInSeries;
-(char)_isDifferentFromCommittedEventHelperRequiresReschedule:(char)arg1 ;
-(char)durationOverlapsRecurrenceInterval;
-(char)seriesHasOverlappingOrOnSameDayOrOutOfOrderEvents;
-(char)isOutOfOrderWithEventInSeries;
-(char)_validateAlarmsEditable:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateCalendarEditable:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateParticipationStatusEditable:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateResponseCommentEditable:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateTravelTimeEditable:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateAllDayEditable:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateAvailability:(id*)arg1 requiresFurtherValidation:(char*)arg2 keysAlreadyValidated:(id)arg3 ;
-(char)_validateEditableHelperBasedOnChangesToKey:(id)arg1 checkBoolPropertiesAndValues:(id)arg2 error:(id*)arg3 errorCode:(int)arg4 requiresFurtherValidation:(char*)arg5 keysAlreadyValidated:(id)arg6 ;
-(char)_validateEditableHelperBasedOnChangesToKey:(id)arg1 checkBoolProperty:(id)arg2 propertyValue:(char)arg3 error:(id*)arg4 errorCode:(int)arg5 requiresFurtherValidation:(char*)arg6 keysAlreadyValidated:(id)arg7 ;
-(char)_onlyAttendeeChangeWasToMyPartStat;
-(char)isDifferentFromCommittedEventAndRequiresRSVP;
-(void)setSliceParentID:(NSString *)arg1 ;
-(char)_startDateIsOnSameDayAsOtherEventInSeries;
-(char)_undoRequiresSpanAll;
-(char)hasChangesAffectingRecurrenceDate;
-(NSString *)birthdayPersonUniqueID;
-(char)commitWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)_travelTimeModificationIsOK;
-(void)_removeAllNotificationBoxMessages;
-(long long)requirementsToMoveToCalendar:(id)arg1 ;
-(char)requiresCopyToMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
-(id)copyToCalendar:(id)arg1 withOptions:(long long)arg2 ;
-(NSDate *)occurrenceDate;
-(id)_newDetachedEventWithDetachedOccurrence:(id)arg1 forRecurrenceDate:(id)arg2 ;
-(id)_detachedEventForDetachedOccurrence:(id)arg1 forRecurrenceDate:(id)arg2 ;
-(id)startOfDayForEndDateInCalendar:(id)arg1 ;
-(char)isMultiDayTimedEventInCalendar:(id)arg1 ;
-(char)seriesHasOverlappingAlarms;
-(char)hasFieldsIncompatibleWithMoveToCalendar:(id)arg1 ;
-(char)isDifferentFromCommittedEventAndHasOnlyUnscheduledAttendees;
-(char)isFirstOccurrence;
-(id)eventOccurrenceID;
-(char)allowsAttendeesModifications;
-(int)attendeesStatus;
-(char)allowsParticipantStatusModifications;
-(int)availability;
-(void)setAvailability:(int)arg1 ;
-(long long)daysSpannedInCalendar:(id)arg1 ;
-(id)detachedEventOccurrences;
-(char)isDifferentFromCommittedEventAndHasUnscheduledAttendees;
-(char)isDifferentFromCommittedEvent;
-(char)isDifferentFromCommittedEventExceptingPerUserProperties;
-(char)isDifferentFromCommittedEventAndRequiresReschedule;
-(char)isPrivacySet;
-(void)setPrivacyLevel:(long long)arg1 ;
-(char)allowsPrivateModifications;
-(void)_downloadAttachments;
-(char)allowsAttachmentModifications;
-(void)changeAttendeeStatusAndUpdateAvailability:(int)arg1 ;
-(char)allowsTravelTimeModifications;
-(void)makeRecurrenceEndCountBased;
-(void)makeRecurrenceEndDateBased;
-(id)defaultAlarms;
-(char)allowsAlarmModifications;
-(long long)privacyLevel;
-(char)allowsAllDayModifications;
-(char)allowsResponseCommentModifications;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(id)copy;
-(NSString *)title;
-(char)isEditable;
-(int)status;
-(NSDate *)endDate;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
-(char)isDetached;
-(unsigned long long)entityType;
-(id)masterEventOccurrence;
-(char)isPhantom;
-(NSDate *)endDateUnadjustedFromUTC;
-(NSString *)nameForBirthday;
-(char)isYearlessBirthday;
-(NSString *)lunarCalendarString;
-(id)exceptionDates;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)locations;
-(EKParticipant *)organizer;
-(double)travelDuration;
-(void)setTravelDuration:(double)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(EKStructuredLocation *)travelStartLocation;
-(void)setTravelStartLocation:(EKStructuredLocation *)arg1 ;
-(char)isMainOccurrence;
-(char)isSignificantlyDetached;
-(char)isBirthday;
-(id)dropBoxLocation;
-(void)setIsDetached:(char)arg1 ;
-(void)setIsPhantom:(char)arg1 ;
-(char)isEvent;
-(void)setAllDay:(char)arg1 ;
-(void)setTimeZoneObject:(NSTimeZone *)arg1 ;
-(id)startDateIncludingTravel;
-(char)isSignificantlyDetachedIgnoringParticipation;
-(NSSet *)notificationBoxMessageSet;
-(NSString *)privacyLevelString;
-(int)availabilityEnum;
-(id<EKProtocolStructuredLocation>)ekStructuredLocation;
-(id<EKProtocolStructuredLocation>)ekStructuredStartLocation;
-(unsigned long long)participantsStatus;
-(NSString *)responseComment;
-(char)dontSendNotificationForChanges;
-(NSString *)sliceParentID;
-(NSString *)birthdayTitle;
-(char)isYearlessLeapMonthBirthday;
-(void)setEndDateUnadjustedFromUTC:(NSDate *)arg1 ;
-(void)setAvailabilityEnum:(int)arg1 ;
-(void)setEkStructuredLocation:(id<EKProtocolStructuredLocation>)arg1 ;
-(void)setEkStructuredStartLocation:(id<EKProtocolStructuredLocation>)arg1 ;
-(void)setPrivacyLevelString:(NSString *)arg1 ;
-(void)setResponseComment:(NSString *)arg1 ;
-(void)setDontSendNotificationForChanges:(char)arg1 ;
-(void)setCachedDaysSpanned:(NSNumber *)arg1 ;
-(void)setCachedIsMultiDayTimedEvent:(NSNumber *)arg1 ;
-(NSNumber *)cachedDaysSpanned;
-(NSNumber *)cachedIsMultiDayTimedEvent;
-(long long)compareTimeEndingRecently:(id)arg1 ;
-(char)refresh;
@end

