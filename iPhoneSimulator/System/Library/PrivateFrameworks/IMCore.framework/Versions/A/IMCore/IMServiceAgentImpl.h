/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMServiceAgent.h>

@interface IMServiceAgentImpl : IMServiceAgent
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(void)forgetStatusImageAppearance;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(void)_statusImageAppearanceChanged:(id)arg1 ;
+(void)_determineStatusImageAppearance;
+(id)sharedAgent;
+(void)initialize;
+(id)notificationCenter;
-(id)serviceWithName:(id)arg1 ;
-(void)setupComplete;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(void)_statusImageAppearanceChanged:(id)arg1 ;
-(void)_customMessagesChanged:(id)arg1 ;
-(void)_daemonConnected:(id)arg1 ;
-(void)_daemonDisconnected:(id)arg1 ;
-(void)launchIfNecessary;
-(id)myAvailableMessages;
-(id)myAwayMessages;
-(void)setMyAvailableMessages:(id)arg1 ;
-(void)setMyAwayMessages:(id)arg1 ;
-(unsigned long long)vcCapabilities;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)notificationCenter;
@end

