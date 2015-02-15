/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/SUDownloadService.h>
#import <SoftwareUpdate/NSXPCListenerDelegate.h>
#import <SoftwareUpdate/SUURLSessionDownloadDelegate.h>

@class NSXPCListener, NSMutableArray, NSMutableDictionary, NSLock, NSXPCConnection, NSString;

@interface SUDownloadServiceAgent : NSObject <SUDownloadService, NSXPCListenerDelegate, SUURLSessionDownloadDelegate> {

	NSXPCListener* _listener;
	NSMutableArray* _clients;
	NSMutableDictionary* _downloadSessionsByKey;
	NSMutableDictionary* _downloadProductsByKey;
	NSMutableDictionary* _updateStatusByKey;
	NSMutableDictionary* _recentStatusByKey;
	AuthorizationOpaqueRefRef _installAuth;
	NSMutableArray* _acquiredRights;
	NSMutableDictionary* _downloadDoneBlocksByKey;
	NSMutableDictionary* _initiatedDownloadsByKey;
	NSLock* _serviceConnectionLock;
	dispatch_queue_sRef _serviceQueue;
	dispatch_queue_sRef _clientsQueue;
	dispatch_queue_sRef _downloadQueue;
	dispatch_queue_sRef _updateStatusQueue;
	NSXPCConnection* _suDaemonConnection;

}

@property (readonly) dispatch_queue_sRef serviceQueue;                   //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (readonly) dispatch_queue_sRef clientsQueue;                   //@synthesize clientsQueue=_clientsQueue - In the implementation block
@property (readonly) dispatch_queue_sRef downloadQueue;                  //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (readonly) dispatch_queue_sRef updateStatusQueue;              //@synthesize updateStatusQueue=_updateStatusQueue - In the implementation block
@property (readonly) NSXPCConnection * suDaemonConnection;               //@synthesize suDaemonConnection=_suDaemonConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daemonStateArchivePath;
+(id)sharedDownloadServiceAgent;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(dispatch_queue_sRef)downloadQueue;
-(void)_initFromSavedState;
-(void)_attemptToEnterDevKeyMode;
-(id)_serviceConnection;
-(void)saveCurrentState;
-(id)_archivedState;
-(char)_unarchiveStateFrom:(id)arg1 ;
-(void)dumpState;
-(dispatch_queue_sRef)clientsQueue;
-(dispatch_queue_sRef)serviceQueue;
-(dispatch_queue_sRef)updateStatusQueue;
-(void)_setStateForProductKey:(id)arg1 newState:(unsigned long long)arg2 ;
-(char)_isClientAuthorized;
-(void)_cancelDownloadOpForProductKeys:(id)arg1 fixupState:(char)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(id)_statusForProduct:(id)arg1 createIfMissing:(char)arg2 ;
-(void)_installStatus:(id)arg1 didChangeForProductKey:(id)arg2 ;
-(void)_startDownloadingUpdateWithProduct:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_finishDownloadAndCleanupForProduct:(id)arg1 ;
-(void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3 ;
-(void)authorizeForUpdatingWithExternalFormData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)addProductToDownload:(id)arg1 replyWhenDone:(/*^block*/id)arg2 ;
-(void)cancelDownloadForProductKey:(id)arg1 ;
-(void)cancelDownloadForProductKeys:(id)arg1 replyWhenDone:(/*^block*/id)arg2 ;
-(void)downloadStatusForProductKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCatalogTestMode:(id)arg1 withDevKeyHeader:(id)arg2 andData:(id)arg3 ;
-(void)dumpDebugInfo;
-(id)packageReferenceForPackageIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPreviousRef:(id)arg3 ;
-(void)downloadSessionDidFinishForProductKey:(id)arg1 ;
-(void)backgroundDownloadDidResumeForSessionWithIdentifier:(id)arg1 ;
-(void)startListeningForConnectionsToService:(id)arg1 ;
-(NSXPCConnection *)suDaemonConnection;
-(id)init;
-(void)dealloc;
-(void)resetState;
@end
