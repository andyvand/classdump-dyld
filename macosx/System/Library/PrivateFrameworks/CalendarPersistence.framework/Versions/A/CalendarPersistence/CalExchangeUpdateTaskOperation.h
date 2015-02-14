/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangeAbstractWriteCalendarItemOperation.h>
#import <CalendarPersistence/CalWriteCalendarItemOperation.h>
#import <CalendarPersistence/CalRevertableOperation.h>
#import <CalendarPersistence/CalMessageTraceableOpearation.h>

@class NSManagedObjectID, NSDictionary;

@interface CalExchangeUpdateTaskOperation : CalExchangeAbstractWriteCalendarItemOperation <CalWriteCalendarItemOperation, CalRevertableOperation, CalMessageTraceableOpearation> {

	NSManagedObjectID* _taskID;
	NSDictionary* _changedValues;

}

@property (readonly) NSManagedObjectID * taskID;              //@synthesize taskID=_taskID - In the implementation block
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
-(NSManagedObjectID *)taskID;
-(id)initWithSessionID:(id)arg1 taskID:(id)arg2 changedValues:(id)arg3 ;
@end

