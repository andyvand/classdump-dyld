/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IADataPluginDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IADataPluginController : NSObject <IADataPluginDelegate> {

	NSMutableDictionary* _plugins;
	NSMutableDictionary* _workQueues;
	NSMutableArray* _dataPluginNotificationHistory;

}

@property (retain) NSMutableArray * dataPluginNotificationHistory;              //@synthesize dataPluginNotificationHistory=_dataPluginNotificationHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)plugin:(id)arg1 performBlock:(/*^block*/id)arg2 withTimeOut:(long long)arg3 ;
+(void)plugin:(id)arg1 performBlock:(/*^block*/id)arg2 ;
+(id)sharedInstance;
-(void)plugin:(id)arg1 performBlock:(/*^block*/id)arg2 withTimeOut:(long long)arg3 ;
-(id)_queueForPluginID:(id)arg1 ;
-(NSMutableArray *)dataPluginNotificationHistory;
-(void)setDataPluginNotificationHistory:(NSMutableArray *)arg1 ;
-(void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3 ;
-(void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3 ;
-(void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3 ;
-(void)plugin:(id)arg1 didCreateAccountUID:(id)arg2 ;
-(void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2 ;
-(void)plugin:(id)arg1 didChangeAccountUID:(id)arg2 ;
-(char)plugin:(id)arg1 handleCertificateError:(id)arg2 ;
-(void)plugin:(id)arg1 aosAccountMigrationFinished:(id)arg2 ;
-(id)init;
@end

