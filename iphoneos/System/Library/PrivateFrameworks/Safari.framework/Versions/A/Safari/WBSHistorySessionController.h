/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray, WBSHistorySessionIntervalCache;

@interface WBSHistorySessionController : NSObject {

	NSObject*<OS_dispatch_queue> _sessionCacheAccessQueue;
	NSMutableDictionary* _itemsBySession;
	NSArray* _orderedSessions;
	WBSHistorySessionIntervalCache* _intervalCache;

}
+(id)sharedSessionController;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)orderedSessions;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSessions;
-(unsigned long long)numberOfItemsVisitedInSession:(id)arg1 ;
-(id)sessionForItem:(id)arg1 ;
-(void)_historyItemsWereAdded:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)_loadSessionCache;
-(char)_getKey:(id*)arg1 forDate:(double)arg2 ;
-(id)_orderedSessionKeys;
-(void)_insertItem:(id)arg1 withSessionKey:(id)arg2 ;
-(void)_addItemToSessionCache:(id)arg1 ;
-(void)_dispatchHistorySessionsDidChangeNotification;
-(void)_removeItemFromSessionCache:(id)arg1 ;
-(void)_clearSessionCache;
-(id)itemsLastVisitedInSession:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

