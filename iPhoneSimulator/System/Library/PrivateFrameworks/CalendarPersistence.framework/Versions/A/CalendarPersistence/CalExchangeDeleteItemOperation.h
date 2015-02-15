/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangePersistentOperation.h>
#import <CalendarPersistence/CalRevertableOperation.h>
#import <CalendarPersistence/CalDeleteCalendarItemOperation.h>
#import <CalendarPersistence/CalMessageTraceableOpearation.h>

@class EWSBaseItemIdType, NSManagedObjectID, NSString;

@interface CalExchangeDeleteItemOperation : CalExchangePersistentOperation <CalRevertableOperation, CalDeleteCalendarItemOperation, CalMessageTraceableOpearation> {

	EWSBaseItemIdType* _itemId;
	NSManagedObjectID* _itemObjectID;
	NSString* _itemName;
	int _itemType;
	char _shouldSendCancellation;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)objectID;
-(id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2 ;
-(char)shouldDeletePendingOperation:(id)arg1 ;
-(id)debugTitle;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)messageTracerName;
-(id)messageTracerUUID;
-(id)errorDescription;
-(char)deleteItemsWithIds:(id)arg1 binding:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithSessionID:(id)arg1 itemId:(id)arg2 itemObjectID:(id)arg3 itemName:(id)arg4 itemType:(int)arg5 shouldSendCancellation:(char)arg6 ;
-(id)itemId;
@end

