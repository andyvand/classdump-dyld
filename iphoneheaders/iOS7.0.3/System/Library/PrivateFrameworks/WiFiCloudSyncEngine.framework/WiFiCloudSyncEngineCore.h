/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSUbiquitousKeyValueStore, NSThread;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/ void* callback;
	NSThread* clientThread;
	BOOL iCloudSyncingEnabled;

}

@property (retain) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/ void* callback; 
@property (retain) NSThread * clientThread; 
@property (assign) BOOL iCloudSyncingEnabled; 
-(/*function pointer*/ void*)callback;
-(void)setCallback:(/*function pointer*/ void*)arg1 ;
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)relayCircleStatusCheck:(id)arg1 ;
-(void)setClientThread:(id)arg1 ;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)unSubscribeKVStoreNotfications:(id)arg1 ;
-(BOOL)iCloudSyncingEnabled;
-(id)keyValueStore;
-(id)readCompleteKVStore;
-(id)clientThread;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg1 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)isLastDeviceInCircleAsync;
-(void)setKeyValueStore:(id)arg1 ;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)removeFromKVStore:(id)arg1 ;
-(void)initWithCallback:(/*function pointer*/ void*)arg1 callbackContext:(void*)arg2 ;
-(void)addToKVStore:(id)arg1 ;
-(id)getStoreValueForKey:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)clearKVS;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)asyncCircleStatusCheck;
@end
