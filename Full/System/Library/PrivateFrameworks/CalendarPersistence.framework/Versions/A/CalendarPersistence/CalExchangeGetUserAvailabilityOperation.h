/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, CalDateRange, NSString, NSMutableDictionary, NSDate, NSDictionary;

@interface CalExchangeGetUserAvailabilityOperation : NSObject {

	NSArray* _addresses;
	CalDateRange* _timeRange;
	NSString* _maskedSharedUID;
	NSMutableDictionary* _emailToFreeBusySpans;
	NSMutableDictionary* _emailToEventDetailsArray;
	NSString* _messageTracerUID;
	NSDate* _messageTracerStartDate;

}

@property (readonly) NSDictionary * emailToFreeBusySpans;                  //@synthesize emailToFreeBusySpans=_emailToFreeBusySpans - In the implementation block
@property (readonly) NSDictionary * emailToEventDetailsArray;              //@synthesize emailToEventDetailsArray=_emailToEventDetailsArray - In the implementation block
+(id)_UTCSerializableTimeZone;
+(int)_calFreeBusyFromEWSFreeBusy:(int)arg1 ;
+(id)_busySpan:(int)arg1 startComponents:(id)arg2 endComponents:(id)arg3 inCalendar:(id)arg4 ;
+(int)_calFreeBusyFromMergedFreeBusy:(unsigned short)arg1 ;
+(id)_busySpan:(int)arg1 forDate:(id)arg2 startsInMinutes:(unsigned long long)arg3 endsInMinutes:(unsigned long long)arg4 inCalendar:(id)arg5 ;
-(void)dealloc;
-(id)initWithMaskedSharedUID:(id)arg1 addresses:(id)arg2 timeRange:(id)arg3 ;
-(char)executeSynchronouslyWithPrincipal:(id)arg1 withError:(id*)arg2 ;
-(NSDictionary *)emailToFreeBusySpans;
-(NSDictionary *)emailToEventDetailsArray;
-(void)_processResponse:(id)arg1 ;
@end
