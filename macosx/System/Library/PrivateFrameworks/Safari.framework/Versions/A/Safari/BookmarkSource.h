/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/BookmarkSource.h>

@protocol BookmarkSource
@required
-(id)contentItemsToInitiallyExpand;
-(TabPlacementHint*)tabPlacementHintForMenu:(id)arg1;
-(id)imageForContentItem:(id)arg1;
-(char)canCopyContents;
-(id)child:(unsigned)arg1 ofContentItem:(id)arg2;
-(void)didCollapseContentItem:(id)arg1;
-(void)didExpandContentItem:(id)arg1;
-(char)contentItemCanHaveChildren:(id)arg1;
-(id)contentItemsToExpandOnReload;
-(unsigned)numberOfChildrenOfContentItem:(id)arg1;
-(id)bookmarkFromContentItem:(id)arg1;
-(void)goToContentItem:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2;
-(void)goToContentItemInNewWindow:(id)arg1;
-(void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2;
-(id)titleStringForContentItem:(id)arg1;
-(id)bookmarkSourceMenuTitle;
-(id)bookmarkSourceImage;
-(id)addressStringForContentItem:(id)arg1;
-(char)canDeleteContents;
-(char)contentItemCanBeSearchResult:(id)arg1;
-(id)parentOfContentItem:(id)arg1;
-(char)deleteContentItems:(id)arg1 withParentWindow:(id)arg2 undoManager:(id)arg3;
-(char)canGoToContentItem:(id)arg1;
-(void)goToChildrenOfContentItemInTabs:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2;
-(id)bookmarksFromContentItems:(id)arg1;
-(void)addBookmarkSourceMenu:(id)arg1 withTabPlacementHint:(const TabPlacementHint*)arg2;
-(void)removeBookmarkSourceMenu:(id)arg1;
-(void)refreshContents;

@end

#import <Safari/NSMenuDelegate.h>

@class NSMutableSet, NSMutableDictionary, NSString;

@interface BookmarkSource : NSObject <BookmarkSource, NSMenuDelegate> {

	NSMutableSet* _updatedBookmarkSourceMenus;
	NSMutableDictionary* _tabPlacementHintsForBookmarkSourceMenus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentItemsToInitiallyExpand;
-(char)menuNeedsRealUpdate:(id)arg1 ;
-(TabPlacementHint*)tabPlacementHintForMenu:(id)arg1 ;
-(id)imageForContentItem:(id)arg1 ;
-(void)setMenu:(id)arg1 needsRealUpdate:(char)arg2 ;
-(char)canCopyContents;
-(id)child:(unsigned)arg1 ofContentItem:(id)arg2 ;
-(void)didCollapseContentItem:(id)arg1 ;
-(void)didExpandContentItem:(id)arg1 ;
-(char)contentItemCanHaveChildren:(id)arg1 ;
-(id)contentItemsToExpandOnReload;
-(unsigned)numberOfChildrenOfContentItem:(id)arg1 ;
-(id)bookmarkFromContentItem:(id)arg1 ;
-(void)goToContentItem:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 ;
-(void)goToContentItemInNewWindow:(id)arg1 ;
-(void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 ;
-(id)titleStringForContentItem:(id)arg1 ;
-(id)bookmarkSourceMenuTitle;
-(id)bookmarkSourceImage;
-(void)setAllMenusNeedRealUpdate;
-(id)addressStringForContentItem:(id)arg1 ;
-(char)canDeleteContents;
-(char)contentItemCanBeSearchResult:(id)arg1 ;
-(id)parentOfContentItem:(id)arg1 ;
-(char)deleteContentItems:(id)arg1 withParentWindow:(id)arg2 undoManager:(id)arg3 ;
-(char)canGoToContentItem:(id)arg1 ;
-(void)goToChildrenOfContentItemInTabs:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 ;
-(id)bookmarksFromContentItems:(id)arg1 ;
-(void)addBookmarkSourceMenu:(id)arg1 withTabPlacementHint:(const TabPlacementHint*)arg2 ;
-(void)removeBookmarkSourceMenu:(id)arg1 ;
-(id)bookmarksFromHistoryItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id*)arg3 action:(SEL*)arg4 ;
-(void)refreshContents;
@end

