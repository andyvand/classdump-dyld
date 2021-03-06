/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FTMessageQueueDelegate;
@class NSMutableArray, IDSBaseMessage, NSArray;

@interface FTMessageQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	id<FTMessageQueueDelegate> _delegate;

}

@property (readonly) IDSBaseMessage * topMessage; 
@property (readonly) long long count; 
@property (readonly) NSArray * messages; 
@property (assign) id<FTMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * _queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * _addDates;                       //@synthesize addDates=_addDates - In the implementation block
-(NSMutableArray *)_queue;
-(void)set_queue:(NSMutableArray *)arg1 ;
-(char)removeMessage:(id)arg1 ;
-(char)addMessage:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<FTMessageQueueDelegate>)arg1 ;
-(void)dealloc;
-(long long)count;
-(id<FTMessageQueueDelegate>)delegate;
-(NSArray *)messages;
-(void)removeAllMessages;
-(IDSBaseMessage *)topMessage;
-(void)_timeoutHit;
-(void)_clearTimeout;
-(void)_setTimeout;
-(id)dequeueTopMessage;
-(NSMutableArray *)_addDates;
-(void)set_addDates:(NSMutableArray *)arg1 ;
@end

