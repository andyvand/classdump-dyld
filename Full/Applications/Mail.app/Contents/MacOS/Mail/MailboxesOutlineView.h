/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <AppKit/NSOutlineView.h>

@interface MailboxesOutlineView : NSOutlineView {

	char _reloading;
	char _allowsSelectAll;
	char _showsUnnecessaryDisclosureTriangles;
	char _draggingIsBeingUpdated;

}

@property (assign,nonatomic) char allowsSelectAll;                                  //@synthesize allowsSelectAll=_allowsSelectAll - In the implementation block
@property (assign,nonatomic) char showsUnnecessaryDisclosureTriangles;              //@synthesize showsUnnecessaryDisclosureTriangles=_showsUnnecessaryDisclosureTriangles - In the implementation block
@property (assign,nonatomic) char draggingIsBeingUpdated;                           //@synthesize draggingIsBeingUpdated=_draggingIsBeingUpdated - In the implementation block
-(void)_mailboxesOutlineViewCommonInit;
-(char)showsUnnecessaryDisclosureTriangles;
-(char)allowsSelectAll;
-(void)_triggerReloadNotification;
-(void)_didReload;
-(void)_willReload;
-(char)draggingIsBeingUpdated;
-(void)setDraggingIsBeingUpdated:(char)arg1 ;
-(void)setAllowsSelectAll:(char)arg1 ;
-(void)setShowsUnnecessaryDisclosureTriangles:(char)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)delegate;
-(id)menu;
-(char)inLiveResize;
-(void)reloadData;
-(char)acceptsFirstResponder;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)noteNumberOfRowsChanged;
-(void)reloadItem:(id)arg1 ;
-(CGRect)frameOfOutlineCellAtRow:(long long)arg1 ;
-(char)shouldCollapseAutoExpandedItemsForDeposited:(char)arg1 ;
@end
