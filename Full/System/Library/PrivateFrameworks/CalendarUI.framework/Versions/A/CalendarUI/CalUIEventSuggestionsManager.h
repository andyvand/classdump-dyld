/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CalUIEventSuggestionsManager : NSObject
+(void)findSuggestionsForQuery:(id)arg1 withInitialEvent:(id)arg2 options:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
+(void)findSuggestionsForQuery:(id)arg1 withDefaultCalendar:(id)arg2 options:(unsigned long long)arg3 referenceDate:(id)arg4 initialEvent:(id)arg5 withHandler:(/*^block*/id)arg6 ;
+(id)performTimeDetection:(id)arg1 options:(unsigned long long)arg2 referenceDate:(id)arg3 ;
+(id)fetchEventsWithTitleMatchingQuery:(id)arg1 inEventStore:(id)arg2 ;
+(id)stripRanges:(id)arg1 fromString:(id)arg2 ;
+(void)findSuggestionsForQuery:(id)arg1 withDefaultCalendar:(id)arg2 options:(unsigned long long)arg3 referenceDate:(id)arg4 withHandler:(/*^block*/id)arg5 ;
+(id)timeZoneForStructuredLocation:(id)arg1 ;
@end

