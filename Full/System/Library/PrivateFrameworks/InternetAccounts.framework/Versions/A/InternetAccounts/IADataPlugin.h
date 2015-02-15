/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAPlugin.h>

@protocol IADataPluginDelegate;
@interface IADataPlugin : IAPlugin {

	id<IADataPluginDelegate> _delegate;

}

@property (retain) id<IADataPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)accountUIDs;
-(void)deleteAccountUID:(id)arg1 ;
-(void)startAccountSetupWithInput:(id)arg1 ;
-(void)cancelAccountSetupForInput:(id)arg1 ;
-(void)cancelSetupForAccount:(id)arg1 ;
-(id)createAccountForInput:(id)arg1 discoveredResult:(id)arg2 error:(id*)arg3 ;
-(id)accountUIDs:(id*)arg1 ;
-(void)configureAccountUID:(id)arg1 ;
-(id)imageForAccountUID:(id)arg1 ;
-(void)aosAccountStartedMigration:(id)arg1 ;
-(char)deleteAccountUID:(id)arg1 error:(id*)arg2 ;
-(void)deactivateAccountUID:(id)arg1 ;
-(void)startAccountSetupWithInput:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createAccountForInput:(id)arg1 discoveredResult:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)activateAccountUID:(id)arg1 ;
-(id)settingsForAccountUID:(id)arg1 ;
-(void)setDelegate:(id<IADataPluginDelegate>)arg1 ;
-(id<IADataPluginDelegate>)delegate;
@end

