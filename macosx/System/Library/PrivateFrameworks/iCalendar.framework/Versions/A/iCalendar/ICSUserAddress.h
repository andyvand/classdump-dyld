/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSUserAddress : ICSProperty

@property (assign,nonatomic) char rsvp; 
@property (nonatomic,retain) NSString * cn; 
@property (assign,nonatomic) int cutype; 
@property (nonatomic,retain) NSString * dir; 
@property (assign,nonatomic) int partstat; 
@property (assign,nonatomic) int schedulestatus; 
@property (assign,nonatomic) int scheduleagent; 
@property (assign,nonatomic) int scheduleforcesend; 
@property (assign,nonatomic) int role; 
@property (nonatomic,retain) ICSDateValue * partstatModified; 
@property (assign,nonatomic) char x_apple_self_invited; 
@property (nonatomic,retain) NSString * email; 
+(int)calendarUserFromICSString:(id)arg1 ;
+(int)scheduleForceSendFromICSString:(id)arg1 ;
+(id)ICSStringFromCalendarUser:(int)arg1 ;
+(id)ICSStringFromScheduleForceSend:(int)arg1 ;
+(int)participationStatusFromICSString:(id)arg1 ;
+(id)URLForNoMail;
+(id)ICSStringFromScheduleAgent:(int)arg1 ;
+(id)ICSStringFromParticipationStatus:(int)arg1 ;
+(int)scheduleAgentFromICSString:(id)arg1 ;
+(id)ICSStringFromRole:(int)arg1 ;
+(id)ICSStringFromScheduleStatus:(int)arg1 ;
+(int)roleFromICSString:(id)arg1 ;
+(int)scheduleStatusFromICSString:(id)arg1 ;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(char)shouldObscureValue;
-(void)fixAddress;
-(char)isHTTPAddress;
-(char)isHTTPSAddress;
-(void)setPartstatModified:(ICSDateValue *)arg1 ;
-(ICSDateValue *)partstatModified;
-(void)setX_calendarserver_email:(id)arg1 ;
-(id)x_calendarserver_email;
-(NSString *)dir;
-(void)setDir:(NSString *)arg1 ;
-(int)role;
-(char)isEmailAddress;
-(id)displayName;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)email;
-(char)rsvp;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(int)arg1 ;
-(id)emailAddress;
-(void)setRsvp:(char)arg1 ;
-(int)partstat;
-(void)setPartstat:(int)arg1 ;
-(NSString *)cn;
-(int)cutype;
-(void)setCn:(NSString *)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(int)schedulestatus;
-(int)scheduleagent;
-(int)scheduleforcesend;
-(char)x_apple_self_invited;
-(void)setSchedulestatus:(int)arg1 ;
-(void)setScheduleagent:(int)arg1 ;
-(void)setScheduleforcesend:(int)arg1 ;
-(void)setCutype:(int)arg1 ;
-(void)setX_apple_self_invited:(char)arg1 ;
-(char)hasEmailAddress;
@end

