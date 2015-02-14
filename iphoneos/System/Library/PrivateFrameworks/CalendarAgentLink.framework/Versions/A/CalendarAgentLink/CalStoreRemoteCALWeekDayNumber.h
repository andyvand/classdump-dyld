/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteObject.h>

@interface CalStoreRemoteCALWeekDayNumber : CalStoreRemoteObject {

	unsigned long long _day;
	long long _number;

}

@property (assign,nonatomic) unsigned long long day;              //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) long long number;                    //@synthesize number=_number - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)day;
-(void)setDay:(unsigned long long)arg1 ;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
@end

