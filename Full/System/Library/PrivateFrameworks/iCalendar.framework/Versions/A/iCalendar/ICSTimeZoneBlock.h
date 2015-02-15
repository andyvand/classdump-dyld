/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent

@property (nonatomic,retain) ICSDate * dtstart; 
@property (nonatomic,retain) NSArray * rdate; 
@property (nonatomic,retain) NSArray * rrule; 
@property (assign,nonatomic) NSArray * tzname; 
@property (assign,nonatomic) long long tzoffsetfrom; 
@property (assign,nonatomic) long long tzoffsetto; 
-(void)setRdate:(NSArray *)arg1 ;
-(NSArray *)rdate;
-(long long)tzoffsetfrom;
-(long long)tzoffsetto;
-(NSArray *)tzname;
-(void)setTzname:(NSArray *)arg1 ;
-(void)setTzoffsetfrom:(long long)arg1 ;
-(void)setTzoffsetto:(long long)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
-(char)validate:(id*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)addRecurrenceDate:(id)arg1 ;
-(ICSDate *)dtstart;
-(void)setDtstart:(ICSDate *)arg1 ;
-(void)setRrule:(NSArray *)arg1 ;
-(NSArray *)rrule;
@end
