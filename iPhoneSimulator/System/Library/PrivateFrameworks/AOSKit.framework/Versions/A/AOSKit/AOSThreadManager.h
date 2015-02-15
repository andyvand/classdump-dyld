/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSKit/AOSKit-Structs.h>
@class NSLock;

@interface AOSThreadManager : NSObject {

	NSLock* _proxyLock;

}
+(void)initialize;
+(id)sharedManager;
-(id)_updateDerivedInfoUsingOldInfo:(id)arg1 andNewInfo:(id)arg2 forAccount:(AOSAccountRef)arg3 ;
-(char)AOSKPersistFullUsername;
-(id)_mailPrefsDataFromDict:(id)arg1 ;
-(id)_aliasInfoFromJSONData:(id)arg1 ;
-(id)_createDictionaryFromAlias:(id)arg1 ;
-(void)AOSKPersistEmailAliasURL:(id)arg1 ;
-(void)AOSKPersistAccountAttributes:(id)arg1 ;
-(void)runEmailLookupThreadWithContext:(id)arg1 ;
-(void)runPushTokenRetrievalThreadWithContext:(id)arg1 ;
-(void)runRegisterDeviceThreadWithContext:(id)arg1 ;
-(void)runDeregisterDeviceThreadWithContext:(id)arg1 ;
-(void)runRampStateRetrievalThreadWithContext:(id)arg1 ;
-(void)runDocumentsMigrationStatusThreadWithContext:(id)arg1 ;
-(void)runDocumentsMigrationDevicesThreadWithContext:(id)arg1 ;
-(void)runDocumentsMigrationTriggerThreadWithContext:(id)arg1 ;
-(void)runBuddyLoginThreadWithContext:(id)arg1 ;
-(void)runDelegateLoginThreadWithContext:(id)arg1 ;
-(void)runBuddyHelpThreadWithContext:(id)arg1 ;
-(void)runConfigQueryThreadWithContext:(id)arg1 ;
-(void)runSystemCheckThreadWithContext:(id)arg1 ;
-(void)runDataclassConfigThreadWithContext:(id)arg1 ;
-(void)AOSKPersistAccountData:(id)arg1 ;
-(void)runInitiateVettingThreadWithContext:(id)arg1 ;
-(void)runQuotaUsageThreadWithContext:(id)arg1 ;
-(void)runStorageUsageThreadWithContext:(id)arg1 ;
-(void)AOSKPersistExpirationDate:(id)arg1 ;
-(void)runStorageAlertThreadWithContext:(id)arg1 ;
-(void)AOSKPersistMailProperties:(id)arg1 ;
-(void)AOSKPersistMailAliases:(id)arg1 ;
-(id)_aliasesFromXMLData:(id)arg1 ;
-(void)AOSKVerifyQuota:(id)arg1 ;
-(void)AOSKUpdateAccountProperties:(id)arg1 ;
-(void)clearCaches;
-(id)init;
-(void)dealloc;
@end

