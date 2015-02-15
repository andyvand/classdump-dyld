/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface CalLimitingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}
-(id)queue;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)executeBlock;
@end

