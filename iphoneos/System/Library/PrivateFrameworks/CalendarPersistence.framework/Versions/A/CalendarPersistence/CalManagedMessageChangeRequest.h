/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSString;

@interface CalManagedMessageChangeRequest : CalManagedChangeRequest

@property (retain) NSString * principalUID; 
+(id)entityName;
+(id)insertDeleteInboxChangeRequestForServerFile:(id)arg1 principal:(id)arg2 inContext:(id)arg3 ;
+(id)inboxDeletesForPrincipalID:(id)arg1 inContext:(id)arg2 ;
+(id)notificationDeletesForPrincipalID:(id)arg1 inContext:(id)arg2 ;
+(id)_insertChangeRequestForServerFile:(id)arg1 type:(int)arg2 principalUID:(id)arg3 inContext:(id)arg4 ;
+(id)deletesForPrincipalID:(id)arg1 type:(int)arg2 inContext:(id)arg3 ;
+(id)insertDeleteNotificationChangeRequestForServerFile:(id)arg1 principal:(id)arg2 inContext:(id)arg3 ;
@end

