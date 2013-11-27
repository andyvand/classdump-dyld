/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface PLChangeNode : NSObject {

	NSObject<OS_xpc_object>* _hubConnection;
	Class _changeHubClass;
	unsigned char _nodeUUID[16];
	int _notifyToken;
	NSObject<OS_dispatch_queue>* _isolationQueue;
	unsigned long long _lastKnownChangeHubEventIndex;

}
+(id)sharedNode;
+(id)_descriptionForEvent:(id)arg1 ;
+(id)localChangeEventFromChangeHubEvent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)connectManagedObjectContext:(id)arg1 ;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)setupHubConnection;
-(void)processDelayedMomentChangesWithTransaction:(id)arg1 ;
-(void)_processCloudFeedUpdateDataFromChangeHubEvent:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedDupeAnalysisFromChangeHubEvent:(id)arg1 transaction:(id)arg2 ;
-(void)_processDeletionsFromChangeHubEvent:(id)arg1 transaction:(id)arg2 ;
-(void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3 ;
-(id)sendEventToChangeHub:(id)arg1 transaction:(id)arg2 ;
-(void)sendChangeHubEventForDidSaveNotification:(id)arg1 ;
-(id)createXPCObjectFromDidSaveNotification:(id)arg1 ;
-(void)processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7 ;
-(void)processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3 ;
-(void)processDelayedAssetsForFileSystemPersistency:(id)arg1 transaction:(id)arg2 ;
-(void)handleRemoteChangeHubRequest:(id)arg1 ;
-(void)fetchNewEventsFromChangeHub;
-(void)forceUserInterfaceReload;
-(void)processRemoteEvents:(id)arg1 ;
-(BOOL)isEventOriginatingFromHere:(id)arg1 ;
-(void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3 ;
-(void)distributeLocalEvent:(id)arg1 ;
-(void)_processDelatedAssetsForFileSystemPersistencyFromChangeHubEvent:(id)arg1 transaction:(id)arg2 ;
@end
