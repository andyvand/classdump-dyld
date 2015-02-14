/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDateComponents, NSString;

@interface EWSSerializableTimeZoneTime : NSObject {

	long long _Bias;
	NSDateComponents* _Time;
	long long _DayOrder;
	long long _Month;
	int _DayOfWeek;
	NSString* _Year;

}

@property (assign,nonatomic) long long Bias;                       //@synthesize Bias=_Bias - In the implementation block
@property (nonatomic,retain) NSDateComponents * Time;              //@synthesize Time=_Time - In the implementation block
@property (assign,nonatomic) long long DayOrder;                   //@synthesize DayOrder=_DayOrder - In the implementation block
@property (assign,nonatomic) long long Month;                      //@synthesize Month=_Month - In the implementation block
@property (assign,nonatomic) int DayOfWeek;                        //@synthesize DayOfWeek=_DayOfWeek - In the implementation block
@property (nonatomic,copy) NSString * Year;                        //@synthesize Year=_Year - In the implementation block
+(id)definition;
-(long long)Bias;
-(char)isEqualToSerializableTimeZoneTime:(id)arg1 ;
-(char)matchesPatternForDate:(id)arg1 withBias:(long long)arg2 inCalendar:(id)arg3 ;
-(NSDateComponents *)Time;
-(long long)DayOrder;
-(NSString *)Year;
-(void)dealloc;
-(void)setYear:(NSString *)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(long long)Month;
-(int)DayOfWeek;
-(void)setBias:(long long)arg1 ;
-(void)setTime:(NSDateComponents *)arg1 ;
-(void)setDayOrder:(long long)arg1 ;
-(void)setDayOfWeek:(int)arg1 ;
@end

