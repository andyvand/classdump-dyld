/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendar.h>

@interface CalManagedIMAPCalendar : CalManagedCalendar
+(id)entityName;
-(id)type;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 ;
-(char)isWritable;
-(char)isEventContainer;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(id)relativePath;
-(char)validateForWrite:(id*)arg1 ;
-(void)awakeFromInsert;
-(char)keepSyncRecordLocal;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 fromServer:(char)arg2 ;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(char)allowsScheduling;
-(id)nodesInNamespace;
-(char)shouldShowInPrimaryAccounts;
@end

