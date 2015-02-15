/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSOutlineView, NSTreeController, AMBundleAction;

@interface AMBindingsViewController : NSViewController {

	NSOutlineView* _outlineView;
	NSTreeController* bindingsController;
	AMBundleAction* _action;

}
-(void)setAction:(id)arg1 ;
-(id)action;
-(void)awakeFromNib;
-(id)outlineView;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
@end
