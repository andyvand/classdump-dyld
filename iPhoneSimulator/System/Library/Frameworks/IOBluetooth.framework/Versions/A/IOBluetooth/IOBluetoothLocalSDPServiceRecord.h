/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetoothSDPServiceRecord.h>

@class NSDictionary, NSMutableSet, IOBluetoothUserNotification;

@interface IOBluetoothLocalSDPServiceRecord : IOBluetoothSDPServiceRecord {

	NSDictionary* mServerAttributeDictionary;
	NSDictionary* mLocalAttributeDictionary;
	NSMutableSet* mAllowedDevices;
	NSMutableSet* mRestrictedDevices;
	IOBluetoothUserNotification* mIncomingChannelNotification;

}
+(id)withServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2 ;
+(void)initialize;
-(id)initWithServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2 ;
-(id)getLocalAttribute:(id)arg1 ;
-(void)incomingRFCOMMChannel:(id)arg1 channel:(id)arg2 ;
-(void)incomingL2CAPChannel:(id)arg1 channel:(id)arg2 ;
-(id)getNameOfService;
-(char)uniqueClientPerDevice;
-(void)launchApp:(id)arg1 objectID:(unsigned long long)arg2 ;
-(char)uniqueClientPerService;
-(id)getServerAttributeDictionary;
-(id)getLocalAttributeDictionary;
-(char)registerForIncomingChannelNotifications;
-(char)unregisterForIncomingChannelNotifications;
-(char)shouldVendServiceForUser:(int)arg1 ;
-(char)isPersistent;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
