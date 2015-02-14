/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSView, GFGraph, GFGraphEditorView, NSBrowser, GFNode;

@interface GFGraphBrowserView : NSView {

	NSView* _insideView;
	GFGraph* _rootGraph;
	GFGraphEditorView* _graphEditor;
	NSBrowser* _browser;
	GFNode* _currentNode;
	char _displayNodes;
	void** _unused[4];

}
+(char)_isGraph:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)isOpaque;
-(void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 ;
-(long long)browser:(id)arg1 numberOfRowsInColumn:(long long)arg2 ;
-(void)keyDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)_finishInitialization;
-(id)rootGraph;
-(char)_getPathFromGraph:(id)arg1 toNode:(id)arg2 withBuffer:(id*)arg3 ;
-(void)_setCurrentNode:(id)arg1 ;
-(id)_setPathWithBuffer:(id*)arg1 ;
-(char)_displayNodes;
-(id)_nodeFromGraph:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_selectedNodeAtColumn:(unsigned long long)arg1 ;
-(unsigned long long)_indexForNode:(id)arg1 inGraph:(id)arg2 ;
-(void)_graphUpdated:(id)arg1 ;
-(unsigned long long)_nodesCountInGraph:(id)arg1 ;
-(void)_selectItem:(id)arg1 ;
-(void)_setDisplayNodes:(char)arg1 ;
-(void)setCurrentNode:(id)arg1 ;
-(void)__graphDidChange:(id)arg1 ;
-(id)currentNode;
-(id)graphEditor;
-(void)setRootGraph:(id)arg1 ;
-(void)setGraphEditor:(id)arg1 ;
@end

