/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Growl/NSUserNotificationCenterDelegate.h>

@class NSMutableArray;

@interface GrowlAppleNotificationDelegate : NSObject <NSUserNotificationCenterDelegate> {

	NSMutableArray* pendingNotifications;

}
-(void)expireNotification:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2 ;
-(char)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2 ;
-(void)dealloc;
-(void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2 ;
@end

