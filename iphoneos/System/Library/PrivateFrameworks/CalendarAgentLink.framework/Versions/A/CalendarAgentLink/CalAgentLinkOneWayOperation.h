/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOperation.h>

@interface CalAgentLinkOneWayOperation : CalAgentLinkOperation {

	char _semaphoreDecremented;

}

@property (assign,nonatomic) char semaphoreDecremented;              //@synthesize semaphoreDecremented=_semaphoreDecremented - In the implementation block
-(void)willFinish;
-(void)setSemaphoreDecremented:(char)arg1 ;
-(char)semaphoreDecremented;
-(id)init;
-(void)prepare;
@end

