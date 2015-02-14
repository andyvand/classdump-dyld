/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@class NSMenu, NSMenuItem, FI_TViewOptionsSettingsController, FI_TNodeViewSettings, NSString;

@interface FI_TArrangeByMenuController : NSObject {

	NSMenu* _arrangeByMenu;
	NSMenu* _sortByMenu;
	NSMenuItem* _selectedGroupMenuItem;
	NSMenuItem* _selectedSortMenuItem;
	long long _selectedGroupByTag;
	long long _selectedSortByTag;
	TNSRef<NSString *> _groupBy;
	TNSRef<NSString *> _sortBy;
	FI_TViewOptionsSettingsController* _viewOptionsSettingsController;
	FI_TNodeViewSettings* _viewSettings;
	TNSRef<NSArray *> _topLevelObjects;

}

@property (nonatomic,retain,readonly) NSMenu * arrangeByMenu;                                                //@synthesize arrangeByMenu=_arrangeByMenu - In the implementation block
@property (nonatomic,retain,readonly) NSMenu * sortByMenu;                                                   //@synthesize sortByMenu=_sortByMenu - In the implementation block
@property (assign,nonatomic) FI_TViewOptionsSettingsController * viewOptionsSettingsController;              //@synthesize viewOptionsSettingsController=_viewOptionsSettingsController - In the implementation block
@property (nonatomic,retain) FI_TNodeViewSettings * viewSettings;                                            //@synthesize viewSettings=_viewSettings - In the implementation block
@property (nonatomic,readonly) BOOL showToolbarIcon; 
@property (nonatomic,readonly) BOOL showApplicationCategory; 
@property (nonatomic,retain) NSString * groupBy; 
@property (nonatomic,retain) NSString * sortBy; 
@property (assign,nonatomic) long long selectedGroupByTag;                                                   //@synthesize selectedGroupByTag=_selectedGroupByTag - In the implementation block
@property (assign,nonatomic) long long selectedSortByTag;                                                    //@synthesize selectedSortByTag=_selectedSortByTag - In the implementation block
-(void)cmdArrangeByName:(id)arg1 ;
-(void)cmdArrangeByDateAdded:(id)arg1 ;
-(void)cmdArrangeByKind:(id)arg1 ;
-(void)cmdArrangeByLabel:(id)arg1 ;
-(void)aboutToTearDown;
-(FI_TNodeViewSettings *)viewSettings;
-(NSString *)groupBy;
-(NSString *)sortBy;
-(void)cmdSortByName:(id)arg1 ;
-(void)setViewOptionsSettingsController:(FI_TViewOptionsSettingsController *)arg1 ;
-(void)setSortBy:(NSString *)arg1 ;
-(FI_TViewOptionsSettingsController *)viewOptionsSettingsController;
-(void)setGroupBy:(NSString *)arg1 ;
-(void)setViewSettings:(FI_TNodeViewSettings *)arg1 ;
-(unsigned long long)menuTagForGroupBy:(id)arg1 ;
-(void)setSelectedGroupByTag:(long long)arg1 ;
-(NSMenu *)arrangeByMenu;
-(unsigned long long)menuTagForSortBy:(id)arg1 ;
-(void)setSelectedSortByTag:(long long)arg1 ;
-(NSMenu *)sortByMenu;
-(void)setGroupBy:(id)arg1 menuItem:(id)arg2 ;
-(void)setSortBy:(id)arg1 menuItem:(id)arg2 ;
-(id)initWithViewSettings:(id)arg1 ;
-(BOOL)showApplicationCategory;
-(BOOL)showToolbarIcon;
-(void)cmdArrangeByApplication:(id)arg1 ;
-(void)cmdArrangeByFinderTags:(id)arg1 ;
-(void)cmdArrangeByApplicationCategory:(id)arg1 ;
-(void)cmdArrangeByDateLastOpened:(id)arg1 ;
-(void)cmdArrangeByDateModified:(id)arg1 ;
-(void)cmdArrangeByDateCreated:(id)arg1 ;
-(void)cmdArrangeBySize:(id)arg1 ;
-(void)cmdArrangeByNone:(id)arg1 ;
-(void)cmdSortByNone:(id)arg1 ;
-(void)cmdSortBySnapToGrid:(id)arg1 ;
-(void)cmdSortByKind:(id)arg1 ;
-(void)cmdSortByDateLastOpened:(id)arg1 ;
-(void)cmdSortByDateAdded:(id)arg1 ;
-(void)cmdSortByDateModified:(id)arg1 ;
-(void)cmdSortByDateCreated:(id)arg1 ;
-(void)cmdSortBySize:(id)arg1 ;
-(void)cmdSortByLabel:(id)arg1 ;
-(void)removeCommandKeyEquivalents;
-(long long)selectedGroupByTag;
-(long long)selectedSortByTag;
-(void)finalize;
-(void)dealloc;
@end

