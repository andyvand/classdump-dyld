/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangeOperation.h>

@class NSManagedObjectID;

@interface CalExchangeGetEffectiveRightsOperation : CalExchangeOperation {

	NSManagedObjectID* _calendarObjectID;

}
+(id)responseShape;
+(void)setPermission:(id)arg1 withEffectiveRights:(id)arg2 ;
-(void)dealloc;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithSession:(id)arg1 calendarObjectID:(id)arg2 ;
@end

