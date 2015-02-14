/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IADataPluginDelegate <NSObject>
@optional
-(void)plugin:(id)arg1 aosAccountMigrationFinished:(id)arg2;

@required
-(void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3;
-(void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3;
-(void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3;
-(void)plugin:(id)arg1 didCreateAccountUID:(id)arg2;
-(void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2;
-(void)plugin:(id)arg1 didChangeAccountUID:(id)arg2;
-(char)plugin:(id)arg1 handleCertificateError:(id)arg2;

@end

