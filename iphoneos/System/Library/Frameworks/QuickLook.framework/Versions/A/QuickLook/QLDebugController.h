/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLDebugController : NSObject {

	dispatch_queue_sRef _queue;

}
+(id)sharedController;
-(void)_sendUpdate:(id)arg1 forRequest:(_QLRequest*)arg2 async:(char)arg3 ;
-(void)setStatus:(int)arg1 forRequest:(_QLRequest*)arg2 ;
-(void)sendUpdate:(id)arg1 forRequest:(_QLRequest*)arg2 ;
-(void)clearAllRequests;
-(void)addRequest:(_QLRequest*)arg1 ;
-(id)init;
-(void)dealloc;
@end

