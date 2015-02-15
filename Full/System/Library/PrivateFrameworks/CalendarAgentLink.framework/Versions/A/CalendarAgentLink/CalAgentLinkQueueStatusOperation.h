/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOperation.h>

@interface CalAgentLinkQueueStatusOperation : CalAgentLinkOperation {

	char _runningQueueFound;

}

@property (assign,nonatomic) char runningQueueFound;              //@synthesize runningQueueFound=_runningQueueFound - In the implementation block
-(void)responsePayloadReceived:(id)arg1 ;
-(char)runningQueueFound;
-(void)setRunningQueueFound:(char)arg1 ;
-(id)init;
-(id)description;
@end

