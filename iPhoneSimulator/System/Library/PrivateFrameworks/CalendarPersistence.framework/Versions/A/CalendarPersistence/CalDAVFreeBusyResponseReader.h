/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSDictionary, CALTimeRange;

@interface CalDAVFreeBusyResponseReader : NSObject {

	NSMutableData* _readData;
	NSDictionary* _freeBusySpans;
	CALTimeRange* _timeRange;

}
+(id)freeBusySpanForPeriod:(id)arg1 type:(int)arg2 ;
+(id)calculateFreeBusySpansWithProperties:(id)arg1 ;
+(void)addSuccessFreeBusySpansToDictionary:(id)arg1 fromICS:(id)arg2 ;
+(void)addErrorFreeBusySpanToDictionary:(id)arg1 recipient:(id)arg2 range:(id)arg3 type:(int)arg4 ;
+(id)eventDetailArrayFromICS:(id)arg1 ;
-(void)dealloc;
-(id)initWithRange:(id)arg1 ;
-(id)freeBusySpans;
@end

