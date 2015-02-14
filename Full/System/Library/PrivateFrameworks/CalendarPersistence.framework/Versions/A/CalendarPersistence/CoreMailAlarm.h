/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CoreAlarm.h>

@interface CoreMailAlarm : CoreAlarm
+(id)alarmWithTrigger:(id)arg1 ;
+(id)alarmWithTrigger:(id)arg1 withSummary:(id)arg2 withDesc:(id)arg3 ;
+(id)humanReadableDescriptionForTrigger:(id)arg1 email:(id)arg2 isAllDay:(char)arg3 ;
-(id)summary;
-(id)setSummary:(id)arg1 ;
-(id)attachments;
-(id)humanReadableDescription;
-(Class)correspondingOccurrenceClass;
-(id)desc;
-(id)setDesc:(id)arg1 ;
-(id)attendees;
-(id)removeAllAttendees;
-(id)addAttendee:(id)arg1 ;
-(id)removeAttendee:(id)arg1 ;
-(id)initWithTrigger:(id)arg1 ;
-(id)initWithTrigger:(id)arg1 withSummary:(id)arg2 withDesc:(id)arg3 ;
-(id)addAttachment:(id)arg1 ;
-(id)removeAttachment:(id)arg1 ;
-(id)humanReadableDescriptionIsAllDay:(char)arg1 ;
@end

