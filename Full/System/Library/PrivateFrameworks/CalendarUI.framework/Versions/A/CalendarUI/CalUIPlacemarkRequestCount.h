/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface CalUIPlacemarkRequestCount : NSObject {

	NSDate* _date;
	unsigned long long _count;

}

@property (retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)initWithDate:(id)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
@end

