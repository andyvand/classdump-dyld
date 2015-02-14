/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class PKInstallRequest, NSTimer;

@interface PKInstallClient : NSObject {

	PKInstallRequest* _installRequest;
	id _delegate;
	char _delegateWantsUpdates;
	id _conn;
	id _installToken;
	NSTimer* _statusTimer;
	double _lastProgress;
	char _isRegistering;
	char _isInitialized;

}
+(id)_connectToDaemonForAuthLevel:(int)arg1 privileged:(char)arg2 recursiveInstall:(char)arg3 forInstance:(id)arg4 ;
+(void)_modifyConnectionsForRegisteredAuthorizations:(id)arg1 ;
+(void)unregisterAuthorizations;
+(double)estimatedTimeForInstallRequest:(id)arg1 ;
+(unsigned long long)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)arg1 ;
+(void)purgeSandboxesOnVolume:(id)arg1 untilFreeSpaceAvailable:(unsigned long long)arg2 ;
+(char)isCurrentlyStagedInstallRequest:(id)arg1 purgeableSize:(id*)arg2 ;
+(char)registerAuthorization:(AuthorizationOpaqueRefRef)arg1 ;
+(void)initialize;
-(id)initWithRequest:(id)arg1 inUserContext:(char)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_initWithRequest:(id)arg1 options:(unsigned long long)arg2 ignoringBlockingClients:(char)arg3 delegate:(id)arg4 error:(id*)arg5 ;
-(void)_scheduleStatusTimerOnCurrentThread;
-(void)_installDaemonDidEndInstallWithError:(id)arg1 registrationPaths:(id)arg2 ;
-(void)_installDaemonDidBeginInstall_OnMainThread;
-(void)_statusTimerHasFired:(id)arg1 ;
-(id)_installStatusByConnectingToDaemon;
-(id)_localPackageForRemoteSpecifier:(id)arg1 ;
-(void)_finishInstallClientOnMainThreadWithError:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)initForCurrentCommitWithDelegate:(id)arg1 ignoringBlockingClients:(char)arg2 error:(id*)arg3 ;
-(id)displayNames;
-(void)installDidBeginForToken:(id)arg1 ;
-(void)installDidBeginCommitForToken:(id)arg1 ;
-(void)installDidEndForToken:(id)arg1 ;
-(id)request;
-(id)initWithRequest:(id)arg1 inUserContext:(char)arg2 holdingBoostDuringInstall:(char)arg3 delegate:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
@end

