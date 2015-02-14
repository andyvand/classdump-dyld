/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <ToneKit/NSOutlineViewDataSource.h>
#import <ToneKit/NSOutlineViewDelegate.h>
#import <ToneKit/TKPickerOutlineViewEventHandlingDelegate.h>
#import <ToneKit/TKTonePickerControllerDelegate.h>
#import <ToneKit/TKTonePickerControllerDelegateInternal.h>
#import <ToneKit/TKTonePickerContentViewController.h>

@protocol TKTonePickerContentViewControllerDelegate;
@class NSView, NSResponder, TKPickerOutlineView, TKTonePickerController, NSTimer, NSString;

@interface TKTonePickerOutlineViewController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, TKPickerOutlineViewEventHandlingDelegate, TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerContentViewController> {

	char _updatingSelectionProgrammatically;
	id<TKTonePickerContentViewControllerDelegate> _delegate;
	TKPickerOutlineView* _outlineView;
	TKTonePickerController* _tonePickerController;
	long long _previouslySelectedRow;
	NSTimer* _selectionConsistencyRestorationTimer;

}

@property (setter=_setOutlineView:,nonatomic,retain) TKPickerOutlineView * _outlineView;                                                                                     //@synthesize outlineView=_outlineView - In the implementation block
@property (setter=_setTonePickerController:,nonatomic,retain) TKTonePickerController * _tonePickerController;                                                                //@synthesize tonePickerController=_tonePickerController - In the implementation block
@property (assign,setter=_setUpdatingSelectionProgrammatically:,getter=_isUpdatingSelectionProgrammatically,nonatomic) char _updatingSelectionProgrammatically;              //@synthesize updatingSelectionProgrammatically=_updatingSelectionProgrammatically - In the implementation block
@property (assign,setter=_setPreviouslySelectedRow:,nonatomic) long long _previouslySelectedRow;                                                                             //@synthesize previouslySelectedRow=_previouslySelectedRow - In the implementation block
@property (setter=_setSelectionConsistencyRestorationTimer:,nonatomic,retain) NSTimer * _selectionConsistencyRestorationTimer;                                               //@synthesize selectionConsistencyRestorationTimer=_selectionConsistencyRestorationTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<TKTonePickerContentViewControllerDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSView * tonePickerContentView; 
@property (nonatomic,readonly) NSResponder * tonePickerResponder; 
-(NSResponder *)tonePickerResponder;
-(id)initWithTonePickerController:(id)arg1 ;
-(void)_setTonePickerController:(id)arg1 ;
-(NSView *)tonePickerContentView;
-(TKTonePickerController *)_tonePickerController;
-(void)_didSelectToneWithIdentifier:(id)arg1 ;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2 ;
-(void)tonePickerControllerDidReloadTones:(id)arg1 ;
-(void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(char)arg2 ofTonePickerItem:(id)arg3 ;
-(void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3 ;
-(void)pickerOutlineViewWillBeginHandlingMouseDrag:(id)arg1 ;
-(void)pickerOutlineViewDidFinishHandlingMouseDrag:(id)arg1 ;
-(char)pickerOutlineViewHandleReturnKeyDown:(id)arg1 ;
-(void)_setPreviouslySelectedRow:(long long)arg1 ;
-(void)_setOutlineView:(id)arg1 ;
-(NSTimer *)_selectionConsistencyRestorationTimer;
-(void)_setSelectionConsistencyRestorationTimer:(id)arg1 ;
-(void)_scrollSelectedToneToVisible;
-(void)_selectOutlineViewRow:(long long)arg1 ;
-(void)_restoreSelectionConsistency;
-(char)_isUpdatingSelectionProgrammatically;
-(void)_setUpdatingSelectionProgrammatically:(char)arg1 ;
-(void)_selectOutlineViewRow:(long long)arg1 allowingDelegateCallback:(char)arg2 ;
-(void)_performBlockAffectingSelection:(/*^block*/id)arg1 ;
-(void)_needsSelectionConsistencyRestoration;
-(void)_clearOutlineViewSelection;
-(void)_didUpdateExpandedStatus:(char)arg1 withNotification:(id)arg2 ;
-(long long)_previouslySelectedRow;
-(id)_pickerTableCellForTonePickerItem:(id)arg1 ;
-(void)setDelegate:(id<TKTonePickerContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<TKTonePickerContentViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewItemDidExpand:(id)arg1 ;
-(void)outlineViewItemDidCollapse:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(TKPickerOutlineView *)_outlineView;
-(void)_reloadData;
@end

