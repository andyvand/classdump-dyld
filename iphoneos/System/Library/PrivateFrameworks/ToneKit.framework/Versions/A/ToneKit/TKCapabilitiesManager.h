/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TKCapabilitiesManager : NSObject

@property (getter=isRingtoneStoreAvailable,nonatomic,readonly) char ringtoneStoreAvailable; 
@property (getter=isAlertToneStoreAvailable,nonatomic,readonly) char alertToneStoreAvailable; 
@property (nonatomic,readonly) char hasVibratorCapability; 
@property (nonatomic,readonly) char hasUserGeneratedVibrationsCapability; 
+(id)sharedCapabilitiesManager;
-(char)hasVibratorCapability;
-(char)isRingtoneStoreAvailable;
-(char)isAlertToneStoreAvailable;
-(char)hasUserGeneratedVibrationsCapability;
@end

