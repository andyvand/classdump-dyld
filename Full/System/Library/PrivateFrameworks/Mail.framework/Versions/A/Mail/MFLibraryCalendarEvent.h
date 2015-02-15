/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MFLibraryCalendarEvent : NSObject {

	char _isAllDayEvent;
	char _isOutOfDate;
	char _hasBeenProcessed;
	char _isResponseRequested;
	NSString* _originalReceivedAccountURLString;
	NSString* _associatedCalendarItemIdString;
	NSString* _location;
	NSString* _uid;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _responseStatus;

}

@property (copy) NSString * originalReceivedAccountURLString;              //@synthesize originalReceivedAccountURLString=_originalReceivedAccountURLString - In the implementation block
@property (copy) NSString * associatedCalendarItemIdString;                //@synthesize associatedCalendarItemIdString=_associatedCalendarItemIdString - In the implementation block
@property (copy) NSString * location;                                      //@synthesize location=_location - In the implementation block
@property (copy) NSString * uid;                                           //@synthesize uid=_uid - In the implementation block
@property (copy) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (copy) NSDate * endDate;                                         //@synthesize endDate=_endDate - In the implementation block
@property (assign) char isAllDayEvent;                                     //@synthesize isAllDayEvent=_isAllDayEvent - In the implementation block
@property (assign) char isOutOfDate;                                       //@synthesize isOutOfDate=_isOutOfDate - In the implementation block
@property (assign) char hasBeenProcessed;                                  //@synthesize hasBeenProcessed=_hasBeenProcessed - In the implementation block
@property (assign) char isResponseRequested;                               //@synthesize isResponseRequested=_isResponseRequested - In the implementation block
@property (assign) long long responseStatus;                               //@synthesize responseStatus=_responseStatus - In the implementation block
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(char)isResponseRequested;
-(void)setOriginalReceivedAccountURLString:(NSString *)arg1 ;
-(void)setAssociatedCalendarItemIdString:(NSString *)arg1 ;
-(void)setIsOutOfDate:(char)arg1 ;
-(void)setHasBeenProcessed:(char)arg1 ;
-(void)setIsResponseRequested:(char)arg1 ;
-(NSString *)associatedCalendarItemIdString;
-(NSString *)originalReceivedAccountURLString;
-(char)isAllDayEvent;
-(char)isOutOfDate;
-(char)hasBeenProcessed;
-(long long)responseStatus;
-(void)setResponseStatus:(long long)arg1 ;
-(NSDate *)endDate;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(void)setIsAllDayEvent:(char)arg1 ;
@end

