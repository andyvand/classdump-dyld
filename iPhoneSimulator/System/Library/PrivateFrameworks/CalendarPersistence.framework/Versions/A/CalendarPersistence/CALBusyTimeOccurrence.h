/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALOccurrence.h>

@class CALDate, CALDuration;

@interface CALBusyTimeOccurrence : CALOccurrence {

	CALDate* _cachedEndDate;
	CALDuration* _cachedDuration;
	int _type;

}
-(void)dealloc;
-(id)duration;
-(int)type;
-(id)endDate;
-(id)occurrenceID;
-(id)initWithEntity:(id)arg1 withFreeBusyTime:(id)arg2 ;
@end

