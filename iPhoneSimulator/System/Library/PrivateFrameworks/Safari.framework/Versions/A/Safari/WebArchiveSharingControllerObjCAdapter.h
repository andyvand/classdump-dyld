/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface WebArchiveSharingControllerObjCAdapter : NSObject {

	WebArchiveSharingController* _controller;
	char _registeredForDidLaunchApplicationNotification;

}

@property (nonatomic,readonly) WebArchiveSharingController* controller;              //@synthesize controller=_controller - In the implementation block
+(id)mailAppBundleIdentifier;
-(id)initWithWebArchiveSharingController:(WebArchiveSharingController*)arg1 ;
-(void)registerForDidLaunchApplicationNotification;
-(void)_didLaunchApplication:(id)arg1 ;
-(void)dealloc;
-(WebArchiveSharingController*)controller;
@end

