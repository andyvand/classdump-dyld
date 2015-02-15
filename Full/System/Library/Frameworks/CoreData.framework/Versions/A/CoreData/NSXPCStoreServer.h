/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSXPCServerProtocol.h>

@class NSURL, NSManagedObjectModel, NSDictionary, NSArray, NSXPCListener, NSXPCStoreServerRequestHandlingPolicy, NSMapTable, NSXPCStoreServerNotificationManager, NSString;

@interface NSXPCStoreServer : NSObject <NSXPCServerProtocol> {

	id _delegate;
	NSURL* _modelURL;
	NSManagedObjectModel* _model;
	NSURL* _storeURL;
	NSDictionary* _storeOptions;
	dispatch_queue_sRef _queue;
	NSArray* _entitlementNames;
	NSXPCListener* _listener;
	NSXPCStoreServerRequestHandlingPolicy* _policy;
	NSMapTable* _connectionToCoordinatorMap;
	NSXPCStoreServerNotificationManager* _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)debugDefault;
+(void)initialize;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)errorIsPlausiblyAnSQLiteIssue:(id)arg1 ;
-(char)setupRecoveryForConnectionContext:(id)arg1 ifNecessary:(id)arg2 ;
-(id)_createCoordinator;
-(void)removeCachesForConnection:(id)arg1 ;
-(id)retainedCoordinatorForConnection:(id)arg1 ;
-(oneway void)handleRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)handleMetadataRequestInContext:(id)arg1 ;
-(id)handleFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleObtainRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleFaultRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleRelationshipFaultRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleNotificationNameRequestInContext:(id)arg1 error:(id*)arg2 ;
-(id)handlePullChangesRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)initForStoreWithURL:(id)arg1 usingModelAtURL:(id)arg2 options:(id)arg3 policy:(id)arg4 ;
-(id)errorHandlingDelegate;
-(void)setErrorHandlingDelegate:(id)arg1 ;
-(id)requestHandlingPolicy;
-(void)_populateObject:(id)arg1 withValuesFromClient:(id)arg2 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)dealloc;
-(id)delegate;
-(void)startListening;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
@end

