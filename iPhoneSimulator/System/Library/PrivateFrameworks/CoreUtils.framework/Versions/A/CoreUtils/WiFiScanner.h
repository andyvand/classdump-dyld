/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableSet, CWInterface, NSSet;

@interface WiFiScanner : NSObject {

	char _started;
	NSMutableSet* _devices;
	char _autoPoweredOn;
	dispatch_source_sRef _scanTimer;
	int _stopErr;
	CWInterface* _wifiInterface;
	NSMutableSet* _scanChannels;
	dispatch_queue_sRef _scanQueue;
	unsigned _scanFlags;
	dispatch_queue_sRef _queue;
	LogCategory* _ucat;
	/*^block*/id _handler;

}

@property (copy,readonly) NSSet * devices; 
@property (assign) dispatch_queue_sRef dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned scanFlags;                             //@synthesize scanFlags=_scanFlags - In the implementation block
@property (assign) LogCategory* logCategory;                       //@synthesize ucat=_ucat - In the implementation block
@property (copy) id handler;                                       //@synthesize handler=_handler - In the implementation block
-(void)_stop:(int)arg1 ;
-(void)setDispatchQueue:(dispatch_queue_sRef)arg1 ;
-(LogCategory*)logCategory;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(void)_stop2;
-(void)_scanTimer;
-(void)_scanProcessResults:(id)arg1 ;
-(char)_isUnconfiguredIE:(id)arg1 ;
-(unsigned)scanFlags;
-(void)setScanFlags:(unsigned)arg1 ;
-(dispatch_queue_sRef)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)_start;
-(void)start;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(NSSet *)devices;
@end

