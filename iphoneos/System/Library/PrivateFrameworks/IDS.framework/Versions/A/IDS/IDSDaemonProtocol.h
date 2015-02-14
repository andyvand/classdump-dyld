/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSDaemonProtocol <NSObject>
@optional
-(void)startLocalSetup;
-(void)localSetupCompleted;
-(void)stopLocalSetup;
-(void)localSetupUnpair;
-(void)addPairedDevice:(id)arg1;
-(void)connectPairedDevice:(id)arg1;
-(void)initialLocalSyncStarted;
-(void)initialLocalSyncCompleted:(char)arg1;
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5;
-(void)_removeAccount:(id)arg1;
-(void)_removeAndDeregisterAccount:(id)arg1;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2;
-(void)enableAccount:(id)arg1;
-(void)setLoginID:(id)arg1 forAccount:(id)arg2;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2;
-(void)authenticationChangedForAccount:(id)arg1;
-(void)passwordUpdatedForAccount:(id)arg1;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3;
-(void)validateProfileForAccount:(id)arg1;
-(void)addAliases:(id)arg1 toAccount:(id)arg2;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1;
-(void)hardDeregister;
-(void)kickGetDependentForAccount:(id)arg1;
-(void)idsiCloudSignInDataMigratorForID:(id)arg1;
-(void)deletePairedDevice:(id)arg1;
-(void)getLocalDeviceInfo;
-(void)getPairedDeviceInfo;
-(void)getDeliveryStats;
-(void)setPairedDeviceInfo:(id)arg1;
-(void)sendMessageWithSendParameters:(id)arg1;
-(void)cancelItemWithIdentifier:(id)arg1 service:(id)arg2;
-(void)sendPersistedFile:(id)arg1 userInfo:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 identifier:(id)arg5;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3;
-(void)setPreferInfraWiFi:(char)arg1 service:(id)arg2;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1 alternateCallbackID:(id)arg2 forAccountWithUniqueID:(id)arg3;
-(void)acknowledgeMessageWithGUID:(id)arg1 forAccountWithUniqueID:(id)arg2;
-(void)sendAppAckWithGUID:(id)arg1 toDestination:(id)arg2 forAccountWithUniqueID:(id)arg3;
-(void)setListenerServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3;
-(void)openSocketWithOptions:(id)arg1;
-(void)closeSocketWithOptions:(id)arg1;
-(void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2 forService:(id)arg3;
-(void)setupNewSessionWithConfiguration:(id)arg1;
-(void)cleanupSession:(id)arg1;
-(void)sendInvitation:(id)arg1 withOptions:(id)arg2;
-(void)sendInvitation:(id)arg1 withData:(id)arg2 declineOnError:(char)arg3;
-(void)cancelInvitation:(id)arg1;
-(void)cancelInvitation:(id)arg1 withData:(id)arg2;
-(void)acceptInvitation:(id)arg1;
-(void)acceptInvitation:(id)arg1 withData:(id)arg2;
-(void)declineInvitation:(id)arg1;
-(void)declineInvitation:(id)arg1 withData:(id)arg2;
-(void)endSession:(id)arg1;
-(void)endSession:(id)arg1 withData:(id)arg2;
-(void)sendSessionMessage:(id)arg1 toSession:(id)arg2;
-(void)setAudioEnabled:(char)arg1 forSessionWithUniqueID:(id)arg2;
-(void)setMuted:(char)arg1 forSessionWithUniqueID:(id)arg2;
-(void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(id)arg2;
-(void)acknowledgeSessionID:(id)arg1 clientID:(id)arg2;
-(void)continuityClientInstanceCreated;
-(void)continuityStartAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
-(void)continuityStopAdvertisingOfType:(long long)arg1;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4;
-(void)continuityStopScanningForType:(long long)arg1;
-(void)continuityConnectToPeer:(id)arg1;
-(void)continuityDisconnectFromPeer:(id)arg1;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)registerAccount:(id)arg1;
-(void)unregisterAccount:(id)arg1;
-(void)authenticateAccount:(id)arg1;
-(void)disableAccount:(id)arg1;
-(void)xpcObject:(void*)arg1 objectContext:(id)arg2;

@end

