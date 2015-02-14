/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMenuItemCell.h>

@class NSMenu, NSArray, NSMenuItem, NSString;

@interface NSPopUpButtonCell : NSMenuItemCell {

	NSMenu* _menu;
	int _selectedIndex;
	struct {
		unsigned pullsDown : 1;
		unsigned preferredEdge : 3;
		unsigned menuIsAttached : 1;
		unsigned usesItemFromMenu : 1;
		unsigned altersStateOfSelectedItem : 1;
		unsigned decoding : 1;
		unsigned arrowPosition : 2;
		unsigned ignoreMenuLayout : 1;
		unsigned drawing : 1;
		unsigned menuShouldBeUniquedAgainstMain : 1;
		unsigned RESERVED : 19;
	}  _pbcFlags;
	id _popupReserved;

}

@property (retain) NSMenu * menu; 
@property (assign) char pullsDown; 
@property (assign) char autoenablesItems; 
@property (assign) unsigned long long preferredEdge; 
@property (assign) char usesItemFromMenu; 
@property (assign) char altersStateOfSelectedItem; 
@property (copy,readonly) NSArray * itemArray; 
@property (readonly) long long numberOfItems; 
@property (readonly) NSMenuItem * lastItem; 
@property (readonly) NSMenuItem * selectedItem; 
@property (readonly) long long indexOfSelectedItem; 
@property (copy,readonly) NSArray * itemTitles; 
@property (copy,readonly) NSString * titleOfSelectedItem; 
@property (assign) unsigned long long arrowPosition; 
+(void)initialize;
+(id)_attachedCell;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(NSArray *)itemArray;
-(NSMenu *)menu;
-(long long)numberOfItems;
-(long long)indexOfItem:(id)arg1 ;
-(id)itemAtIndex:(long long)arg1 ;
-(long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)setMenu:(NSMenu *)arg1 ;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)initTextCell:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)isOpaque;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(long long)interiorBackgroundStyle;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(id)attributedTitle;
-(char)_canBecomeDefaultButtonCell;
-(CGSize)_autolayout_cellSize;
-(char)_needRedrawOnWindowChangedKeyState;
-(CFDictionaryRef)_coreUIBezelDrawOptionsWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(int)_effectiveBackgroundStyleInView:(id)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(unsigned long long)_preferredFocusLocationMask;
-(Class)_classForOverrideCheck;
-(CGRect)drawTitle:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(char)_shouldDrawTextWithDisabledAppearance;
-(char)_shouldTweakRoundingBehaviorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(char)wantsUpdateLayerInView:(id)arg1 ;
-(char)_alwaysShowBezelForCurrentBezelStyleAndState;
-(char)canSmoothFontsInFrame:(CGRect)arg1 forLayerBackedView:(id)arg2 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(NSMenuItem *)selectedItem;
-(char)autoenablesItems;
-(void)_itemChanged:(id)arg1 ;
-(void)_itemAdded:(id)arg1 ;
-(void)_itemRemoved:(id)arg1 ;
-(void)_popUpItemAction:(id)arg1 ;
-(unsigned long long)preferredEdge;
-(void)setPreferredEdge:(unsigned long long)arg1 ;
-(char)_allowsContextMenus;
-(char)_performKeyEquivalent:(id)arg1 conditionally:(char)arg2 ;
-(char)keyDown:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(long long)indexOfItemWithRepresentedObject:(id)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 ;
-(void)removeItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemWithTag:(long long)arg1 ;
-(void)removeAllItems;
-(void)setPullsDown:(char)arg1 ;
-(void)setAutoenablesItems:(char)arg1 ;
-(void)addItemWithTitle:(id)arg1 ;
-(NSMenuItem *)lastItem;
-(id)itemWithTitle:(id)arg1 ;
-(id)itemTitleAtIndex:(long long)arg1 ;
-(long long)indexOfItemWithTitle:(id)arg1 ;
-(void)synchronizeTitleAndSelectedItem;
-(void)removeItemWithTitle:(id)arg1 ;
-(long long)indexOfSelectedItem;
-(void)selectItem:(id)arg1 ;
-(void)insertItemWithTitle:(id)arg1 atIndex:(long long)arg2 ;
-(char)_obeysHiddenBit;
-(CGRect)_separatorRectForCellFrame:(CGRect)arg1 isFlipped:(char)arg2 ;
-(CGRect)stateImageRectForBounds:(CGRect)arg1 ;
-(void)drawBorderAndBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)menuView;
-(void)setMenuItem:(id)arg1 ;
-(id)_keyEquivalentUniquerCreatingIfNecessary:(char)arg1 ;
-(double)keyEquivalentWidth;
-(CGRect)keyEquivalentRectForBounds:(CGRect)arg1 ;
-(id)_highlightColor;
-(id)_highlightTextColor;
-(void)_fixTargetsForMenu:(id)arg1 ;
-(char)pullsDown;
-(void)_rawSetSelectedIndex:(long long)arg1 ;
-(void)addItemsWithTitles:(id)arg1 ;
-(void)selectItemWithTitle:(id)arg1 ;
-(char)selectItemWithTag:(long long)arg1 ;
-(NSArray *)itemTitles;
-(NSString *)titleOfSelectedItem;
-(void)performClickWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setMenuShouldBeUniquedAgainstMainMenu:(char)arg1 ;
-(NSEdgeInsets)_pulldownExtraBezelInsets;
-(void)setArrowPosition:(unsigned long long)arg1 ;
-(id)initTextCell:(id)arg1 pullsDown:(char)arg2 ;
-(char)usesItemFromMenu;
-(void)_clearTargetsFromMenuPointingAtSelf:(id)arg1 ;
-(void)_menuWillSendAction:(id)arg1 ;
-(void)_allItemsRemoved:(id)arg1 ;
-(char)_positionsMenuAsPullDown;
-(char)_positionsMenuRelativeToRightEdge;
-(unsigned long long)_effectiveAlignment;
-(double)_menuLocationHorizontalOffset;
-(double)_horzOffsetForTitleInFrame:(CGRect)arg1 withAlignment:(unsigned long long)arg2 direction:(long long)arg3 font:(id)arg4 ;
-(double)_preferredPopupHeight;
-(CGSize)_popupImageSizeForCellFrame:(CGRect)arg1 ;
-(CGSize)_labelOffsetInCellFrame:(CGRect)arg1 ofView:(id)arg2 ;
-(CGPoint)_menuLocationForEvent:(id)arg1 inCellFrame:(CGRect)arg2 ofView:(id)arg3 ;
-(void)attachPopUpWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)_popUpMenuFlags:(char)arg1 ;
-(void)_createAndPopulateKeyEquivalentUniquerIfNecessary;
-(double)_menuMinimumWidthForEvent:(id)arg1 inCellFrame:(CGRect)arg2 ofView:(id)arg3 ;
-(id)_popUpMenuOptionsForFlags:(unsigned long long)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)dismissPopUp;
-(void)_handleWillPopUpNotification;
-(void)_doPopupSearchString;
-(unsigned long long)arrowPosition;
-(id)_indicatorImageForCellHeight:(double)arg1 ;
-(char)_useTigerMetricsForHorizontalUnborderedOffset;
-(double)_bezelTopOffset;
-(double)_bezelBottomOffset;
-(NSEdgeInsets)_popupBezelInsets;
-(unsigned long long)_applicableArrowLocation;
-(CGPoint)_bezelToIndicatorOffsets;
-(id)_indicatorImage;
-(CGSize)_defaultIndicatorSize;
-(double)_bezelTopPadding;
-(double)_bezelBottomPadding;
-(double)_popupBezelToContentPaddingOffset;
-(double)_popupIndicatorToContentPaddingOffset;
-(CGRect)_availableContentRectForCellFrame:(CGRect)arg1 isFlipped:(char)arg2 ;
-(NSEdgeInsets)_popupBezelInsetsForCellFrame:(CGRect)arg1 ;
-(NSEdgeInsets)_bezelToIndicatorInsets;
-(NSEdgeInsets)_indicatorInsets;
-(NSEdgeInsets)_popupPaddingInsets;
-(double)_imageToTitleHorizontalOffset;
-(id)_coreUIDefaultIndicatorImage;
-(id)_defaultIndicatorImage;
-(double)_autolayout_preferredPopupHeight;
-(unsigned long long)_maxItemsToMeasureForCellSize;
-(double)_extraWidthForCellHeight:(double)arg1 ;
-(char)_popupStyleDrawsIndicator;
-(CGRect)_indicatorFrameForCellFrame:(CGRect)arg1 isFlipped:(char)arg2 ;
-(CGRect)_indicatorFrameForCellFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)_shouldDrawIndicatorOnlyForFrame:(CGRect)arg1 ;
-(void)_drawIndicatorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)_copyWithoutMenu;
-(void)setUsesItemFromMenu:(char)arg1 ;
-(void)setAltersStateOfSelectedItem:(char)arg1 ;
-(char)altersStateOfSelectedItem;
-(CGPoint)_locationForPopUpMenuWithFrame:(CGRect)arg1 ;
-(double)_imageToBezelOrIndicatorPadding;
-(char)_popupHeightIsFlexible;
-(void)_drawStandardPopUpBorderWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_accessibilityPressAction:(id)arg1 ;
@end

