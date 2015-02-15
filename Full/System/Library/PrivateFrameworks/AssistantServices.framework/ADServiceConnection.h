/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ADServiceConnectionSyncDelegate;
@class NSObject, NSString, NSXPCConnection, ADServiceStatistics, NSDictionary;

@interface ADServiceConnection : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _identifier;
	NSString* _path;
	NSXPCConnection* _connection;
	char _serviceLoaded;
	ADServiceStatistics* _stats;
	NSDictionary* _commandMap;
	NSDictionary* _anchorKeyClassMap;
	NSString* _domainObjectClearingClassName;
	char _preheated;
	id<ADServiceConnectionSyncDelegate> _syncDelegate;

}

@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<ADServiceConnectionSyncDelegate> syncDelegate;              //@synthesize syncDelegate=_syncDelegate - In the implementation block
-(void)_handleDisconnect;
-(id)_bundleClassForDomain:(id)arg1 commandName:(id)arg2 ;
-(id)_providerServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_syncClassForAnchorKey:(id)arg1 ;
-(id)_providerService;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 commandMap:(id)arg3 anchorMap:(id)arg4 clearingClass:(id)arg5 queue:(id)arg6 ;
-(void)sendClientBoundCommand:(id)arg1 domain:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)sendBeginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 ;
-(void)sendClearDomainObjects;
-(void)preheatServiceBundle;
-(id<ADServiceConnectionSyncDelegate>)syncDelegate;
-(void)setSyncDelegate:(id<ADServiceConnectionSyncDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)resume;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
