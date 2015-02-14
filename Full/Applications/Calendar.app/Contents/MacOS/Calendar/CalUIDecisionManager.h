/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/EKDecisionDelegate.h>

@class NSString;

@interface CalUIDecisionManager : NSObject <EKDecisionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_Ca11)spanDecisionInfoForEvents:(id)arg1 diffSummary:(id)arg2 ;
+(SCD_Struct_Ca11)spanDecisionInfoForEvents:(id)arg1 ;
+(SCD_Struct_Ca12)commitDecisionInfoForEvents:(id)arg1 span:(int)arg2 ;
-(id)addUILevelDiffCategoriesToDiffSummary:(id)arg1 forEvents:(id)arg2 ;
-(char)shouldSaveForDeletingEvents:(id)arg1 ;
-(char)shouldSaveForTimeRelatedChangeOnEvents:(id)arg1 diffSummary:(id)arg2 ;
-(char)shouldSaveForCalendarChangeOnEvents:(id)arg1 diffSummary:(id)arg2 ;
-(char)shouldSaveForGenericSaveOnEvents:(id)arg1 diffSummary:(id)arg2 ;
-(int)spanDecisionForDeletingEvents:(id)arg1 ;
-(int)spanDecisionForInvitationResponsesToEvents:(id)arg1 diffSummary:(id)arg2 ;
-(int)spanDecisionForTimeRelatedChangeOnEvents:(id)arg1 diffSummary:(id)arg2 ;
-(int)spanDecisionForCalendarChangeOnEvents:(id)arg1 diffSummary:(id)arg2 ;
-(int)spanDecisionForGenericSaveOnEvents:(id)arg1 diffSummary:(id)arg2 ;
-(int)commitDecisionForDeletingEvents:(id)arg1 span:(int)arg2 ;
-(int)commitDecisionForDecliningEvents:(id)arg1 ;
-(int)commitDecisionForGenericSaveOnEvent:(id)arg1 userImpliedDecision:(char)arg2 ;
-(char)_diffSummaryContainsTimeRelatedChange:(id)arg1 ;
-(char)_isNonDistinguishedExchangeCalendar:(id)arg1 ;
-(char)_shouldReturnSpanAllWithoutRequesting:(id)arg1 ;
-(int)commitDecisionForDeletingCalendars:(id)arg1 ;
-(char)shouldSaveForDeletingSources:(id)arg1 ;
-(char)shouldSaveForEvents:(id)arg1 forEditingAction:(int)arg2 diffSummary:(id)arg3 ;
-(int)spanDecisionForEvents:(id)arg1 forEditingAction:(int)arg2 diffSummary:(id)arg3 ;
-(unsigned long long)conflictDecisionForEvent:(id)arg1 withConflictCount:(unsigned long long)arg2 outOfTotalCount:(unsigned long long)arg3 ;
-(int)commitDecisionForEvents:(id)arg1 forEditingAction:(int)arg2 userImpliedDecision:(char)arg3 diffSummary:(id)arg4 ;
-(int)commitDecisionForCalendars:(id)arg1 forEditingAction:(int)arg2 ;
@end

