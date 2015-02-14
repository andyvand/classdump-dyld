/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(char)hasListenerID:(id)arg1 ;
-(char)addListenerID:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(NSMutableSet *)listeners;
-(IDSServiceMonitor *)monitor;
-(char)removeListenerID:(id)arg1 ;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
-(void)dealloc;
@end

