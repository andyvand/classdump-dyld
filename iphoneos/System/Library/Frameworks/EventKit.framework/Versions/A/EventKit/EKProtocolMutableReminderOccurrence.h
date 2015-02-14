/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate, NSNumber;


@protocol EKProtocolMutableReminderOccurrence <EKProtocolMutableOccurrence,EKProtocolReminderOccurrence>
@property (nonatomic,copy) NSDate * dueDateUnadjustedFromUTC; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (nonatomic,copy) NSNumber * orderNumber; 
@property (assign,nonatomic) char statusCompleteNotByDate; 
@required
-(void)setStatusCompleteNotByDate:(char)arg1;
-(NSDate *)completionDate;
-(void)setCompletionDate:(id)arg1;
-(NSNumber *)orderNumber;
-(void)setOrderNumber:(id)arg1;
-(NSDate *)dueDateUnadjustedFromUTC;
-(char)statusCompleteNotByDate;
-(void)setDueDateUnadjustedFromUTC:(id)arg1;

@end

