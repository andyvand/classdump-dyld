/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class NSManagedObjectID;

@interface CalDAVPersistentQueueableOperation : CalDAVQueueableOperation {

	NSManagedObjectID* _changeRequestID;
	long long _sequenceNumber;

}
-(void)dealloc;
-(long long)sequenceNumber;
-(id)initWithChangeRequest:(id)arg1 andSession:(id)arg2 ;
-(void)enqueue;
-(void)removeOperationFromPersistence;
-(id)changeRequestID;
-(id)extraUserInfoForRebuiltError;
-(void)configureOperationDependencies;
-(id)associatedChangeRequestInContext:(id)arg1 ;
-(id)changeRequest;
@end

