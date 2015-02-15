/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendarChangeRequest.h>

@class NSString;

@interface CalManagedSubscriptionCalendarChangeRequest : CalManagedCalendarChangeRequest

@property (retain) NSString * subscriptionURLString; 
@property (assign) char hasAlarmFilter; 
@property (assign) char hasAttachmentFilter; 
@property (assign) char hasTaskFilter; 
@property (assign) int refreshInterval; 
@property (retain) NSString * locationCode; 
@property (retain) NSString * languageCode; 
@property (assign) char isAutoProvisioned; 
+(id)insertSubscriptionCalendarChangeRequestWithType:(int)arg1 sourceUID:(id)arg2 uri:(id)arg3 inManagedObjectContext:(id)arg4 ;
@end

