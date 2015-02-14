/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSTableView.h>

@class NSMutableDictionary;

@interface ABPeoplePickerTableView : NSTableView {

	int _subrowSelectionBehavior;
	NSMutableDictionary* _rowToSelectedSubrowIndexesMap;

}

@property (assign) id<ABPeoplePickerTableViewDelegate> delegate; 
@property (assign) id<ABPeoplePickerTableViewDataSource> dataSource; 
@property (assign) int subrowSelectionBehavior; 
-(void)selectSubrow:(long long)arg1 ofRow:(long long)arg2 byExtendingSelection:(char)arg3 ;
-(id)selectedSubrowIndexesForRow:(long long)arg1 ;
-(void)deselectSubrow:(long long)arg1 ofRow:(long long)arg2 ;
-(char)isSubrowSelected:(long long)arg1 ofRow:(long long)arg2 ;
-(void)setSubrowSelectionBehavior:(int)arg1 ;
-(int)subrowSelectionBehavior;
-(long long)propertyColumnIndex;
-(long long)subRowIndexAtPoint:(CGPoint)arg1 ;
-(id)_selectedSubrowsOfRow:(long long)arg1 ;
-(void)dealloc;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)selectRowIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(char)canDragRowsWithIndexes:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)awakeFromNib;
-(void)deselectAll:(id)arg1 ;
-(void)highlightSelectionInClipRect:(CGRect)arg1 ;
-(id)_accessibilityTableRow:(long long)arg1 ;
@end

