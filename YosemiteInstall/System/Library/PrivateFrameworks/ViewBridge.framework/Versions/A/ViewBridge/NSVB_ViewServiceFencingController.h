/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray, NSTimer;

@interface NSVB_ViewServiceFencingController : NSObject {

	int _lock;
	NSMutableSet* _pendingFenceSendRights;
	NSMutableArray* _resumeActions;
	unsigned long long _expectedParticipatingFencingProxyCount;
	NSTimer* _fencingControlTimeoutTimer;

}
+(id)activeFencePort;
-(void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned long long)arg3 ;
-(void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2 ;
-(void)_fencingControlTimedOut;
-(id)init;
-(void)dealloc;
@end

