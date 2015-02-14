/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSIndexSet, NSTableDragInfo, NSMutableDictionary, _NSTypeSelectData, NSEvent, _NSCellTrackingData, NSArray, NSCell, NSString, _NSTableRowHeightStorage, NSViewDynamicToolTipManager;

@interface _NSTableViewReserved : NSObject {

	NSIndexSet* selectionChanging;
	struct {
		unsigned sizingToFitForColumnResize : 1;
		unsigned autoresizing : 1;
		unsigned columnAutoresizingStyle : 3;
		unsigned delegateRespondsTo_heightForRow : 1;
		unsigned dataSourceWriteDraggedRowsMethodVersion : 2;
		unsigned disablePersistTableColumns : 1;
		unsigned sendingTableViewTargetAction : 1;
		unsigned mouseDownShouldTrack : 1;
		unsigned datasourceRespondsTo_ObjectValue : 1;
		unsigned validDataSourceMethods : 1;
		unsigned dataSourceMethodsWarningPrinted : 1;
		unsigned afterLiveResizeFieldEditorShouldDrawBackground : 1;
		unsigned sortDescriptorsContainsPlaceholders : 1;
		unsigned usesStandardAlternatingRowColors : 1;
		unsigned observingFirstResponder : 1;
		unsigned okToEnterTextDidEndEditing : 1;
		unsigned okToCompleteTextDidEndEditing : 1;
		unsigned autoSaveTableColumns : 1;
		unsigned verticalMotionCanBeginDrag : 1;
		unsigned lastDropHoverInCenter : 1;
		unsigned returnNilHighlightColorForCell : 1;
		unsigned subclassIsSafeForLiveResize : 1;
		unsigned hasCachedSubclassIsSafeForLiveResize : 1;
		unsigned deselectsWhenMouseLeaves : 1;
		unsigned delegateRespondsTo_didDragColumn : 1;
		unsigned delegateRespondsTo_didClickColumn : 1;
		unsigned delegateRespondsTo_mouseDownInHeader : 1;
		unsigned leavingScrollbarSpacing : 1;
		unsigned sizingToFitForColumnHiding : 1;
	}  _tvFlags2;
	struct {
		unsigned delayStartEditingCalled : 1;
		unsigned drawingRowBackground : 1;
		unsigned performingHitTest : 1;
		unsigned subclassOverridesDrawBackgroundInRect : 1;
		unsigned subclassOverridesDrawGridInClipRect : 1;
		unsigned subclassOverridesDrawRect : 1;
		unsigned shouldFloatGroupRows : 1;
		unsigned useUncachedRectOfRow : 1;
		unsigned delegateRespondsTo_viewForRow : 1;
		unsigned delegateRespondsTo_viewForTableColumnRow : 1;
		unsigned subscribedToWindowWillOrderOnScreen : 1;
		unsigned supressRowChangedNotifications : 1;
		unsigned drawingEverything : 1;
		unsigned flashingDropFeedbackRow : 1;
		unsigned wantsFirstResponderOnlyOnNonMouseEvents : 1;
		unsigned selectionChangingType : 2;
		unsigned selectionType : 2;
		unsigned delegateRespondsTo_shouldReorderColumn : 1;
		unsigned unarchiving : 1;
		unsigned subclassOverrides_selectMultiIndexVersion : 1;
		unsigned tileNeeded : 1;
		unsigned delegateRespondsTo_isGroupRow : 1;
		unsigned delegateRespondsTo_selectionIndexesForProposedSelection : 1;
		unsigned delegateRespondsTo_dataCellForRow : 1;
		unsigned drawingContextMenuHighlightOnAllSelectedRows : 1;
		unsigned drawingContextMenuHighlight : 1;
		unsigned allowsTypeSelect : 1;
		unsigned editOnSingleClick : 1;
		unsigned delegateRespondsTo_shouldTrackCell : 1;
		unsigned hasRowHeaderView : 1;
	}  tvFlags3;
	id _hiliteColId;
	long long clickedColumn;
	NSTableDragInfo* dragInfo;
	CGRect lastEditingCellFrame;
	CGRect lastFocusRingFrame;
	long long mouseDownEventNumber;
	double columnLayoutMinRequiredVisibleWidth;
	NSMutableDictionary* preLiveColumnResizeWidthsByColumn;
	double preLiveColumnResizeFirstVisibleColumnInset;
	long long preLiveColumnResizeFirstVisibleColumn;
	NSIndexSet* oldSelection;
	unsigned long long draggingSourceOperationMaskForLocal;
	unsigned long long draggingSourceOperationMaskForNonLocal;
	long long newSelectedRow;
	_NSTypeSelectData* typeSelectData;
	long long selectionHighlightStyle;
	long long updateCount;
	long long anchorRow;
	long long focusedColumn;
	NSEvent* lastSelectRowEvent;
	long long draggingDestinationFeedbackStyle;
	_NSCellTrackingData* cellTrackingData;
	NSMutableDictionary* archivedReusableViews;
	NSMutableDictionary* nibExternalObjectsTables;
	NSArray* sortDescriptors;
	NSCell* trackingCell;
	NSString* autoSaveName;
	long long clickedRow;
	_NSTableRowHeightStorage* rowHeightStorageX;
	CGPoint _lastMouseDownLocalPoint;
	struct {
		unsigned calledDrawRow : 1;
		unsigned copyPreparedCell : 1;
		unsigned excludeFloatingGroupRow : 1;
		unsigned subclassOverridesHighlightSelectionInClipRect : 1;
		unsigned subclassOverridesDrawRow : 1;
		unsigned calledBeginUpdatesOnRowData : 1;
		unsigned groupRowStyle : 2;
		unsigned gridStyleMask : 4;
		unsigned accessibilityTracksRowAndCellIndexes : 1;
		unsigned floatsHeaderView : 1;
		unsigned drawingOverhangRect : 1;
		unsigned registeredForDistNote : 1;
		unsigned inDesignMode : 1;
		unsigned updatingRowData : 1;
		unsigned scheduledSwitch : 1;
		unsigned drawingBackgroundImage : 1;
		unsigned observingViewWillScroll : 1;
		unsigned loadingColumnWidths : 1;
		unsigned isStatic : 1;
		unsigned explicitlySetAppearance : 1;
		unsigned suppressSyrahSourceListAttributes : 1;
	}  _tvFlags4;
	long long _rowSizeStyle;
	NSViewDynamicToolTipManager* _dynamicToolTipManager;
	long long _selectionBlendingMode;

}
@end

