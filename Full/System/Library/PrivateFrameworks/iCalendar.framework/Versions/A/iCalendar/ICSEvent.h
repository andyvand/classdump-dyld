/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL, ICSStructuredLocation, ICSTravelDuration, ICSTravelAdvisoryBehavior;

@interface ICSEvent : ICSComponent

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (readonly) char isAllDay; 
@property (retain) ICSDuration * duration; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) NSString * location; 
@property (retain) ICSUserAddress * organizer; 
@property (assign) unsigned long long sequence; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * rrule; 
@property (assign) int status; 
@property (retain) NSString * summary; 
@property (assign,nonatomic) int transp; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
@property (retain) NSString * x_apple_dropbox; 
@property (retain) NSString * x_apple_ews_changekey; 
@property (retain) NSString * x_apple_ews_itemid; 
@property (assign) char x_apple_ews_needsserverconfirmation; 
@property (retain) NSString * x_apple_ews_permission; 
@property (assign,nonatomic) int x_apple_ews_busystatus; 
@property (assign,nonatomic) char x_apple_dontschedule; 
@property (assign) char x_apple_ignore_on_restore; 
@property (assign,nonatomic) char x_apple_needs_reply; 
@property (assign,nonatomic) char x_wr_itipalreadysent; 
@property (assign,nonatomic) char x_wr_itipstatusattendeeml; 
@property (assign,nonatomic) char x_wr_itipstatusml; 
@property (assign,nonatomic) char x_wr_rsvpneeded; 
@property (nonatomic,retain) NSArray * x_calendarserver_attendee_comment; 
@property (nonatomic,retain) NSString * x_calendarserver_private_comment; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
@property (retain) NSArray * conferences; 
@property (retain) ICSStructuredLocation * x_apple_travel_start; 
@property (retain) ICSTravelDuration * x_apple_travel_duration; 
@property (retain) ICSTravelAdvisoryBehavior * x_apple_travel_advisory_behavior; 
@property (assign) char forcedAllDay; 
+(id)name;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(void)fixComponent;
-(char)x_apple_needs_reply;
-(char)validate:(id*)arg1 ;
-(void)setTransp:(int)arg1 ;
-(NSString *)x_calendarserver_private_comment;
-(char)isDefaultAlarmDeleted;
-(void)setX_wr_rsvpneeded:(char)arg1 ;
-(char)x_apple_dontschedule;
-(char)x_wr_itipstatusml;
-(char)x_wr_itipalreadysent;
-(char)x_wr_itipstatusattendeeml;
-(char)x_wr_rsvpneeded;
-(int)x_apple_ews_busystatus;
-(int)transp;
-(NSArray *)x_calendarserver_attendee_comment;
-(void)setX_apple_needs_reply:(char)arg1 ;
-(void)setX_calendarserver_attendee_comment:(NSArray *)arg1 ;
-(void)setX_calendarserver_private_comment:(NSString *)arg1 ;
-(void)setX_apple_dontschedule:(char)arg1 ;
-(void)setX_wr_itipalreadysent:(char)arg1 ;
-(void)setX_wr_itipstatusattendeeml:(char)arg1 ;
-(void)setX_wr_itipstatusml:(char)arg1 ;
-(void)setX_apple_ews_busystatus:(int)arg1 ;
@end

