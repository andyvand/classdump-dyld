/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ILMediaManager, NSOperationQueue, NSMutableDictionary, NSRecursiveLock;

@interface ILChangeManager : NSObject {

	ILMediaManager* _plugin;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _groupToOperationMap;
	NSRecursiveLock* _stateLock;

}
-(id)initWithPlugin:(id)arg1 ;
-(void)sendChangeNotificationForKey:(id)arg1 fromSource:(id)arg2 ;
-(void)cancelMediaGroupLoadingExcludingMediaGroups:(id)arg1 ;
-(void)addChangeOperation:(id)arg1 ;
-(void)_sendChangeNotification:(id)arg1 ;
-(void)addChangeOperation:(id)arg1 forMediaGroup:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

