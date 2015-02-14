/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSPointerArray, NSMapTable, NSTableView;

@interface NSTableRowAndCellTracker : NSObject {

	NSPointerArray* _pointerArray;
	NSMapTable* _mapTable;
	long long _deleteCount;
	long long _nextSpecifierComponent;
	long long _deleteForMoveIndex;
	long long _deleteForMoveShift;
	NSTableView* _tableView;

}
-(id)init;
-(void)dealloc;
-(id)initWithTableView:(id)arg1 ;
-(long long)indexForSpecifierComponent:(long long)arg1 ;
-(long long)specifierComponentForIndex:(long long)arg1 registerIfNeeded:(char)arg2 ;
-(void)shiftIndex:(long long)arg1 shiftAmount:(long long)arg2 isDeleteForMove:(char)arg3 ;
-(void)unregisterCellsOfTableColumns:(id)arg1 ;
-(void)unregisterCellsOfRowIndexes:(id)arg1 columnIndexes:(id)arg2 ;
-(void)removeAll;
-(long long)indexForSpecifierComponent:(long long)arg1 inRange:(NSRange)arg2 ;
-(id)_elementSpecifiersForTableColumns:(id)arg1 ;
-(void)insertSpecifierComponent:(long long)arg1 atIndex:(long long)arg2 ;
-(void)removeIndex:(long long)arg1 shiftsResults:(char)arg2 ;
-(void)insertIndex:(long long)arg1 ;
-(void)removeChildrenOfIndex:(long long)arg1 ;
@end

