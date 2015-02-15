/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CKServiceInterface.h>

@interface CKPushNotificationManager : CKServiceInterface {

	id _delegate;

}

@property (__weak) id<CKPushNotificationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)registerDeviceTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getEnabledMedaTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_writeAutoDownloadEnabled:(long long)arg1 forAccount:(id)arg2 ;
-(void)enableAutoDownloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableAutoDownloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_isAutoDownloadEnabledForAccount:(id)arg1 ;
-(void)enableAutoDownloadAtSignInWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableAutoDownloadAtSignOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isRegisteredForAccount:(id)arg1 andMask:(long long)arg2 ;
-(char)registerPushToken;
-(char)checkEnabledMediaTypes;
-(char)startAtSignIn;
-(char)stopAtSignOut;
-(char)isRegisteredForAccount:(id)arg1 ;
-(id)_registeredDSIDsPreferences;
-(char)_setRegisteredDSIDsPreferences:(id)arg1 ;
-(void)_updateRegisteredDSIDsPreferences:(id)arg1 forDSID:(id)arg2 ;
-(void)_sendChangedToDelegate;
-(void)setDelegate:(id<CKPushNotificationManagerDelegate>)arg1 ;
-(char)stop;
-(char)start;
-(id<CKPushNotificationManagerDelegate>)delegate;
-(void)_sendErrorToDelegate:(id)arg1 ;
-(void)_sendSuccessToDelegate;
@end

