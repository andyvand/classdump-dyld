/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKUndoableOperation.h>

@interface EKSaveOperation : EKUndoableOperation
+(id)changedTimeActionName:(id)arg1 ;
+(id)changedAllDayActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2 ;
+(id)changedCalendarActionName:(id)arg1 ;
+(id)alarmsModifiedActionName:(id)arg1 ;
+(id)changedTitleActionName:(id)arg1 ;
+(id)changedLocationActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2 ;
+(id)changedTravelTimeActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2 ;
+(id)changedTimeZoneActionName:(id)arg1 ;
+(id)changedRecurrenceRuleActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2 ;
+(id)changedAvailablityActionName:(id)arg1 ;
+(id)changedPrivacyActionName:(id)arg1 ;
+(id)changedNotesActionName:(id)arg1 ;
+(id)changedURLActionName:(id)arg1 ;
+(id)alarmsAddedActionName:(id)arg1 ;
+(id)alarmsRemovedActionName:(id)arg1 ;
+(id)attachmentsAddedActionName:(id)arg1 ;
+(id)attachmentsRemovedActionName:(id)arg1 ;
+(id)attachmentsModifiedActionName:(id)arg1 ;
+(id)changedAttachmentPermissionsActionName:(id)arg1 ;
+(id)attendeesAddedActionName:(id)arg1 ;
+(id)attendeesRemovedActionName:(id)arg1 ;
+(id)attendeesModifiedActionName:(id)arg1 ;
+(id)changedParticipationStatusActionName:(id)arg1 ;
+(id)changedAttendeeCommentActionName:(id)arg1 ;
+(id)changedResponseCommentActionName:(id)arg1 ;
+(id)changedColorOfCalendar:(id)arg1 ;
+(id)genericEventChangedActionName:(id)arg1 ;
+(id)multipleEventsChangedActionName;
-(void)execute;
-(id)actionName;
-(Class)_inverseOperationClass;
@end

