/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableArray;

@interface NSNetServicesInternal : NSObject {

	NSMutableArray* _monitors;
	tcp_listener_sRef _listener;
	CFRunLoopRef _scheduledRunLoop;
	CFStringRef _scheduledMode;

}

@property (retain) NSMutableArray * monitors;              //@synthesize monitors=_monitors - In the implementation block
-(void)finalize;
-(void)dealloc;
-(void)copyScheduledRunLoop:(_CFRunLoop*)arg1 andMode:(const _CFString*)arg2 ;
-(void)setScheduledRunLoop:(CFRunLoopRef)arg1 andMode:(CFStringRef)arg2 ;
-(tcp_listener_sRef)listener;
-(void)setListener:(tcp_listener_sRef)arg1 ;
-(NSMutableArray *)monitors;
-(void)setMonitors:(NSMutableArray *)arg1 ;
@end

