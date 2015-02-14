/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSHistorySQLiteStore, NSSet, NSMutableSet, NSMapTable;

@interface WBSHistoryDeletionPlan : NSObject {

	WBSHistorySQLiteStore* _store;
	NSSet* _excludedItems;
	NSSet* _excludedVisits;
	NSMutableSet* _discoveredItemsToDelete;
	NSSet* _triggeringItems;
	NSSet* _triggeringVisits;
	NSSet* _discoveredVisitsToDelete;
	NSMapTable* _updatedLastVisitsByItem;

}

@property (nonatomic,readonly) NSSet * triggeringItems;                                                     //@synthesize triggeringItems=_triggeringItems - In the implementation block
@property (nonatomic,readonly) NSSet * triggeringVisits;                                                    //@synthesize triggeringVisits=_triggeringVisits - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredItemsToDelete;                                             //@synthesize discoveredItemsToDelete=_discoveredItemsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredVisitsToDelete;                                            //@synthesize discoveredVisitsToDelete=_discoveredVisitsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * allItemsToDelete; 
@property (nonatomic,readonly) NSSet * allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted; 
@property (nonatomic,readonly) NSMapTable * allVisitsToDeleteByItemExcludingItemsBeingDeleted; 
@property (nonatomic,readonly) NSMapTable * updatedLastVisitsByItem;                                        //@synthesize updatedLastVisitsByItem=_updatedLastVisitsByItem - In the implementation block
-(id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 ;
-(NSSet *)allItemsToDelete;
-(void)execute;
-(NSMapTable *)allVisitsToDeleteByItemExcludingItemsBeingDeleted;
-(NSMapTable *)updatedLastVisitsByItem;
-(void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2 ;
-(id)_visitsForItems:(id)arg1 ;
-(id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 ;
-(id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(/*^block*/id)arg4 ;
-(NSSet *)triggeringItems;
-(NSSet *)triggeringVisits;
-(NSSet *)discoveredVisitsToDelete;
-(id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 ;
-(NSSet *)allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
-(NSSet *)discoveredItemsToDelete;
-(void)prepare;
@end

