/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@interface IORegistryObjectNotifier : NSObject {

	id _connectObserver;
	SEL _connectSelector;
	id _disconnectObserver;
	SEL _disconnectSelector;
	IONotificationPortRef _IORegistryObjectNotifierNotificationPort;
	unsigned _deviceConnectNotification;
	unsigned _deviceDisconnectNotification;

}
+(char)objectPresent:(id)arg1 ;
-(int)setupNotificationPort;
-(void)releaseAllPorts;
-(void)removeAllObservers;
-(char)setConnectObserver:(id)arg1 selector:(SEL)arg2 ;
-(char)setDisconnectObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)initForObjectsOfClass:(id)arg1 ;
-(void)objectConnected:(id)arg1 ;
-(void)objectDisconnected:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

