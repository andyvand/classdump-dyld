/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/blued
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BluetoothScanClientDelegate <NSObject>
@required
-(void)deviceFound:(unsigned long long)arg1 response:(id)arg2 RSSI:(char)arg3;
-(void)deviceState:(unsigned long long)arg1 response:(id)arg2;

@end

