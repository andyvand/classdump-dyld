/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSSet;

@interface IDSPushHandlerContext : NSObject {

	dispatch_queue_sRef _queue;
	NSSet* _topics;
	NSSet* _commands;

}

@property (nonatomic,readonly) dispatch_queue_sRef queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSSet * topics;                             //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSSet * commands;                           //@synthesize commands=_commands - In the implementation block
-(void)setTopics:(NSSet *)arg1 ;
-(NSSet *)topics;
-(void)dealloc;
-(dispatch_queue_sRef)queue;
-(NSSet *)commands;
-(void)setCommands:(NSSet *)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 topics:(id)arg2 commands:(id)arg3 ;
@end

