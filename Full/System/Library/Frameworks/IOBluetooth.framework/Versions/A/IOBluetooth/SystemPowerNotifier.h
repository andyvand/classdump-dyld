/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@interface SystemPowerNotifier : NSObject {

	id _delegate;
	unsigned _rootConnection;
	unsigned _notifier;
	IONotificationPortRef _notificationPort;

}

@property (assign) unsigned rootConnection;              //@synthesize rootConnection=_rootConnection - In the implementation block
+(id)systemPowerNotifierWithTarget:(id)arg1 ;
-(char)notifyDelegate:(unsigned)arg1 ;
-(unsigned)rootConnection;
-(void)setRootConnection:(unsigned)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
@end

