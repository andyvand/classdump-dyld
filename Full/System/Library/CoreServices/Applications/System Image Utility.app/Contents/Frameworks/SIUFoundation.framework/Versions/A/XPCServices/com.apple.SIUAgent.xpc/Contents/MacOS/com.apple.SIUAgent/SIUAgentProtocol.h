/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/XPCServices/com.apple.SIUAgent.xpc/Contents/MacOS/com.apple.SIUAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SIUAgentProtocol <NSObject>
@required
-(void)blessBootVolume:(id)arg1 withAuthData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)createAnImage:(id)arg1 withAuthData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopImageCreationWithAuthData:(id)arg1;

@end

