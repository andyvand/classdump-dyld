/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreMediaIO.framework/Versions/A/CoreMediaIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaIO/CoreMediaIO-Structs.h>
#import <CoreMediaIO/CMIOServerProtocol.h>

@protocol CMIOClientProtocol;
@class NSConnection, NSOperationQueue;

@interface CMIOGraphService : NSObject <CMIOServerProtocol> {

	OpaqueCMIOGraphRef graph;
	NSConnection* connection;
	id<CMIOClientProtocol> remoteClient;
	NSOperationQueue* operationQueue;

}
-(void)connectionDidDie:(id)arg1 ;
-(void)setConnection:(id)arg1 ;
-(void)dealloc;
-(void)stopMonitoring;
-(id)client;
-(void)cleanup;
-(id)initWithGraph:(OpaqueCMIOGraphRef)arg1 ;
-(oneway void)setMonitoring:(nOI)arg1 forNodes:(nO@)arg2 ;
-(oneway void)initiateConnectionWithClient:(nR)arg1 :(id)arg2 ;
-(oneway void)graphGetNodeCount;
-(oneway void)graphGetConnectionCount;
-(oneway void)graphGetXMLRepresentation;
-(oneway void)setMonitoringForAllNodes:(nOI)arg1 ;
@end

