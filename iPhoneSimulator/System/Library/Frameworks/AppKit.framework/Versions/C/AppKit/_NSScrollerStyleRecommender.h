/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMachPortDelegate.h>

@class NSTimer, NSMachPort, NSString;

@interface _NSScrollerStyleRecommender : NSObject <NSMachPortDelegate> {

	long long lastRecommendedScrollerStyle;
	NSTimer* scrollerStyleRecommendationUpdateTimer;
	IONotificationPortRef iokitNotificationPort;
	unsigned iokitNotificationMachPort;
	NSMachPort* iokitMachPort;
	unsigned servicePublishNotification;
	unsigned serviceTerminationNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedScrollerStyleRecommender;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(long long)recommendedScrollerStyle;
-(void)showScrollBarsSettingChanged:(id)arg1 ;
-(void)pointingDeviceGestureScrollSettingChanged:(id)arg1 ;
-(void)setRecommendedScrollerStyleAndNotify:(long long)arg1 ;
-(void)cancelScrollerStyleRecommendationUpdate;
-(void)scrollerStyleRecommendationUpdateTimerFired:(id)arg1 ;
-(void)scheduleScrollerStyleRecommendationUpdate:(double)arg1 ;
-(char)startListeningForPointingDeviceConnectAndDisconnect;
-(void)startListeningForUserPreferenceNotifications;
-(void)stopListeningForPointingDeviceConnectAndDisconnect;
-(void)stopListeningForUserPreferenceNotifications;
-(void)handleMachMessage:(void*)arg1 ;
-(void)notePointingDeviceConnected;
-(void)notePointingDeviceDisconnected;
@end

