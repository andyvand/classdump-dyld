/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSNavFileListDelegate.h>

@class ILMediaBrowserView, NSNavNode;

@interface NSNavMediaBrowserDelegate : NSNavFileListDelegate {

	ILMediaBrowserView* _mediaBrowserView;
	NSNavNode* _mediaBrowserNode;
	NSNavNode* _currentRootNode;

}

@property (retain) ILMediaBrowserView * mediaBrowserView; 
@property (retain) NSNavNode * mediaBrowserNode; 
-(void)dealloc;
-(id)view;
-(void)setCurrentBrowsingNodePath:(id)arg1 ;
-(void)reloadChildrenForNode:(id)arg1 ;
-(id)selectedNodesIncludingDirectories;
-(void)loadAndRestoreCurrentBrowsingNodePath:(id)arg1 selectedNodes:(id)arg2 ;
-(id)currentDirectoryNode;
-(void)setCurrentDirectoryNode:(id)arg1 ;
-(id)selectedNodes;
-(void)reloadDisplayState;
-(id)showNode:(id)arg1 inDirectory:(id)arg2 selectIfEnabled:(char)arg3 ;
-(id)visualRootNode;
-(void)configureForAllowsMultipleSelection:(char)arg1 ;
-(ILMediaBrowserView *)mediaBrowserView;
-(void)setMediaBrowserView:(ILMediaBrowserView *)arg1 ;
-(NSNavNode *)mediaBrowserNode;
-(void)setMediaBrowserNode:(NSNavNode *)arg1 ;
-(id)_selectedNodesIncludingDirectory:(char)arg1 ;
-(char)_canShowFileAtURL:(id)arg1 ;
-(char)mediaBrowserView:(id)arg1 shouldSelectMediaObject:(id)arg2 ;
-(id)mediaBrowserView:(id)arg1 attributedDisplayNameForMediaObject:(id)arg2 ;
-(void)mediaBrowserViewSelectionDidChange:(id)arg1 ;
-(char)mediaBrowserView:(id)arg1 shouldPreviewDoubleClickedItem:(id)arg2 ;
@end

