/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FMFSessionDelegate <NSObject>
@optional
-(void)didReceiveLocation:(id)arg1;
-(void)didFailToFetchLocationForHandle:(id)arg1 withError:(id)arg2;
-(void)connectionError:(id)arg1;
-(void)didReceiveFriendshipRequest:(id)arg1;
-(void)didStartSharingMyLocationWithHandle:(id)arg1;
-(void)didStopSharingMyLocationWithHandle:(id)arg1;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1;
-(void)didUpdateHidingStatus:(char)arg1;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
-(void)mappingPacketProcessingCompleted:(id)arg1;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2;
-(void)didChangeActiveLocationSharingDevice:(id)arg1;
-(void)didUpdateActiveDeviceList:(id)arg1;
-(void)didUpdatePendingOffersForHandles:(id)arg1;
-(void)didReceiveServerError:(id)arg1;

@end

