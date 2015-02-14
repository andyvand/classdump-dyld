/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary, ISStoreClient, Protocol;

@interface ISServiceProxy : NSObject {

	NSLock* _serviceConnectionLock;
	NSMutableDictionary* _connectionsByServiceName;
	NSMutableDictionary* _localInterfacesByServiceName;
	ISStoreClient* _storeClient;

}

@property (nonatomic,__weak,readonly) id<ISServiceRemoteObject> exportedObject; 
@property (nonatomic,readonly) Protocol * exportedProtocol; 
@property (nonatomic,retain) ISStoreClient * storeClient;                                    //@synthesize storeClient=_storeClient - In the implementation block
@property (nonatomic,readonly) id<ISAccountService> accountService; 
@property (nonatomic,readonly) id<ISDownloadService> downloadService; 
@property (nonatomic,readonly) id<ISAssetService> assetService; 
@property (nonatomic,readonly) id<ISTransactionService> transactionService; 
@property (nonatomic,readonly) id<ISInAppService> inAppService; 
@property (nonatomic,readonly) id<ISUIService> uiService; 
+(id)genericSharedProxy;
-(id<ISDownloadService>)downloadService;
-(id)initWithStoreClient:(id)arg1 ;
-(id<ISAccountService>)accountService;
-(id<ISServiceRemoteObject>)exportedObject;
-(void)accountServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(ISStoreClient *)storeClient;
-(void)transactionServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(id<ISUIService>)uiService;
-(void)setStoreClient:(ISStoreClient *)arg1 ;
-(id<ISTransactionService>)transactionService;
-(void)assetServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(void)downloadServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(void)uiServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(Protocol *)exportedProtocol;
-(id)connectionWithServiceName:(id)arg1 protocol:(id)arg2 isMachService:(char)arg3 ;
-(id)objectProxyForServiceName:(id)arg1 protocol:(id)arg2 interfaceClassName:(id)arg3 isMachService:(char)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)accountServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 withServiceName:(id)arg2 protocol:(id)arg3 isMachService:(char)arg4 interfaceClassName:(id)arg5 ;
-(id)downloadServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)assetServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)transactionServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)inAppServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)uiServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id<ISAssetService>)assetService;
-(id<ISInAppService>)inAppService;
-(void)inAppServiceSynchronousBlock:(/*^block*/id)arg1 ;
@end

