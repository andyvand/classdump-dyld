/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangePersistentOperation.h>
#import <CalendarPersistence/CalRevertableOperation.h>
#import <CalendarPersistence/CalMessageTraceableOpearation.h>

@class EWSAttachmentIdType, NSManagedObjectID, NSString;

@interface CalExchangeDeleteAttachmentOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation> {

	EWSAttachmentIdType* _attachmentId;
	NSManagedObjectID* _attachmentObjectId;
	NSManagedObjectID* _itemObjectID;
	NSString* _attachmentName;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)attachmentId;
-(id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2 ;
-(char)shouldDeletePendingOperation:(id)arg1 ;
-(id)debugTitle;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)messageTracerName;
-(id)messageTracerUUID;
-(id)initWithSessionID:(id)arg1 attachmentId:(id)arg2 attachmentObjectID:(id)arg3 itemObjectID:(id)arg4 attachmentName:(id)arg5 ;
@end

