/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOrderedSet;

@interface SOBlockListController : NSObject {

	NSOrderedSet* _soBlockItemList;
	id _cmfBlockListUpdatedObserver;
	id _abDatabaseChangedExternallyObserver;

}

@property (retain) NSOrderedSet * soBlockItemList;                      //@synthesize soBlockItemList=_soBlockItemList - In the implementation block
@property (retain) id cmfBlockListUpdatedObserver;                      //@synthesize cmfBlockListUpdatedObserver=_cmfBlockListUpdatedObserver - In the implementation block
@property (retain) id abDatabaseChangedExternallyObserver;              //@synthesize abDatabaseChangedExternallyObserver=_abDatabaseChangedExternallyObserver - In the implementation block
+(void*)_createCMFItemRefWithUnsanitizedAddress:(id)arg1 ;
+(id)sharedBlockList;
-(void)setSoBlockItemList:(NSOrderedSet *)arg1 ;
-(void)setCmfBlockListUpdatedObserver:(id)arg1 ;
-(id)cmfBlockListUpdatedObserver;
-(void)removeABNotifications;
-(void)_buildBlockList;
-(id)abDatabaseChangedExternallyObserver;
-(void)setAbDatabaseChangedExternallyObserver:(id)arg1 ;
-(char)_blockCMFItemRef:(void*)arg1 ;
-(void)_unblockCMFItem:(void*)arg1 ;
-(id)_addressForCMItemRef:(void*)arg1 ;
-(id)blockListItems;
-(void)listenToABNotifications;
-(char)itemIsBlocked:(id)arg1 ;
-(char)addressIsBlocked:(id)arg1 ;
-(id)blockPersonAlert;
-(char)blockItem:(id)arg1 ;
-(char)blockAddress:(id)arg1 ;
-(void)unblockItem:(id)arg1 ;
-(void)unblockAddress:(id)arg1 ;
-(NSOrderedSet *)soBlockItemList;
-(id)init;
-(void)dealloc;
@end

