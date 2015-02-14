/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString;

@interface CalAgentLinkCalDAVQueueOperation : CalAgentLinkOneWayOperation {

	NSString* _queueAction;
	NSString* _changeRequestManagedObjectID;
	NSString* _principalManagedObjectID;

}

@property (nonatomic,retain) NSString * queueAction;                               //@synthesize queueAction=_queueAction - In the implementation block
@property (nonatomic,retain) NSString * changeRequestManagedObjectID;              //@synthesize changeRequestManagedObjectID=_changeRequestManagedObjectID - In the implementation block
@property (nonatomic,retain) NSString * principalManagedObjectID;                  //@synthesize principalManagedObjectID=_principalManagedObjectID - In the implementation block
-(id)inputPayload;
-(id)initWithAction:(id)arg1 principalManagedObjectID:(id)arg2 changeRequestManagedObjectID:(id)arg3 ;
-(NSString *)queueAction;
-(NSString *)changeRequestManagedObjectID;
-(NSString *)principalManagedObjectID;
-(void)setQueueAction:(NSString *)arg1 ;
-(void)setChangeRequestManagedObjectID:(NSString *)arg1 ;
-(void)setPrincipalManagedObjectID:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

