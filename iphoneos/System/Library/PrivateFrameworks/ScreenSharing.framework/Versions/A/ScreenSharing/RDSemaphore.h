/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface RDSemaphore : NSObject {

	NSObject*<OS_dispatch_semaphore> semaphore;

}
-(id)initWithCount:(long long)arg1 ;
-(long long)wait:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)signal;
@end

