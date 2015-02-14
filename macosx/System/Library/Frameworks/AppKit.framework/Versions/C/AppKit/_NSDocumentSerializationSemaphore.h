/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSDocumentSerializationSemaphore : NSObject {

	dispatch_semaphore_sRef sema;
	unsigned long long timeout;
	/*^block*/id timeoutHandler;

}
-(id)init;
-(void)dealloc;
-(id)initWithTimeout:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)signal;
-(void)wait;
@end

