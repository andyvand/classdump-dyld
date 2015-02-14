/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSBrowserScrollView, NSClipView, _NSBrowserColumnScrollHelper, NSMatrix, NSEvent, NSMutableArray, NSString, _NSBrowserDropDestContext, _NSBrowserDragSourceContext, _NSTypeSelectData, NSColor, NSImage, NSMapTable;

@interface _NSBrowserAuxiliary : NSObject {

	_NSBrowserScrollView* _scrollViewForColumns;
	NSClipView* _clipViewForTitles;
	_NSBrowserColumnScrollHelper* _scrollToPointHelper;
	long long _scrollNotificationDisableCount;
	long long _columnAnimationDisabledCount;
	NSMatrix* _handlingViewSingleActionForView;
	NSEvent* _eventBeforeHandlingSingleActionForView;
	double _preferedColumnWidthToArchive;
	NSMutableArray* _visitedColumnContentWidths;
	long long _columnResizingNotificationDisabledCount;
	unsigned long long _columnResizingType;
	NSString* _columnsAutosaveName;
	struct {
		unsigned delegateShouldSizeColumnToWidth : 1;
		unsigned delegateSizeToFitWidtOfColumn : 1;
		unsigned shouldAnimateColumnScrolling : 1;
		unsigned tilingDisabled : 1;
		unsigned setPathOptimizationOn : 1;
		unsigned readingSavedColumns : 1;
		unsigned recomputeExistingColumnPositions : 1;
		unsigned waitingToSendDoubleActionAtEndOfScroll : 1;
		unsigned waitingToSendSingleActionAtEndOfScroll : 1;
		unsigned waitingToSendConfigChangeNotificationAtEndOfScroll : 1;
		unsigned continuousResizeNotifications : 1;
		unsigned sendDoubleAction : 1;
		unsigned forceSynchronizedScrollingAnimation : 1;
		unsigned useCustomBorderType : 1;
		unsigned customBorderType : 3;
		unsigned addingNewColumn : 1;
		unsigned userColumnResizingAutoresizesWindow : 1;
		unsigned delegateProvidesItems : 1;
		unsigned isAutoExpandingItems : 1;
		unsigned delegateProvidesLeafViewController : 1;
		unsigned delegateProvidesHeaderViewController : 1;
		unsigned delegateDidChangeLastColumn : 1;
		unsigned delegateRootItemForBrowser : 1;
		unsigned forwardTypeSelectionToNextColumn : 1;
		unsigned reloadingColumnZero : 1;
		unsigned allowsDelegateSizingForUserResize : 1;
		unsigned reserved : 4;
	}  _brflags2;
	NSMutableArray* _unusedColumns;
	unsigned long long _draggingSourceOperationMaskForLocal;
	unsigned long long _draggingSourceOperationMaskForNonLocal;
	_NSBrowserDropDestContext* _dropContext;
	_NSBrowserDragSourceContext* _dragSourceContext;
	_NSTypeSelectData* _typeSelectData;
	NSColor* _backgroundColor;
	long long _clickedColumn;
	long long _clickedRow;
	NSMutableArray* _autoExpandOriginalSelection;
	NSMutableArray* _autoExpandingLastSelectedItems;
	id _autoExpandDraggingSource;
	NSMutableArray* _columnControllers;
	NSImage* _emptyVerticalSrollerImageCache;
	void* _reserved;
	NSMapTable* _leafItemViewControllerByItem;
	double _rowHeight;
	unsigned long long _disableUpdatesToken;

}
@end

