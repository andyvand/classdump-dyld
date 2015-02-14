/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSString, NSNumber;

@interface CalManagedCalendarChangeRequest : CalManagedChangeRequest

@property (retain) NSString * title; 
@property (retain) NSString * uri; 
@property (retain) NSString * inboxURI; 
@property (retain) NSString * toURI; 
@property (retain) NSString * property; 
@property (retain) NSString * value; 
@property (retain) NSString * principalUID; 
@property (retain) NSString * notes; 
@property (retain) NSString * color; 
@property (retain) NSString * symbolicColorName; 
@property (retain) NSNumber * order; 
@property (retain) NSNumber * valueType; 
@property (retain) NSString * timeZone; 
@property (assign) char isEventContainer; 
@property (assign) char isTaskContainer; 
+(id)insertCalendarChangeRequestWithType:(int)arg1 sourceUID:(id)arg2 uri:(id)arg3 inManagedObjectContext:(id)arg4 ;
@end

