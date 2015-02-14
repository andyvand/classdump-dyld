/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IAXPCProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface IAAccountCollector : NSObject {

	NSXPCConnection* _connection;
	id<IAXPCProtocol> _agent;
	NSObject*<OS_dispatch_queue> _replyQueue;

}
+(id)shared;
-(void)accountWithUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)imageForAccountUID:(id)arg1 ;
-(void)authenticateAccountUID:(id)arg1 credential:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)activateAccountUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)allAccountsWithReply:(/*^block*/id)arg1 ;
-(void)topLevelAccountsForProvider:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)addAccount:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeAccountWithUID:(id)arg1 deleteFromDataSource:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)descriptionForAccount:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 oldAccount:(id)arg3 ;
-(void)continueSetupInAppForPluginID:(id)arg1 settings:(id)arg2 ;
-(void)cancelSetupForAccount:(id)arg1 pluginID:(id)arg2 ;
-(void)configureAccountUID:(id)arg1 pluginID:(id)arg2 ;
-(void)dumpDataPluginNotificationHistory;
-(void)writeDiagnostics;
-(id)propertiesForPluginID:(id)arg1 ;
-(id)addAccount_sync:(id)arg1 ;
-(id)accountsWithLoginName_sync:(id)arg1 service:(id)arg2 provider:(id)arg3 attributes:(id)arg4 ;
-(id)imageForAccountUID:(id)arg1 pluginID:(id)arg2 ;
-(id)accountWithUID_sync:(id)arg1 ;
-(void)cacheAccounts;
-(void)addACAccountProperties:(id)arg1 forUID:(id)arg2 ;
-(id)deleteAccountWithUID_sync:(id)arg1 ;
-(id)imageForPluginID:(id)arg1 ;
-(id)topLevelAccounts_sync;
-(void)copyContactsRecordsAndDeleteAccountUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeAccountWithUID:(id)arg1 deleteFromPlugin:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)accountsWithLoginName:(id)arg1 service:(id)arg2 provider:(id)arg3 attributes:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)deactivateAccountUID:(id)arg1 ;
-(void)updateAccountWithUID:(id)arg1 withSettings:(id)arg2 ;
-(void)activateAccountUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)aListPluginIDForSettings:(id)arg1 ;
-(id)descriptionForAccount:(id)arg1 ;
@end

