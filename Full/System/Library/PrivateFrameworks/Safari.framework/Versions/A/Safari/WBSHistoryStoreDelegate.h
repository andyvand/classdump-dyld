/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
@required
-(char)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
-(char)historyStoreShouldRemoveItemsWithURLStringsThatAreNotValidURLs:(id)arg1;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;

@end

