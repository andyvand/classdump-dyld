/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSDate, SAReminderDateTimeTriggerOffset, NSString;

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * relativeTimeOffset; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)dateTimeTrigger;
+(id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAReminderDateTimeTriggerOffset *)offset;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(SAReminderDateTimeTriggerOffset *)relativeTimeOffset;
-(void)setRelativeTimeOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(id)groupIdentifier;
@end

