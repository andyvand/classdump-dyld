/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMConnectionMonitor.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMReachabilityDelegate.h>

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {

	BOOL _isConnected;
	BOOL _isSleeping;
	IMReachability* _hostReachability;
	IMReachability* _ipReachability;
	unsigned _hostFlags;
	unsigned _ipFlags;

}

@property (nonatomic,retain) IMReachability * _hostReachability;              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) IMReachability * _ipReachability;                //@synthesize ipReachability=_ipReachability - In the implementation block
@property (assign,nonatomic) unsigned _hostFlags;                             //@synthesize hostFlags=_hostFlags - In the implementation block
@property (assign,nonatomic) unsigned _ipFlags;                               //@synthesize ipFlags=_ipFlags - In the implementation block
@property (assign,nonatomic) BOOL _isConnected;                               //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL _isSleeping;                                //@synthesize isSleeping=_isSleeping - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)_setup;
-(BOOL)isImmediatelyReachable;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)_clearReachability:(id*)arg1 flags:(unsigned*)arg2 ;
-(void)_doCallbackNow;
-(void)_doCallbackLater;
-(void)_networkManagedUpdated:(id)arg1 ;
-(void)_setupReachability;
-(id)_hostReachability;
-(void)set_hostReachability:(id)arg1 ;
-(id)_ipReachability;
-(void)set_ipReachability:(id)arg1 ;
-(unsigned)_hostFlags;
-(void)set_hostFlags:(unsigned)arg1 ;
-(unsigned)_ipFlags;
-(void)set_ipFlags:(unsigned)arg1 ;
-(BOOL)_isConnected;
-(void)set_isConnected:(BOOL)arg1 ;
-(BOOL)_isSleeping;
-(void)set_isSleeping:(BOOL)arg1 ;
-(void)systemDidWake;
-(void)systemWillSleep;
@end
