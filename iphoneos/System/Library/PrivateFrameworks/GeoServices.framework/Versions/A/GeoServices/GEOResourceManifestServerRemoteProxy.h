/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate;
@class NSLock, NSHashTable, GEOResourceManifestConfiguration, NSString;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	xpc_connection_sRef _conn;
	NSLock* _connLock;
	NSHashTable* _cancellingConnections;
	NSLock* _cancellingConnectionsLock;
	unsigned long long _retryCount;
	char _isUpdatingManifest;
	char _isLoadingResources;
	dispatch_queue_sRef _serverQueue;
	GEOResourceManifestConfiguration* _configuration;
	NSLock* _authTokenLock;
	NSString* _authToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)configuration;
-(void)_setupConnection;
-(id)authToken;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)openConnection;
-(void)closeConnection;
-(dispatch_queue_sRef)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)forceUpdate:(/*^block*/id)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)_handleMessage:(id)arg1 xpcMessage:(void*)arg2 ;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
@end

