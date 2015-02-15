/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSToolbarItem.h>

@class NSArray;

@interface NSToolbarItemGroup : NSToolbarItem {

	id _groupItems;
	SCD_Struct_NS19 _giFlags;
	id _giReserved;

}

@property (copy) NSArray * subitems; 
-(void)dealloc;
-(id)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItemIdentifier:(id)arg1 ;
-(void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2 ;
-(void)validate;
-(id)menuFormRepresentation;
-(id)_menuFormRepresentationForOverflowMenu;
-(void)_itemLayoutChanged;
-(id)_allocDefaultView;
-(void)_forceSetView:(id)arg1 ;
-(void)_collectItemRectsForLabels:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 controlBounds:(CGRect)arg4 ;
-(void)_collectItemRectsForViews:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 controlBounds:(CGRect)arg4 ;
-(void)_autorecalculateMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 ;
-(char)_isCustomItemType;
-(id)_applicableLabelsArrayForDisplayMode:(unsigned long long)arg1 isInPalette:(char)arg2 ;
-(id)_viewsArray;
-(void)_collectItemRectsForLabels:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 ;
-(void)_collectItemRectsForViews:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 ;
-(char)_mouseDownInSurroundingRegionShouldMoveWindow;
-(char)_isEnabledAndHasEnabledSubitem;
-(char)_applicableLabelIsEnabledAtIndex:(long long)arg1 forDisplayMode:(unsigned long long)arg2 isInPalette:(char)arg3 ;
-(char)_viewIsEnabledAtIndex:(long long)arg1 ;
-(id)_itemAtLabelIndex:(long long)arg1 ;
-(id)_itemAtViewIndex:(long long)arg1 ;
-(double)_interviewPadding;
-(double)_interlabelPadding;
-(void)_setItemViewer:(id)arg1 ;
-(id)_buttonAtIndex:(unsigned long long)arg1 ;
-(id)_initialViewToSelectFromDirection:(long long)arg1 ;
-(NSArray *)subitems;
-(CGRect)rectForItem:(id)arg1 inBounds:(CGRect)arg2 controlBounds:(CGRect)arg3 ;
-(id)_selectableToolbarViews;
-(id)_defaultGroupViewIfUsed;
-(void)_sizeFromSubitemsMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 ;
-(void)setSubitems:(NSArray *)arg1 ;
-(CGRect)_segmentedControlRectForItemAtIndex:(long long)arg1 inBounds:(CGRect)arg2 controlBounds:(CGRect)arg3 ;
-(CGRect)_labelOnlyModeRectForItemAtIndex:(long long)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_evenlySpacedRectForItemAtIndex:(long long)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_segmentedControlRectForItemAtIndex:(long long)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)rectForItem:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)invalidateLayout;
@end

