/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSNavFileListDelegate.h>
#import <AppKit/NSIconViewDelegate.h>

@class NSIconView, NSNavNode, NSArray, NSString;

@interface NSNavIconViewDelegate : NSNavFileListDelegate <NSIconViewDelegate> {

	NSIconView* _iconView;
	NSNavNode* _currentDirectoryNode;
	NSArray* _previouslyHighlightedNodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)view;
-(id)currentTypeSelectSearchString;
-(id)iconView;
-(void)configureForActiveState;
-(void)configureForInactiveState;
-(void)setCurrentBrowsingNodePath:(id)arg1 ;
-(void)reloadChildrenForNode:(id)arg1 ;
-(id)selectedNodesIncludingDirectories;
-(void)loadAndRestoreCurrentBrowsingNodePath:(id)arg1 selectedNodes:(id)arg2 ;
-(id)currentDirectoryNode;
-(void)setCurrentDirectoryNode:(id)arg1 ;
-(id)_selectedNodesWithEntireSelection:(char)arg1 ;
-(id)selectedNodes;
-(char)lightweightHandleChildChanged:(id)arg1 parent:(id)arg2 property:(id)arg3 ;
-(void)reloadDisplayState;
-(id)showNode:(id)arg1 inDirectory:(id)arg2 selectIfEnabled:(char)arg3 ;
-(id)visualRootNode;
-(void)configureForCanChooseDirectories:(char)arg1 ;
-(void)configureForAllowsMultipleSelection:(char)arg1 ;
-(void)configureForCanChooseFiles:(char)arg1 ;
-(CGRect)sourceFrameOnScreenForNavNode:(id)arg1 ;
-(void)prepareForReloadChildrenForNode:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)transitionImageForNavNode:(id)arg1 ;
-(void)_setCurrentDirectoryNode:(id)arg1 ;
-(id)_cachedChildrenForNode:(id)arg1 allowInteraction:(char)arg2 ;
-(long long)numberOfItemsInIconView:(id)arg1 ;
-(void)iconView:(id)arg1 loadCell:(id)arg2 forIndex:(long long)arg3 ;
-(id)iconView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(long long)iconView:(id)arg1 nextTypeSelectMatchFromIndex:(long long)arg2 toIndex:(long long)arg3 forString:(id)arg4 ;
-(char)iconView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(char)iconView:(id)arg1 writeIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)_iconViewDoubleAction:(id)arg1 ;
-(void)_iconViewAction:(id)arg1 ;
-(void)_deselectAnySelectedDirectories;
-(void)_sendSelectionChangedNotification;
-(char)_reloadChildNode:(id)arg1 ;
-(char)iconView:(id)arg1 performKeyEquivalent:(id)arg2 ;
-(void)iconView:(id)arg1 didClickOnDisabledCell:(id)arg2 ;
@end
