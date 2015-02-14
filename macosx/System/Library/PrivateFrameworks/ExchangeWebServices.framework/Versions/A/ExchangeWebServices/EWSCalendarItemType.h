/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSItemType.h>

@class NSString, NSDateComponents, EWSSingleRecipientType, NSArray, EWSRecurrenceType, EWSOccurrenceInfoType, EWSTimeZoneType;

@interface EWSCalendarItemType : EWSItemType {

	NSString* _UID;
	NSDateComponents* _RecurrenceId;
	NSDateComponents* _DateTimeStamp;
	NSDateComponents* _Start;
	NSDateComponents* _End;
	NSDateComponents* _OriginalStart;
	char _IsAllDayEvent;
	char _IsAllDayEventSpecified;
	int _LegacyFreeBusyStatus;
	NSString* _Location;
	NSString* _When;
	char _IsMeeting;
	char _IsMeetingSpecified;
	char _IsCancelled;
	char _IsCancelledSpecified;
	char _IsRecurring;
	char _IsRecurringSpecified;
	char _MeetingRequestWasSent;
	char _MeetingRequestWasSentSpecified;
	char _IsResponseRequested;
	char _IsResponseRequestedSpecified;
	int _CalendarItemType;
	int _MyResponseType;
	EWSSingleRecipientType* _Organizer;
	NSArray* _RequiredAttendees;
	NSArray* _OptionalAttendees;
	NSArray* _Resources;
	long long _ConflictingMeetingCount;
	char _ConflictingMeetingCountSpecified;
	long long _AdjacentMeetingCount;
	char _AdjacentMeetingCountSpecified;
	NSArray* _ConflictingMeetings;
	NSArray* _AdjacentMeetings;
	NSString* _Duration;
	NSString* _TimeZone;
	NSDateComponents* _AppointmentReplyTime;
	long long _AppointmentSequenceNumber;
	char _AppointmentSequenceNumberSpecified;
	long long _AppointmentState;
	char _AppointmentStateSpecified;
	EWSRecurrenceType* _Recurrence;
	EWSOccurrenceInfoType* _FirstOccurrence;
	EWSOccurrenceInfoType* _LastOccurrence;
	NSArray* _ModifiedOccurrences;
	NSArray* _DeletedOccurrences;
	EWSTimeZoneType* _MeetingTimeZone;
	long long _ConferenceType;
	char _ConferenceTypeSpecified;
	char _AllowNewTimeProposal;
	char _AllowNewTimeProposalSpecified;
	char _IsOnlineMeeting;
	char _IsOnlineMeetingSpecified;
	NSString* _MeetingWorkspaceUrl;
	NSString* _NetShowUrl;

}

