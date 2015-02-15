/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/loginwindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface LWLowMemoryTracking : NSObject {

	NSObject*<OS_dispatch_source> _memoryNotificationSource;

}
+(id)sharedLWLowMemoryTracking;
-(void)startLowMemoryMonitoring;
-(void)receivedMemoryNotification;
-(void)stopLowMemoryMonitoring;
-(id)init;
-(void)dealloc;
@end
