/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreWLANKit/CoreWLANKit-Structs.h>
@class NSArray;

@interface CWScanManager : NSObject {

	char _isActive;
	long long _scanCounter;
	dispatch_queue_sRef _scanQueue;
	dispatch_source_sRef _scanTimer;
	double _scanInterval;
	NSArray* _ssidList;
	long long _ssidListIndex;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)displayedScanResultsForInterface:(id)arg1 networks:(id)arg2 anqpElements:(id)arg3 tetherDevices:(id)arg4 ;
-(void)setInterval:(double)arg1 ;
-(void)startScanning;
-(void)stopScanning;
-(void)setSSIDList:(id)arg1 ;
-(void)performScan;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
-(void)stopTimer;
-(void)startTimer;
@end

