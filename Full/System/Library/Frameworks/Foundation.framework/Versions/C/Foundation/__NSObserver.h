/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNotificationCenter, NSOperationQueue, NSString;

@interface __NSObserver : NSObject {

	NSNotificationCenter* nc;
	NSOperationQueue* queue;
	NSString* name;
	id object;
	/*^block*/id block;

}
+(id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(/*^block*/id)arg5 ;
+(char)isAnObserver:(id)arg1 ;
+(void)forgetObserver:(id)arg1 ;
-(void)_doit:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)object;
@end