@property (nonatomic,copy) NSString * UID;                                         //@synthesize UID=_UID - In the implementation block
@property (nonatomic,retain) NSDateComponents * RecurrenceId;                      //@synthesize RecurrenceId=_RecurrenceId - In the implementation block
@property (nonatomic,retain) NSDateComponents * DateTimeStamp;                     //@synthesize DateTimeStamp=_DateTimeStamp - In the implementation block
@property (setter=tart,nonatomic,retain) NSDateComponents * Start;                 //@synthesize Start=_Start - In the implementation block
@property (nonatomic,retain) NSDateComponents * End;                               //@synthesize End=_End - In the implementation block
@property (nonatomic,retain) NSDateComponents * OriginalStart;                     //@synthesize OriginalStart=_OriginalStart - In the implementation block
@property (assign,nonatomic) char IsAllDayEvent;                                   //@synthesize IsAllDayEvent=_IsAllDayEvent - In the implementation block
@property (assign,nonatomic) char IsAllDayEventSpecified;                          //@synthesize IsAllDayEventSpecified=_IsAllDayEventSpecified - In the implementation block
@property (assign,nonatomic) int LegacyFreeBusyStatus;                             //@synthesize LegacyFreeBusyStatus=_LegacyFreeBusyStatus - In the implementation block
@property (nonatomic,copy) NSString * Location;                                    //@synthesize Location=_Location - In the implementation block
@property (nonatomic,copy) NSString * When;                                        //@synthesize When=_When - In the implementation block
@property (assign,nonatomic) char IsMeeting;                                       //@synthesize IsMeeting=_IsMeeting - In the implementation block
@property (assign,nonatomic) char IsMeetingSpecified;                              //@synthesize IsMeetingSpecified=_IsMeetingSpecified - In the implementation block
@property (assign,nonatomic) char IsCancelled;                                     //@synthesize IsCancelled=_IsCancelled - In the implementation block
@property (assign,nonatomic) char IsCancelledSpecified;                            //@synthesize IsCancelledSpecified=_IsCancelledSpecified - In the implementation block
@property (assign,nonatomic) char IsRecurring;                                     //@synthesize IsRecurring=_IsRecurring - In the implementation block
@property (assign,nonatomic) char IsRecurringSpecified;                            //@synthesize IsRecurringSpecified=_IsRecurringSpecified - In the implementation block
@property (assign,nonatomic) char MeetingRequestWasSent;                           //@synthesize MeetingRequestWasSent=_MeetingRequestWasSent - In the implementation block
@property (assign,nonatomic) char MeetingRequestWasSentSpecified;                  //@synthesize MeetingRequestWasSentSpecified=_MeetingRequestWasSentSpecified - In the implementation block
@property (assign,nonatomic) char IsResponseRequested;                             //@synthesize IsResponseRequested=_IsResponseRequested - In the implementation block
@property (assign,nonatomic) char IsResponseRequestedSpecified;                    //@synthesize IsResponseRequestedSpecified=_IsResponseRequestedSpecified - In the implementation block
@property (assign,nonatomic) int CalendarItemType;                                 //@synthesize CalendarItemType=_CalendarItemType - In the implementation block
@property (assign,nonatomic) int MyResponseType;                                   //@synthesize MyResponseType=_MyResponseType - In the implementation block
@property (nonatomic,retain) EWSSingleRecipientType * Organizer;                   //@synthesize Organizer=_Organizer - In the implementation block
@property (nonatomic,copy) NSArray * RequiredAttendees;                            //@synthesize RequiredAttendees=_RequiredAttendees - In the implementation block
@property (nonatomic,copy) NSArray * OptionalAttendees;                            //@synthesize OptionalAttendees=_OptionalAttendees - In the implementation block
@property (nonatomic,copy) NSArray * Resources;                                    //@synthesize Resources=_Resources - In the implementation block
@property (assign,nonatomic) long long ConflictingMeetingCount;                    //@synthesize ConflictingMeetingCount=_ConflictingMeetingCount - In the implementation block
@property (assign,nonatomic) char ConflictingMeetingCountSpecified;                //@synthesize ConflictingMeetingCountSpecified=_ConflictingMeetingCountSpecified - In the implementation block
@property (assign,nonatomic) long long AdjacentMeetingCount;                       //@synthesize AdjacentMeetingCount=_AdjacentMeetingCount - In the implementation block
@property (assign,nonatomic) char AdjacentMeetingCountSpecified;                   //@synthesize AdjacentMeetingCountSpecified=_AdjacentMeetingCountSpecified - In the implementation block
@property (nonatomic,copy) NSArray * ConflictingMeetings;                          //@synthesize ConflictingMeetings=_ConflictingMeetings - In the implementation block
@property (nonatomic,copy) NSArray * AdjacentMeetings;                             //@synthesize AdjacentMeetings=_AdjacentMeetings - In the implementation block
@property (nonatomic,copy) NSString * Duration; 
@property (nonatomic,copy) NSString * TimeZone;                                    //@synthesize TimeZone=_TimeZone - In the implementation block
@property (nonatomic,retain) NSDateComponents * AppointmentReplyTime;              //@synthesize AppointmentReplyTime=_AppointmentReplyTime - In the implementation block
@property (assign,nonatomic) long long AppointmentSequenceNumber;                  //@synthesize AppointmentSequenceNumber=_AppointmentSequenceNumber - In the implementation block
@property (assign,nonatomic) char AppointmentSequenceNumberSpecified;              //@synthesize AppointmentSequenceNumberSpecified=_AppointmentSequenceNumberSpecified - In the implementation block
@property (assign,nonatomic) long long AppointmentState;                           //@synthesize AppointmentState=_AppointmentState - In the implementation block
@property (assign,nonatomic) char AppointmentStateSpecified;                       //@synthesize AppointmentStateSpecified=_AppointmentStateSpecified - In the implementation block
@property (nonatomic,retain) EWSRecurrenceType * Recurrence;                       //@synthesize Recurrence=_Recurrence - In the implementation block
@property (nonatomic,retain) EWSOccurrenceInfoType * FirstOccurrence;              //@synthesize FirstOccurrence=_FirstOccurrence - In the implementation block
@property (nonatomic,retain) EWSOccurrenceInfoType * LastOccurrence;               //@synthesize LastOccurrence=_LastOccurrence - In the implementation block
@property (nonatomic,copy) NSArray * ModifiedOccurrences;                          //@synthesize ModifiedOccurrences=_ModifiedOccurrences - In the implementation block
@property (nonatomic,copy) NSArray * DeletedOccurrences;                           //@synthesize DeletedOccurrences=_DeletedOccurrences - In the implementation block
@property (nonatomic,retain) EWSTimeZoneType * MeetingTimeZone;                    //@synthesize MeetingTimeZone=_MeetingTimeZone - In the implementation block
@property (assign,nonatomic) long long ConferenceType;                             //@synthesize ConferenceType=_ConferenceType - In the implementation block
@property (assign,nonatomic) char ConferenceTypeSpecified;                         //@synthesize ConferenceTypeSpecified=_ConferenceTypeSpecified - In the implementation block
@property (assign,nonatomic) char AllowNewTimeProposal;                            //@synthesize AllowNewTimeProposal=_AllowNewTimeProposal - In the implementation block
@property (assign,nonatomic) char AllowNewTimeProposalSpecified;                   //@synthesize AllowNewTimeProposalSpecified=_AllowNewTimeProposalSpecified - In the implementation block
@property (assign,nonatomic) char IsOnlineMeeting;                                 //@synthesize IsOnlineMeeting=_IsOnlineMeeting - In the implementation block
@property (assign,nonatomic) char IsOnlineMeetingSpecified;                        //@synthesize IsOnlineMeetingSpecified=_IsOnlineMeetingSpecified - In the implementation block
@property (nonatomic,copy) NSString * MeetingWorkspaceUrl;                         //@synthesize MeetingWorkspaceUrl=_MeetingWorkspaceUrl - In the implementation block
@property (nonatomic,copy) NSString * NetShowUrl;                                  //@synthesize NetShowUrl=_NetShowUrl - In the implementation block
+(id)definition;
-(char)IsMeeting;
-(void)setIsMeeting:(char)arg1 ;
-(char)IsRecurring;
-(void)setIsRecurring:(char)arg1 ;
-(NSDateComponents *)RecurrenceId;
-(void)setRecurrenceId:(NSDateComponents *)arg1 ;
-(void)setDateTimeStamp:(NSDateComponents *)arg1 ;
-(void)setOriginalStart:(NSDateComponents *)arg1 ;
-(char)IsAllDayEventSpecified;
-(NSString *)When;
-(void)setWhen:(NSString *)arg1 ;
-(char)IsMeetingSpecified;
-(void)setIsMeetingSpecified:(char)arg1 ;
-(char)IsCancelledSpecified;
-(void)setIsCancelledSpecified:(char)arg1 ;
-(char)IsRecurringSpecified;
-(void)setIsRecurringSpecified:(char)arg1 ;
-(void)setMeetingRequestWasSent:(char)arg1 ;
-(char)MeetingRequestWasSentSpecified;
-(void)setMeetingRequestWasSentSpecified:(char)arg1 ;
-(char)IsResponseRequestedSpecified;
-(void)setIsResponseRequestedSpecified:(char)arg1 ;
-(void)setCalendarItemType:(int)arg1 ;
-(long long)ConflictingMeetingCount;
-(void)setConflictingMeetingCount:(long long)arg1 ;
-(char)ConflictingMeetingCountSpecified;
-(void)setConflictingMeetingCountSpecified:(char)arg1 ;
-(long long)AdjacentMeetingCount;
-(void)setAdjacentMeetingCount:(long long)arg1 ;
-(char)AdjacentMeetingCountSpecified;
-(void)setAdjacentMeetingCountSpecified:(char)arg1 ;
-(NSArray *)ConflictingMeetings;
-(void)setConflictingMeetings:(NSArray *)arg1 ;
-(NSArray *)AdjacentMeetings;
-(void)setAdjacentMeetings:(NSArray *)arg1 ;
-(NSDateComponents *)AppointmentReplyTime;
-(void)setAppointmentReplyTime:(NSDateComponents *)arg1 ;
-(char)AppointmentSequenceNumberSpecified;
-(void)setAppointmentSequenceNumberSpecified:(char)arg1 ;
-(long long)AppointmentState;
-(void)setAppointmentState:(long long)arg1 ;
-(char)AppointmentStateSpecified;
-(void)setAppointmentStateSpecified:(char)arg1 ;
-(EWSOccurrenceInfoType *)FirstOccurrence;
-(void)setFirstOccurrence:(EWSOccurrenceInfoType *)arg1 ;
-(EWSOccurrenceInfoType *)LastOccurrence;
-(void)setLastOccurrence:(EWSOccurrenceInfoType *)arg1 ;
-(void)setModifiedOccurrences:(NSArray *)arg1 ;
-(void)setDeletedOccurrences:(NSArray *)arg1 ;
-(long long)ConferenceType;
-(void)setConferenceType:(long long)arg1 ;
-(char)ConferenceTypeSpecified;
-(void)setConferenceTypeSpecified:(char)arg1 ;
-(char)AllowNewTimeProposal;
-(void)setAllowNewTimeProposal:(char)arg1 ;
-(char)AllowNewTimeProposalSpecified;
-(void)setAllowNewTimeProposalSpecified:(char)arg1 ;
-(char)IsOnlineMeeting;
-(void)setIsOnlineMeeting:(char)arg1 ;
-(char)IsOnlineMeetingSpecified;
-(void)setIsOnlineMeetingSpecified:(char)arg1 ;
-(NSString *)MeetingWorkspaceUrl;
-(void)setMeetingWorkspaceUrl:(NSString *)arg1 ;
-(NSString *)NetShowUrl;
-(void)setNetShowUrl:(NSString *)arg1 ;
-(void)setStart:(NSDateComponents *)arg1 ;
-(char)IsResponseRequested;
-(void)setIsResponseRequested:(char)arg1 ;
-(NSString *)Duration;
-(void)dealloc;
-(void)setDuration:(NSString *)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)UID;
-(void)setOrganizer:(EWSSingleRecipientType *)arg1 ;
-(void)setUID:(NSString *)arg1 ;
-(void)setEnd:(NSDateComponents *)arg1 ;
-(void)setIsAllDayEvent:(char)arg1 ;
-(void)setIsAllDayEventSpecified:(char)arg1 ;
-(void)setLegacyFreeBusyStatus:(int)arg1 ;
-(NSString *)Location;
-(void)setMeetingTimeZone:(EWSTimeZoneType *)arg1 ;
-(NSArray *)RequiredAttendees;
-(NSArray *)OptionalAttendees;
-(NSArray *)Resources;
-(void)setAppointmentSequenceNumber:(long long)arg1 ;
-(void)setOptionalAttendees:(NSArray *)arg1 ;
-(void)setRequiredAttendees:(NSArray *)arg1 ;
-(void)setResources:(NSArray *)arg1 ;
-(void)setRecurrence:(EWSRecurrenceType *)arg1 ;
-(EWSRecurrenceType *)Recurrence;
-(char)IsAllDayEvent;
-(int)CalendarItemType;
-(NSArray *)ModifiedOccurrences;
-(EWSSingleRecipientType *)Organizer;
-(int)MyResponseType;
-(EWSTimeZoneType *)MeetingTimeZone;
-(NSDateComponents *)Start;
-(NSDateComponents *)End;
-(NSArray *)DeletedOccurrences;
-(NSDateComponents *)OriginalStart;
-(int)LegacyFreeBusyStatus;
-(long long)AppointmentSequenceNumber;
-(NSDateComponents *)DateTimeStamp;
-(char)IsCancelled;
-(char)MeetingRequestWasSent;
-(NSString *)TimeZone;
-(void)setMyResponseType:(int)arg1 ;
-(void)setIsCancelled:(char)arg1 ;
@end

