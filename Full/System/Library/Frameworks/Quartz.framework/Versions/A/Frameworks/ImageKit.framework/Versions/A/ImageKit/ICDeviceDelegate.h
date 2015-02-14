/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICDeviceDelegate <NSObject>
@optional
-(void)deviceDidChangeName:(id)arg1;
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
-(void)deviceDidBecomeReady:(id)arg1;
-(void)deviceDidChangeSharingState:(id)arg1;
-(void)device:(id)arg1 didEncounterError:(id)arg2;
-(void)device:(id)arg1 didReceiveStatusInformation:(id)arg2;
-(void)device:(id)arg1 didReceiveButtonPress:(id)arg2;
-(void)device:(id)arg1 didReceiveCustomNotification:(id)arg2 data:(id)arg3;

@required
-(void)didRemoveDevice:(id)arg1;

@end

