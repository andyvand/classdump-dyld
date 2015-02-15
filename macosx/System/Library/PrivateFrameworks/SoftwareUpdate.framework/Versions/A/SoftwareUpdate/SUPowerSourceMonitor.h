/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@interface SUPowerSourceMonitor : NSObject {

	CFRunLoopSourceRef _powerRunLoopSource;
	dispatch_queue_sRef _notifyQueue;
	/*^block*/id _notifyBlock;
	char _isAC;

}
+(char)isSafeToAutoInstallGivenCurrentPowerSources;
+(char)isRunningOnACPower;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_startObservingPowerSource;
-(void)_stopObservingPowerSource;
-(void)_handleChangeInPowerSource;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(void)start;
@end
