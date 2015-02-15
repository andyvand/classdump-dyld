/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, ICSDuration, ICSUserAddress, NSString;

@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray * attendee; 
@property (retain) ICSDate * created; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (retain) ICSDuration * duration; 
@property (nonatomic,retain) NSArray * freebusy; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSString * summary; 
@property (retain) NSString * uid; 
@property (nonatomic,retain) NSString * x_calendarserver_mask_uid; 
@property (nonatomic,retain) NSString * x_calendarserver_extended_freebusy; 
+(id)name;
-(void)setX_calendarserver_mask_uid:(NSString *)arg1 ;
-(void)setX_calendarserver_extended_freebusy:(NSString *)arg1 ;
-(void)setFreebusy:(NSArray *)arg1 ;
-(NSString *)x_calendarserver_mask_uid;
-(NSString *)x_calendarserver_extended_freebusy;
-(NSArray *)freebusy;
@end

