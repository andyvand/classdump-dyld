/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class GFGraph, GFGraphEditorView, GFNode, NSPathControl;

@interface GFGraphPathView : NSView {

	GFGraph* _rootGraph;
	GFGraphEditorView* _graphEditor;
	GFNode* _currentNode;
	NSPathControl* _control;
	void** _unused[4];

}
+(char)_isGraph:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
-(void)setPath:(id)arg1 ;
-(void)_finishInitialization;
-(id)nodes;
-(id)rootGraph;
-(void)_setCurrentNode:(id)arg1 ;
-(void)_graphUpdated:(id)arg1 ;
-(void)setCurrentNode:(id)arg1 ;
-(void)__graphDidChange:(id)arg1 ;
-(id)currentNode;
-(id)graphEditor;
-(void)setRootGraph:(id)arg1 ;
-(void)setGraphEditor:(id)arg1 ;
-(char)_getPathFromGraph:(id)arg1 toNode:(id)arg2 withArray:(id)arg3 ;
-(id)_setPathWithArray:(id)arg1 ;
-(void)__hierarchyControlAction:(id)arg1 ;
@end

