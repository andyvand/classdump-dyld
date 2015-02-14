/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString;

@interface CalAgentLinkExchangeQueueOperation : CalAgentLinkOneWayOperation {

	NSString* _queueAction;
	NSString* _persistentOperationManagedObjectID;
	NSString* _principalManagedObjectID;

}

@property (nonatomic,retain) NSString * queueAction;                                     //@synthesize queueAction=_queueAction - In the implementation block
@property (nonatomic,retain) NSString * persistentOperationManagedObjectID;              //@synthesize persistentOperationManagedObjectID=_persistentOperationManagedObjectID - In the implementation block
@property (nonatomic,retain) NSString * principalManagedObjectID;                        //@synthesize principalManagedObjectID=_principalManagedObjectID - In the implementation block
-(id)inputPayload;
-(NSString *)queueAction;
-(NSString *)principalManagedObjectID;
-(void)setQueueAction:(NSString *)arg1 ;
-(void)setPrincipalManagedObjectID:(NSString *)arg1 ;
-(id)initWithAction:(id)arg1 principalManagedObjectID:(id)arg2 persistentOperationManagedObjectID:(id)arg3 ;
-(NSString *)persistentOperationManagedObjectID;
-(void)setPersistentOperationManagedObjectID:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

