/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSDaemonListenerProtocol <NSObject>
@optional
-(void)daemonConnected;
-(void)daemonDisconnected;
-(void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
-(void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(char)arg6;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
-(void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
-(void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)accountAdded:(id)arg1;
-(void)accountUpdated:(id)arg1;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2;
-(void)accountEnabled:(id)arg1 onService:(id)arg2;
-(void)accountDisabled:(id)arg1 onService:(id)arg2;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;
-(void)account:(id)arg1 accountInfoChanged:(id)arg2;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
-(void)refreshRegistrationForAccount:(id)arg1;
-(void)activeDevicesUpdatedForAccount:(id)arg1;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2;
-(void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(char)arg4 error:(id)arg5;
-(void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
-(void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)session:(id)arg1 audioEnabled:(char)arg2;
-(void)session:(id)arg1 muted:(char)arg2;
-(void)openedSocket:(void*)arg1 forHandlerID:(id)arg2 error:(id)arg3;
-(void)localDeviceInfo:(id)arg1;
-(void)pairedDeviceInfo:(id)arg1;
-(void)deliveryStats:(id)arg1;
-(void)device:(id)arg1 nsuuidChanged:(id)arg2;
-(void)device:(id)arg1 pairingDeleted:(char)arg2;
-(void)device:(id)arg1 pairingAdded:(char)arg2;
-(void)continuityDidUpdateState:(long long)arg1;
-(void)continuityDidLosePeer:(id)arg1;
-(void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2;
-(void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
-(void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3;
-(void)continuityDidStopTrackingPeer:(id)arg1;
-(void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)continuityDidStartAdvertisingOfType:(long long)arg1;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1;
-(void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
-(void)continuityDidStartScanningForType:(long long)arg1;
-(void)continuityDidStopScanningForType:(long long)arg1;
-(void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
-(void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
-(void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
-(void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
-(void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)setupComplete:(char)arg1 info:(id)arg2;
-(void)accountRemoved:(id)arg1;
-(void)xpcObject:(void*)arg1 objectContext:(id)arg2;

@end

