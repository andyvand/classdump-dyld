/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CLDispatchSilo : CLSilo {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)assertInside;
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(void)assertOutside;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(id)newTimer;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(id)initMain;
-(id)debugDescription;
-(id)queue;
-(id)initWithIdentifier:(id)arg1 ;
@end
