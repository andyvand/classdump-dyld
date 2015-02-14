/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCTGRLIndex, SCTGRLTree, SCTGRL, NSOutlineView, NSTextField;

@interface SCTGRLInspectorController : NSObject {

	SCTGRLIndex* mGRLIndex;
	SCTGRLTree* mGRLTree;
	SCTGRL* mGRLToBeShown;
	NSOutlineView* mOutlineView;
	NSTextField* mGRLTextView;

}
-(void)doShowResource:(id)arg1 ;
-(id)findParentOfWindowGRL:(id)arg1 ;
-(id)initWithNibName:(id)arg1 andGRLIndex:(id)arg2 ;
-(void)dealloc;
-(char)isVisible;
-(void)setVisible:(char)arg1 ;
-(void)awakeFromNib;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(int)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4 ;
@end

