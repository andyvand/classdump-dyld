/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSUserInterfaceItemIdentification.h>

@class NSTableView, NSCell, NSString, NSSortDescriptor;

@interface NSTableColumn : NSObject <NSCoding, NSUserInterfaceItemIdentification> {

	id _identifier;
	double _width;
	double _minWidth;
	double _maxWidth;
	NSTableView* _tableView;
	NSCell* _headerCell;
	NSCell* _dataCell;
	struct {
		unsigned oldIsResizable : 1;
		unsigned isEditable : 1;
		unsigned resizedPostingDisableCount : 8;
		unsigned canUseReorderResizeImageCache : 1;
		unsigned userResizingAllowed : 1;
		unsigned autoResizingAllowed : 1;
		unsigned hidden : 1;
		unsigned RESERVED : 18;
	}  _cFlags;
	id _tcAuxiliaryStorage;

}

@property (copy) NSString * identifier; 
@property (assign) NSTableView * tableView; 
@property (assign) double width; 
@property (assign) double minWidth; 
@property (assign) double maxWidth; 
@property (copy) NSString * title; 
@property (retain) id headerCell; 
@property (getter=isEditable) char editable; 
@property (copy) NSSortDescriptor * sortDescriptorPrototype; 
@property (assign) unsigned long long resizingMask; 
@property (copy) NSString * headerToolTip; 
@property (getter=isHidden) char hidden; 
+(void)initialize;
-(id)copyColumn_FI;
-(void)noteNumberOfTableRowsChanged:(id)arg1 ;
-(void)willRemoveFromTableView:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilityParentAttribute;
-(char)accessibilityIsParentAttributeSettable;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(NSTableView *)tableView;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)sizeToFit;
-(id)userInterfaceItemIdentifier;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(id)_bindingAdaptor;
-(char)isEditable;
-(void)_setBindingAdaptor:(id)arg1 ;
-(void)setEditable:(char)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setDataCell:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setResizingMask:(unsigned long long)arg1 ;
-(id)dataCell;
-(id)headerCell;
-(void)_finishedMakingConnections;
-(void)accessibilitySetSizeAttribute:(id)arg1 ;
-(void)setMinWidth:(double)arg1 ;
-(char)isResizable;
-(double)minWidth;
-(double)width;
-(void)setTableView:(NSTableView *)arg1 ;
-(unsigned long long)resizingMask;
-(void)_disableResizedPosting;
-(void)_enableResizedPosting;
-(char)_resizePostingDisabled;
-(void)_old_encodeWithCoder_NSTableColumn:(id)arg1 ;
-(void)setHeaderCell:(id)arg1 ;
-(void)_old_initWithCoder_NSTableColumn:(id)arg1 ;
-(void)_updateDataCellControlView;
-(void)_updateHeaderCellControlView;
-(void)_setReorderResizeImageCache:(id)arg1 ;
-(void)_postColumnDidResizeNotificationWithOldWidth:(long long)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(id)_reorderResizeImageCache;
-(void)_setCanUseReorderResizeImageCache:(char)arg1 ;
-(char)_canUseReorderResizeImageCache;
-(void)setSortDescriptorPrototype:(NSSortDescriptor *)arg1 ;
-(NSSortDescriptor *)sortDescriptorPrototype;
-(id)dataCellForRow:(long long)arg1 ;
-(void)setResizable:(char)arg1 ;
-(void)setHeaderToolTip:(NSString *)arg1 ;
-(NSString *)headerToolTip;
-(id)_accessibilityRowsInRange:(NSRange)arg1 ;
-(char)_canDeselect:(long long)arg1 ;
-(id)accessibilityRowsAttribute;
-(char)accessibilityIsRowsAttributeSettable;
-(id)accessibilityVisibleRowsAttribute;
-(char)accessibilityIsVisibleRowsAttributeSettable;
-(id)accessibilitySelectedAttribute;
-(char)accessibilityIsSelectedAttributeSettable;
-(void)accessibilitySetSelectedAttribute:(id)arg1 ;
-(id)accessibilityHeaderAttribute;
-(char)accessibilityIsHeaderAttributeSettable;
-(id)accessibilityIndexAttribute;
-(char)accessibilityIsIndexAttributeSettable;
@end

