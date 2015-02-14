/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AppKit/NSOutlineView.h>

@class NSColor;

@interface ILMediaBrowserOutlineView : NSOutlineView {

	NSColor* _ILMBCellHighlightColor;
	NSColor* _ILMBCellTriangleColor;
	char _isInRestore;
	char _isInReload;

}
-(void)setIsInReload:(char)arg1 ;
-(id)_validateIndexes:(id)arg1 ;
-(void)setCustomHighlightColor:(id)arg1 ;
-(void)setCustomTriangleColor:(id)arg1 ;
-(id)expandedState;
-(char)restoreExpandedStateWithArray:(id)arg1 ;
-(char)isInRestore;
-(char)isInReload;
-(char)restoreSelectedItemWithIdentifier:(id)arg1 ;
-(void)selectNone:(id)arg1 ;
-(long long)clickedIndex;
-(void)dealloc;
-(void)reloadData;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)selectRowIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)copy:(id)arg1 ;
-(id)_highlightColorForCell:(id)arg1 ;
-(void)_highlightOutlineCell:(id)arg1 highlight:(char)arg2 withFrame:(CGRect)arg3 inView:(id)arg4 ;
-(char)_shouldAnimateExpandCollapse;
-(void)_drawOutlineCell:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(char)_shouldUseSecondaryHighlightColor;
@end

