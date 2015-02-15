/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKInstallService.h>
#import <PackageKit/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString, NSMutableDictionary, NSMutableArray;

@interface PKInstallDaemon : NSObject <PKInstallService, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSString* _connectionName;
	NSMutableDictionary* _tokenToInstallDictionary;
	NSMutableDictionary* _tokenToDoneBlockDictionary;
	NSMutableDictionary* _tokenToQualityOfServiceClassDictionary;
	id _currentToken;
	NSMutableArray* _tokenQueue;
	NSMutableDictionary* _validatedAuthorizations;
	NSMutableArray* _clients;
	dispatch_queue_sRef _queueQueue;
	dispatch_queue_sRef _serviceQueue;
	dispatch_queue_sRef _clientNotifyQueue;
	dispatch_queue_sRef _stateQueue;
	int _daemonState;
	int _idleCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)doingRecursiveInstall;
+(id)sharedServiceDaemon;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)registerAuthorizationFromInstallRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)currentStageStatusOfInstallRequest:(id)arg1 calculatePurgeableSize:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)tokenForInstallRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)tokenForCurrentCommitIgnoringBlockingClients:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)addToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)adoptToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)displayNamesForToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)installStatusForToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startPurgeOfSandboxesOnVolume:(id)arg1 untilFreeSpaceAvailable:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)_descriptionForToken:(id)arg1 ;
-(char)_evaluateSecurityOfRequest:(id)arg1 ;
-(void)_attachToToken:(id)arg1 withDoneBlock:(/*^block*/id)arg2 ;
-(void)startNextInstallIfNeeded;
-(char)_requestHasValidAuthorization:(id)arg1 allowInteraction:(char)arg2 ;
-(void)_runIdleTasks;
-(void)_invokeDoneBlocksForToken:(id)arg1 ;
-(char)_isProvidingPrivilegeEscalation;
-(char)removeTokenIfPossible:(id)arg1 ;
-(void)_installDidEnd;
-(void)installDidBegin:(id)arg1 ;
-(void)installWillFinish:(id)arg1 ;
-(void)install:(id)arg1 didFailWithError:(id)arg2 ;
-(void)installDidFinish:(id)arg1 ;
-(void)installDidCancel:(id)arg1 ;
-(void)startListeningForConnectionsToService:(id)arg1 ;
-(id)_currentClients;
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

