/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUbiquitousKeyValueStore, NSMutableDictionary, NSDate;

@interface CloudTabKeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _keyValueStoreAccessQueue;
	NSUbiquitousKeyValueStore* _syncedTabsKeyValueStore;
	NSMutableDictionary* _cachedSyncedTabsKeyValueStoreDictionaryRepresentation;
	id _syncedTabsKeyValueStoreChangeObserver;
	NSUbiquitousKeyValueStore* _userRequestsKeyValueStore;
	NSMutableDictionary* _cachedUserRequestsKeyValueStoreDictionaryRepresentation;
	id _userRequestsKeyValueStoreChangeObserver;
	NSDate* _lastKeyValueStoreModDate;
	long long _numberOfInFlightDictionaryRepresentationUpdates;
	/*^block*/id _keyValueStoreChangeNotificationHandler;

}

@property (getter=isUpdatingKeyValueStoreDictionaryRepresentation,nonatomic,readonly) char isUpdatingKeyValueStoreDictionaryRepresentation; 
@property (nonatomic,copy) id keyValueStoreChangeNotificationHandler;                                                                                    //@synthesize keyValueStoreChangeNotificationHandler=_keyValueStoreChangeNotificationHandler - In the implementation block
+(id)sharedCloudTabKeyValueStore;
-(void)_cachedDictionaryRepresentationWasUpdated;
-(void)_updateCachedDictionaryRepresentationFromKeyValueStore:(long long)arg1 ;
-(id)_cachedKeyValueStoreDictionaryForIdentifier:(long long)arg1 ;
-(void)_willModifyKeyValueStore;
-(id)_keyValueStoreForIdentifier:(long long)arg1 ;
-(char)isUpdatingKeyValueStoreDictionaryRepresentation;
-(void)waitForOperationsToComplete;
-(void)keyValueStoreDidChangeExternally:(long long)arg1 ;
-(id)dictionaryRepresentationForKeyValueStore:(long long)arg1 ;
-(void)setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 blockUntilDone:(char)arg4 ;
-(id)dictionaryInKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(void)removeObjectInKeyValueStore:(long long)arg1 forKey:(id)arg2 blockUntilDone:(char)arg3 ;
-(id)keyValueStoreChangeNotificationHandler;
-(void)setKeyValueStoreChangeNotificationHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

