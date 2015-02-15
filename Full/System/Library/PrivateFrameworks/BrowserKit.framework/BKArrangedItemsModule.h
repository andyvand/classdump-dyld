/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <BrowserKit/BKItemsModule.h>

@class NSArray;

@interface BKArrangedItemsModule : BKItemsModule {

	id _arrangedItemsObject;
	void* _unusedArrangedItemsModule1;
	void* _unusedArrangedItemsModule2;
	struct {
		unsigned _arrangedItemsObjectExternal : 1;
		unsigned _dependenciesAdded : 1;
		unsigned _unused : 30;
	}  _arrangedItemsModuleFlags;
	void* _reservedArrangedItemsModule1;
	void* _reservedArrangedItemsModule2;
	void* _reservedArrangedItemsModule3;

}

@property (copy) NSArray * sortDescriptors; 
@property (copy) NSArray * itemsFilters; 
@property (readonly) char itemsLoading; 
-(void)setModuleConnector:(id)arg1 ;
-(id)itemsForPreview;
-(void)moveSelectionToPreviousItem;
-(void)moveSelectionToNextItem;
-(char)canMoveSelectionToPreviousItem;
-(char)canMoveSelectionToNextItem;
-(void)setSearchPredicates:(id)arg1 ;
-(void)setItemsKeyPath:(id)arg1 ;
-(char)itemsLoading;
-(id)dropItemPathForItem:(id)arg1 ;
-(void)willLoadConnections;
-(void)didLoadConnections;
-(void)willUnloadConnections;
-(void)didUnloadConnections;
-(id)itemArranger;
-(char)viewControlsSorting;
-(void)setSelectionPathWithSelectedItems:(id)arg1 ;
-(unsigned long long)countOfArrangedItems;
-(id)objectInArrangedItemsAtIndex:(unsigned long long)arg1 ;
-(void)setUpdatesBlocked:(char)arg1 ;
-(char)updatesBlocked;
-(void)setItemsFilters:(NSArray *)arg1 ;
-(NSArray *)itemsFilters;
-(void)_doRemoveDependencies;
-(void)_doAddDependencies;
-(void)setSourceArrangedItemsModule:(id)arg1 ;
-(void)setSelectedItemsInternal:(id)arg1 ;
-(id)selectedItemsInternal;
-(void)viewWasInstalled;
-(void)viewWillBeRemoved;
-(id)contentLayoutDictionary;
-(void)takeContentLayoutFromDictionary:(id)arg1 ;
-(void)setItems:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)items;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setLeafKeyPath:(id)arg1 ;
@end
