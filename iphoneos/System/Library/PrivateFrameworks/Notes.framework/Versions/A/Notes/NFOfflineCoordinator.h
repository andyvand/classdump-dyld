/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCAccountProxyManager;
@class NSManagedObjectContext, NSMutableSet;

@interface NFOfflineCoordinator : NSObject {

	NSManagedObjectContext* _context;
	NSMutableSet* _accountsWithActions;
	id<MCAccountProxyManager> _accountProxyManager;

}

@property (nonatomic,retain) NSManagedObjectContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSMutableSet * accountsWithActions;                         //@synthesize accountsWithActions=_accountsWithActions - In the implementation block
@property (nonatomic,retain) id<MCAccountProxyManager> accountProxyManager;              //@synthesize accountProxyManager=_accountProxyManager - In the implementation block
-(void)_contextDidSave:(id)arg1 ;
-(void)dealloc;
-(NSManagedObjectContext *)context;
-(void)_contextWillSave:(id)arg1 ;
-(id<MCAccountProxyManager>)accountProxyManager;
-(NSMutableSet *)accountsWithActions;
-(void)_addMovedFolderToOfflineQueue:(id)arg1 originalParent:(id)arg2 ;
-(void)_addUpdatedFolderToOfflineQueue:(id)arg1 ;
-(void)_addInsertedFolderToOfflineQueue:(id)arg1 ;
-(void)_addInsertedNoteToOfflineQueue:(id)arg1 ;
-(void)_addMovedNoteToOfflineQueue:(id)arg1 originalFolder:(id)arg2 ;
-(void)_addUpdatedNoteToOfflineQueue:(id)arg1 ;
-(void)_executeOfflineActions;
-(id)initWithContext:(id)arg1 accountProxyManager:(id)arg2 ;
-(void)setAccountsWithActions:(NSMutableSet *)arg1 ;
-(void)setAccountProxyManager:(id<MCAccountProxyManager>)arg1 ;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
@end

