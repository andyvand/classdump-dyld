/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <iLifeMediaBrowser/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSLock, NSString, NSMutableSet;

@interface ILMediaBrowserPathWatcher : NSObject <NSFilePresenter> {

	NSMutableDictionary* watchedNodes;
	NSMutableDictionary* watchedQueryNodes;
	NSMutableDictionary* gatheredNotifications;
	NSMutableDictionary* watchedUnmountedNodes;
	NSMutableDictionary* watchedForCreationNodes;
	NSMutableDictionary* watchedMasterList;
	MDQueryRef watchedForCreationQuery;
	char watchedForCreationQueryNeedsUpdate;
	NSMutableArray* spotlightToDoQueue;
	NSMutableArray* watchedQueryToDoQueue;
	NSLock* _watchedQueryToDoLock;
	char _terminating;
	NSMutableDictionary* spotlightQueriesByPath;
	char alwaysNotify;
	long long startingFDCount;
	long long usedFDCount;
	FSEventStreamRef watcherStreamRef;
	DASessionRef diskArbSession;
	dispatch_queue_sRef dispatch_queue_fsevents;
	dispatch_queue_sRef dispatch_queue_spotlight;
	dispatch_queue_sRef dispatch_queue_diskArb;
	unsigned long long _latestFSEventId;
	NSOperationQueue* _presentedItemOperationQueue;
	NSURL* _presentedItemURL;
	NSString* _originaliAppsPlistPath;
	NSMutableSet* _outstandingVolumeUnmountPaths;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(id)sharedPathWatcher;
-(void)iLMBGCDSetup;
-(void)fileSystemMounted:(id)arg1 ;
-(void)fileSystemUnmounted:(id)arg1 ;
-(void)cancelSpotlightRoutine;
-(void)fseventsCallback:(FSEventStreamRef)arg1 callbackInfo:(void*)arg2 numEvents:(int)arg3 eventPaths:(CFArrayRef)arg4 eventMasks:(const unsigned*)arg5 eventIDs:(const unsigned long long*)arg6 ;
-(void)addToMasterList:(id)arg1 observer:(id)arg2 ;
-(void)watchPathInternal:(id)arg1 observer:(id)arg2 ;
-(char)isSavedQuery:(id)arg1 ;
-(void)addSpotlightQueryPath:(id)arg1 ;
-(void)removeSavedQuery:(id)arg1 observer:(id)arg2 ;
-(char)watchPathIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)addObserver:(id)arg1 forPath:(id)arg2 ;
-(void)watchPath:(id)arg1 observer:(id)arg2 forEvents:(unsigned long long)arg3 ;
-(void)watchForCreationPath:(id)arg1 observer:(id)arg2 ;
-(void)watchQuery:(id)arg1 observer:(id)arg2 queryScope:(id)arg3 queryRunMode:(int)arg4 ;
-(char)watchedQueryIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)addWatchedQueryObserver:(id)arg1 forQuery:(id)arg2 ;
-(void)createWatchedQueryNode:(id)arg1 observer:(id)arg2 queryScope:(id)arg3 queryRunMode:(int)arg4 ;
-(void)scheduleSpotlightRoutine;
-(void)removeFromMasterList:(id)arg1 observer:(id)arg2 ;
-(void)removePathInternal:(id)arg1 observer:(id)arg2 ;
-(FSEventStreamRef)watcherStreamRef;
-(void)stopFSEventStream;
-(char)startFSEventStream:(id)arg1 ;
-(void)removeObserver:(id)arg1 node:(id)arg2 path:(id)arg3 ;
-(void)removeWatchedQueryObserver:(id)arg1 node:(id)arg2 query:(id)arg3 ;
-(void)removeNodeIfEmpty:(id)arg1 ;
-(void)removeAllUnmountedPaths:(id)arg1 ;
-(void)removeAllPaths:(id)arg1 ;
-(void)removeAllSavedQueries;
-(void)notifyObserverThreaded:(id)arg1 ;
-(id)watchTarget:(id)arg1 ;
-(id)fsEventWatchedPaths;
-(void)addObserver:(id)arg1 forPath:(id)arg2 fd:(long long)arg3 forFilePath:(id)arg4 ;
-(void)sendNotifications;
-(void)postNotification:(unsigned long long)arg1 forPath:(id)arg2 ;
-(void)notifyObserversForNode:(id)arg1 flags:(long long)arg2 changedPath:(id)arg3 ;
-(void)removeWatchedQueryNodeIfEmpty:(id)arg1 query:(id)arg2 ;
-(void)watchedQueryChanged:(id)arg1 ;
-(void)notifyWatchedQueryChanged:(id)arg1 ;
-(void)setWatchedForCreationQuery:(MDQueryRef)arg1 ;
-(void)spotlightWatchedForCreationPathChanged:(id)arg1 ;
-(void)cleanupFromTerminate;
-(id)originaliAppsPlistPath;
-(void)watchPath:(id)arg1 observer:(id)arg2 ;
-(void)watchQuery:(id)arg1 observer:(id)arg2 ;
-(void)removePath:(id)arg1 observer:(id)arg2 ;
-(void)removeQuery:(id)arg1 observer:(id)arg2 ;
-(void)removeAllPaths;
-(void)refreshPath:(id)arg1 observer:(id)arg2 ;
-(void)refreshAllPaths:(id)arg1 ;
-(void)addObserver:(id)arg1 forPath:(id)arg2 fd:(long long)arg3 ;
-(void)gatherNotification:(unsigned long long)arg1 forPath:(id)arg2 ;
-(id)watchedFiles:(id)arg1 ;
-(void)removeAllWatchedQueries:(id)arg1 ;
-(void)executeWatchedQuery:(id)arg1 ;
-(void)watchPathForMount:(id)arg1 observer:(id)arg2 ;
-(char)watchUnmountedPathIsUnique:(id)arg1 observer:(id)arg2 ;
-(char)watchForCreationPathIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)executeWatchForCreationQuery;
-(void)executeSavedQuery:(id)arg1 ;
-(void)spotlightWatchedPathChanged:(id)arg1 ;
-(char)isCannedSearch:(id)arg1 ;
-(void)refreshSavedQuery:(id)arg1 ;
-(id)queryPath:(MDQueryRef)arg1 ;
-(void)spotlightQueryPeriodicRoutine;
-(char)isThereSpotlightWorkToDo;
-(void)setWatcherStreamRef:(FSEventStreamRef)arg1 ;
-(void)_delayAndStartFSEventStream;
-(void)_handleDiskUnmount:(DADiskRef)arg1 ;
-(void)_handleDiskArbitrationIdle;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)presentedItemDidChange;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)_init;
@end

