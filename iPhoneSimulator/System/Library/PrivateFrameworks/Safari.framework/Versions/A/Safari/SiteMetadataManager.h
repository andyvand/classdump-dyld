/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSMutableDictionary;

@interface SiteMetadataManager : NSObject {

	NSMutableDictionary* _hostsToMutableTokenSets;
	NSMutableDictionary* _tokensToResponseHandlers;
	NSMutableDictionary* _responseHandlersToDelayTimers;
	NSMutableDictionary* _tokensToRequests;
	NSMutableDictionary* _tokensToPriorities;
	NSMutableDictionary* _requestsToOperations;
	char _applicationDidTerminateCleanly;

}

@property (assign,nonatomic) char applicationDidTerminateCleanly;              //@synthesize applicationDidTerminateCleanly=_applicationDidTerminateCleanly - In the implementation block
+(id)sharedManager;
-(void)setApplicationDidTerminateCleanly:(char)arg1 ;
-(void)performDelayedLaunchOperations;
-(void)_didRemoveAllIcons:(id)arg1 ;
-(void)cancelRequestsWithTokens:(id)arg1 ;
-(id)_defaultTouchIconForRequest:(id)arg1 ;
-(id)registerRequest:(id)arg1 priority:(int)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)cancelRequestWithToken:(id)arg1 ;
-(void)setPriority:(int)arg1 ofRequestsWithTokens:(id)arg2 ;
-(id)_queue;
-(id)_initManager;
-(void)_iconDataDidChange:(id)arg1 ;
-(void)_snapshotLoaded:(id)arg1 ;
-(char)_performSynchronousRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_registerRequest:(id)arg1 priority:(int)arg2 token:(id)arg3 ;
-(void)_invalidateDelayTimerForResponseHandler:(/*^block*/id)arg1 ;
-(void)_reprioritizeOperationForRequest:(id)arg1 ;
-(void)setPriority:(int)arg1 ofRequestWithToken:(id)arg2 ;
-(id)_requestsAndTokenSetsOfType:(int)arg1 matchingHost:(id)arg2 ;
-(char)_shouldScheduleNetworkFetchForRequest:(id)arg1 ;
-(char)_performSynchronousTouchIconRequest:(id)arg1 responseHandlers:(id)arg2 ;
-(char)_performSynchronousSnapshotRequest:(id)arg1 responseHandlers:(id)arg2 ;
-(char)_performSynchronousTouchIconRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(char)_performSynchronousSnapshotRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)_createOperationForRequest:(id)arg1 priority:(int)arg2 ;
-(id)_tokensMatchingHost:(id)arg1 ;
-(void)_performSynchronousTouchIconUpdatesForHost:(id)arg1 ;
-(void)_reregisterRequestsOfType:(int)arg1 forHost:(id)arg2 ;
-(void)_invalidateDelayTimersForResponseHandlers:(id)arg1 ;
-(CGSize)_minimumTouchIconSizeForRequest:(id)arg1 ;
-(char)_tryToPerformDelayedGeneratedTouchIconUpdatesForURL:(id)arg1 touchIcon:(id)arg2 extractedBackgroundColor:(id)arg3 responseHandlers:(id)arg4 ;
-(void)_scheduleDelayedResponse:(id)arg1 forResponseHandlers:(id)arg2 ;
-(id)_requestsAndResponseHandlersOfType:(int)arg1 matchingHost:(id)arg2 ;
-(void)_performSynchronousSnapshotUpdatesForURLString:(id)arg1 ;
-(char)applicationDidTerminateCleanly;
-(id)init;
@end
