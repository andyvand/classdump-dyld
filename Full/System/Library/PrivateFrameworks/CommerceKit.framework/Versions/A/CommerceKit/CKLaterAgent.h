/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKLaterAgent : NSObject
+(void)_sendAgentCommand:(long long)arg1 mode:(long long)arg2 ;
+(void)_sendAgentMessage:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
+(void)armObserverWithMode:(long long)arg1 ;
+(void)disarmObserver;
+(char)isArmedForInstallLater;
+(void)performUserInteractionForAvailableUpdatesWithMode:(long long)arg1 handler:(/*^block*/id)arg2 ;
+(char)requestUserConfirmationOfLicenseAgreementWithProductKey:(id)arg1 ;
+(char)requestUserConfirmationOfFirmwareWarningWithProductKey:(id)arg1 ;
+(long long)showRestartCountdownNotification;
+(char)isRestartCountdownShown;
@end

