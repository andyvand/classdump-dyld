/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Library/LaunchServices/fbahelperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <fbahelperd/NSXPCListenerDelegate.h>
#import <fbahelperd/FBAPrivilegedDaemon.h>

@protocol FBAPrivilegedDaemon <NSObject>
@required
-(void)performReadyCheck;
-(void)showPrivileges;
-(void)stopDaemon;
-(void)runSystemProfileWithDetailLevel:(id)arg1 destination:(id)arg2;
-(void)runMobilityReportWithDestination:(id)arg1;
-(void)runSysdiagnoseWithDestination:(id)arg1;
-(void)runWifiDiagnoseWithDestination:(id)arg1;
-(void)runBluetoothDiagnoseWithDestination:(id)arg1 shortUserName:(id)arg2;
-(void)runTMDiagnoseWithDestination:(id)arg1;
-(void)runMDSDiagnoseWithDestination:(id)arg1;
-(void)sampleProcessWithPID:(unsigned long long)arg1 withDestination:(id)arg2;
-(void)gatherSyslogsWithDestination:(id)arg1;
-(void)gatherInstallLogsWithDestination:(id)arg1;
-(void)copyLogFiles:(id)arg1;

@end


@protocol FBAPrivilegedClient;
@class NSXPCConnection, NSMutableSet, NSString;

@interface FBAPrivilegedDaemon : NSObject <NSXPCListenerDelegate, FBAPrivilegedDaemon> {

	NSXPCConnection* _connection;
	id<FBAPrivilegedClient> _client;
	NSMutableSet* _runningTasks;

}

@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) id<FBAPrivilegedClient> client;                  //@synthesize client=_client - In the implementation block
@property (retain) NSMutableSet * runningTasks;                     //@synthesize runningTasks=_runningTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performReadyCheck;
-(void)showPrivileges;
-(void)stopDaemon;
-(void)runSystemProfileWithDetailLevel:(id)arg1 destination:(id)arg2 ;
-(void)runMobilityReportWithDestination:(id)arg1 ;
-(void)runSysdiagnoseWithDestination:(id)arg1 ;
-(void)runWifiDiagnoseWithDestination:(id)arg1 ;
-(void)runBluetoothDiagnoseWithDestination:(id)arg1 shortUserName:(id)arg2 ;
-(void)runTMDiagnoseWithDestination:(id)arg1 ;
-(void)runMDSDiagnoseWithDestination:(id)arg1 ;
-(void)sampleProcessWithPID:(unsigned long long)arg1 withDestination:(id)arg2 ;
-(void)gatherSyslogsWithDestination:(id)arg1 ;
-(void)gatherInstallLogsWithDestination:(id)arg1 ;
-(void)copyLogFiles:(id)arg1 ;
-(id)authorizedClientReq;
-(NSMutableSet *)runningTasks;
-(void)setRunningTasks:(NSMutableSet *)arg1 ;
-(void)terminateRunningTasks;
-(char)fixPermissionsOfURL:(id)arg1 recursively:(char)arg2 ;
-(char)canModifyPath:(id)arg1 ;
-(id)accessDeniedErrorForPath:(id)arg1 ;
-(id)movePath:(id)arg1 toDirectory:(id)arg2 permissions:(short)arg3 error:(id*)arg4 ;
-(void)runCommand:(id)arg1 withArgs:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3 ;
-(void)runWdutilDiagnoseWithDestination:(id)arg1 ;
-(void)runLegacyWifiDiagnoseWithDestination:(id)arg1 ;
-(void)runCommand:(id)arg1 withArgs:(id)arg2 setup:(/*^block*/id)arg3 callback:(/*^block*/id)arg4 ;
-(char)gatherAndCompressFiles:(id)arg1 toArchive:(id)arg2 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id<FBAPrivilegedClient>)client;
-(void)setClient:(id<FBAPrivilegedClient>)arg1 ;
@end

