/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetoothNSUserNotification.h>

@interface IOBluetoothNSObjCUserNotification : IOBluetoothNSUserNotification {

	id mObserver;
	SEL mSelector;

}
+(id)withObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)deliverNotification:(id)arg1 ;
@end

