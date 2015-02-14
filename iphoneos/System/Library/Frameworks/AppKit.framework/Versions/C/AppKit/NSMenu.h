/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSUserInterfaceItemIdentification.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@class NSString, NSArray, NSMenuItem, NSFont;

@interface NSMenu : NSObject <NSUserInterfaceItemIdentification, NSCopying, NSCoding> {

	NSMenu* _supermenu;
	NSString* _title;
	id _itemArray;
	id _extra;
	struct {
		unsigned noAutoenable : 1;
		unsigned inMain : 1;
		unsigned internalPerformAction : 1;
		unsigned condenseSeparators : 1;
		unsigned disabled : 1;
		unsigned ownedByPopUp : 1;
		unsigned delegateNeedsUpdate : 1;
		unsigned delegateUpdateItem : 1;
		unsigned delegateHasKeyEquiv : 1;
		unsigned delegateHasAltKeyEquiv : 1;
		unsigned excludeMarkColumn : 1;
		unsigned isContextualMenu : 1;
		unsigned cmPluginMode : 2;
		unsigned invertedCMPluginTypes : 2;
		unsigned allowsDifferentSelection : 1;
		unsigned noTopPadding : 1;
		unsigned noBottomPadding : 1;
		unsigned hasNCStyle : 1;
		unsigned RESERVED : 12;
	}  _mFlags;
	NSString* _uiid;

}

@property (nonatomic,retain) id representedObject; 
@property (copy) NSString * identifier; 
@property (copy) NSString * title; 
@property (assign) NSMenu * supermenu; 
@property (copy,readonly) NSArray * itemArray; 
@property (readonly) long long numberOfItems; 
@property (assign) char autoenablesItems; 
@property (assign) id<NSMenuDelegate> delegate; 
@property (readonly) double menuBarHeight; 
@property (readonly) NSMenuItem * highlightedItem; 
@property (assign) double minimumWidth; 
@property (readonly) CGSize size; 
@property (retain) NSFont * font; 
@property (assign) char allowsContextMenuPlugIns; 
@property (assign) char showsStateColumn; 
@property (assign) char menuChangedMessagesEnabled; 
@property (getter=isTornOff,readonly) char tornOff; 
+(id)menuTitleForAVOptions:(unsigned long long)arg1 ;
+(void)initialize;
+(char)menuBarVisible;
+(void)_setContextMenuTarget:(id)arg1 ;
+(void)_setHelpMenu:(id)arg1 ;
+(id)_helpMenu;
+(id)_contextMenuTarget;
+(NSZone*)menuZone;
+(id)_contextMenuEvent;
+(id)_currentTrackingInfo;
+(void)popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 ;
+(id)_menusWithName:(id)arg1 ;
+(void)_recursivelyUnregisterMenuForKeyEquivalentUniquing:(id)arg1 ;
+(void)_recursivelyRegisterMenuForKeyEquivalentUniquing:(id)arg1 ;
+(void)_recursivelyRegisterMenuItem:(id)arg1 forKeyEquivalentUniquingInMenu:(id)arg2 ;
+(void)_recursivelyUnregisterMenuItem:(id)arg1 forKeyEquivalentUniquingInMenu:(id)arg2 ;
+(void)_setContextMenuEvent:(id)arg1 ;
+(void)_unregisterOneMenuForKeyEquivalentUniquing:(id)arg1 ;
+(void)_registerOneMenuForKeyEquivalentUniquing:(id)arg1 ;
+(void)setMenuZone:(NSZone*)arg1 ;
+(void)popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4 ;
+(void)_setAppleMenuEnabled:(char)arg1 ;
+(void)setMenuBarVisible:(char)arg1 ;
+(void)_saveTornOffMenus;
+(void)_restoreTornOffMenus;
+(double)menuBarHeight;
+(void)_drawOverlayForMenuHelpResultsInRect:(CGRect)arg1 withClipRect:(CGRect)arg2 flags:(unsigned long long)arg3 ;
+(void)_drawHelpResultsSeparatorInRect:(CGRect)arg1 withClipRect:(CGRect)arg2 flags:(unsigned long long)arg3 ;
+(void)_unregisterMenuItemForKeyEquivalentUniquing:(id)arg1 ;
+(void)_registerMenuItemForKeyEquivalentUniquing:(id)arg1 ;
+(char)_validateCaptureKeyEquivalentsFromEvent:(id)arg1 withOptions:(unsigned long long)arg2 ;
+(id)_captureKeyEquivalentsFromEvent:(id)arg1 withOptions:(unsigned long long)arg2 ;
+(void)_registerMenuForKeyEquivalentUniquing:(id)arg1 ;
+(void)_unregisterMenuForKeyEquivalentUniquing:(id)arg1 ;
+(char)_canUseKeyEquivalentForMenuItem:(id)arg1 ;
+(id)_captureKeyEquivalentsWithOptions:(unsigned long long)arg1 inMode:(id)arg2 finalEvent:(id*)arg3 status:(long long*)arg4 additionalEventProcessing:(/*^block*/id)arg5 ;
-(void)updateSeparatorVisibility;
-(void)addStandardTextEncodingMenuItemsWithTarget:(id)arg1 action:(SEL)arg2 preferredEncoding:(unsigned)arg3 ;
-(void)addItemToMenuForEncoding:(unsigned)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
-(id)safari_addItemWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3 ;
-(id)safari_addAlwaysDisabledItemWithTitle:(id)arg1 ;
-(id)safari_addItemWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)safari_removeUselessMenuItemSeparators;
-(id)safari_addItemWithTitle:(id)arg1 action:(SEL)arg2 tag:(int)arg3 ;
-(void)safari_transferAllItemsFromMenu:(id)arg1 ;
-(void)safari_popUpInRect:(CGRect)arg1 ofView:(id)arg2 didInsertInitialSeparator:(char*)arg3 ;
-(id)safari_initWithDictionaryRepresentation:(id)arg1 ;
-(id)safari_itemWithTarget:(id)arg1 andAction:(SEL)arg2 ;
-(id)safari_addItemWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3 tag:(int)arg4 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(id)safari_addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 keyEquivalent:(id)arg4 ;
-(id)addItemDisabledWithTitle:(id)arg1 ;
-(id)addItemWithTitle:(id)arg1 action:(SEL)arg2 enabled:(char)arg3 tag:(int)arg4 state:(int)arg5 ;
-(id)addItemWithTitle:(id)arg1 action:(SEL)arg2 enabled:(char)arg3 tag:(int)arg4 state:(int)arg5 image:(id)arg6 indent:(int)arg7 ;
-(id)insertItemWithTitle:(id)arg1 action:(SEL)arg2 enabled:(char)arg3 tag:(int)arg4 state:(int)arg5 image:(id)arg6 indent:(int)arg7 atIndex:(int)arg8 ;
-(id)insertItemDisabledWithTitle:(id)arg1 atIndex:(int)arg2 ;
-(id)addItemWithTitle:(id)arg1 action:(SEL)arg2 ;
-(id)addItemWithTitle:(id)arg1 action:(SEL)arg2 enabled:(char)arg3 tag:(int)arg4 state:(int)arg5 image:(id)arg6 ;
-(id)addItemWithTitle:(id)arg1 ;
-(void)addFileFormatWithTitle:(id)arg1 tag:(long long)arg2 representedObject:(id)arg3 target:(id)arg4 ;
-(id)init;
-(void)setDelegate:(id<NSMenuDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_menuImpl;
-(char)accessibilitySupportsOverriddenAttributes;
-(char)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<NSMenuDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)sizeToFit;
-(CGSize)size;
-(NSArray *)itemArray;
-(id)userInterfaceItemIdentifier;
-(id)_menuName;
-(void)_removeSidebandMenuUpdaterForToken:(id)arg1 ;
-(long long)numberOfItems;
-(id)insertItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 atIndex:(long long)arg4 ;
-(long long)indexOfItem:(id)arg1 ;
-(void)_addSidebandMenuUpdaterForRoles:(long long)arg1 token:(id)arg2 priority:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)_itemArray;
-(void)_setMenuName:(id)arg1 ;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)_recursivelyUpdateKeyEquivalents;
-(void)performActionForItemAtIndex:(long long)arg1 ;
-(id)itemAtIndex:(long long)arg1 ;
-(void)_populate:(char)arg1 ;
-(void)update;
-(long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2 ;
-(char)_menuOwnerCanUseMenuWhenModal;
-(id)initWithTitle:(id)arg1 ;
-(id)addItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 ;
-(double)minimumWidth;
-(void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4 ;
-(NSMenu *)supermenu;
-(id)_menuImplIfExists;
-(char)_populateWithEventRef:(void*)arg1 ;
-(unsigned long long)_menuPluginTypes;
-(id)_menuServicesStartingRequestor;
-(void)_performSidebandUpdatersForRole:(long long)arg1 withEventRef:(void*)arg2 ;
-(void)_sendMenuOpeningNotification:(char)arg1 ;
-(void)_sendMenuClosedNotification:(char)arg1 ;
-(void)_informDelegateOfHighlightedItem:(id)arg1 ;
-(void)_enableItem:(id)arg1 ;
-(void)_internalPerformActionForItemAtIndex:(long long)arg1 ;
-(void)_updateForTracking;
-(char)showsStateColumn;
-(char)_condensesSeparators;
-(char)autoenablesItems;
-(char)_delegateWantsOpenCall;
-(char)_delegateWantsCloseCall;
-(long long)_sidebandUpdaterRoles;
-(char)_delegateWantsPopulateCall;
-(long long)_menuPluginInsertionMode;
-(char)_hasPaddingOnEdge:(unsigned long long)arg1 ;
-(long long)_userInterfaceLayoutDirection;
-(id)_fontOrNilIfDefault;
-(char)_hasNCStyle;
-(unsigned long long)_indentationWidth;
-(char)_isEnabled;
-(void)_menuDidChangeAccessibilityOverriddenAttribute:(id)arg1 from:(id)arg2 to:(id)arg3 ;
-(long long)indexOfItemWithSubmenu:(id)arg1 ;
-(void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 ;
-(long long)_backgroundStyle;
-(id)_trackingInfo;
-(unsigned long long)_currentMenuUpdateFlags;
-(id)_handleCarbonEvents:(const EventTypeSpec*)arg1 count:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_setIsContextualMenu:(char)arg1 ;
-(void)_setMenuServicesStartingRequestor:(id)arg1 ;
-(char)_allowsDifferentInitialPopupSelection;
-(char)_delegateWantsConfinementRectCall;
-(CGRect)_confinementRectForScreen:(id)arg1 ;
-(id)storyboard;
-(long long)indexOfItemWithRepresentedObject:(id)arg1 ;
-(void)removeItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemWithTag:(long long)arg1 ;
-(void)removeAllItems;
-(void)setAutoenablesItems:(char)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)itemWithTitle:(id)arg1 ;
-(long long)indexOfItemWithTitle:(id)arg1 ;
-(void)_finishedMakingConnections;
-(char)popUpMenuPositioningItem:(id)arg1 atLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)helpRequested:(id)arg1 ;
-(void)presentControllerAsModalWindow:(id)arg1 ;
-(void)setSubmenu:(id)arg1 forItem:(id)arg2 ;
-(id)_menuOwner;
-(const AEDesc*)_contextMenuPluginAEDesc;
-(void)setMenuRepresentation:(id)arg1 ;
-(void)_associateStatusItem:(id)arg1 ;
-(id)_menuPanelInitWithCoder:(id)arg1 ;
-(void)_createExtraIvars;
-(void)_recursivelyNoteChangedIsInMainMenu:(char)arg1 ;
-(void)_notifySupermenuOfSubmenuChange;
-(char)_performKeyEquivalentWithDelegate:(id)arg1 ;
-(void)_performActionWithHighlightingForItemAtIndex:(long long)arg1 sendAccessibilityNotification:(char)arg2 ;
-(void)_performActionWithHighlightingForItemAtIndex:(long long)arg1 ;
-(void)_enableItems;
-(void)itemChanged:(id)arg1 ;
-(id)_createMenuImpl;
-(id)attachedMenu;
-(char)isAttached;
-(CGPoint)locationForSubmenu:(id)arg1 ;
-(id)_contextMenuImpl;
-(char)popUpMenuPositioningItem:(id)arg1 atLocation:(CGPoint)arg2 inView:(id)arg3 appearance:(id)arg4 ;
-(void)_updateEnabled;
-(void)_setMenuPluginInsertionMode:(long long)arg1 ;
-(void)_populateFromSidebandUpdatersOfSign:(int)arg1 withEventRef:(void*)arg2 ;
-(char)_populateFromDelegateWithEventRef:(void*)arg1 ;
-(char)_isContextualMenu;
-(char)_isInMainMenu;
-(void)_setMenuOwner:(id)arg1 ;
-(void)_recursivelyChangeLayoutDirectionFrom:(long long)arg1 to:(long long)arg2 ;
-(void)cancelTracking;
-(void)_cancelTrackingWithFade:(char)arg1 ;
-(void)_postItemChangedNotificationButIgnoringItOurselves:(id)arg1 ;
-(double)menuBarHeight;
-(void)setSupermenu:(NSMenu *)arg1 ;
-(void)removeItem:(id)arg1 ;
-(long long)_indexOfItemWithPartialTitle:(id)arg1 ;
-(id)itemWithTag:(long long)arg1 ;
-(void)_setSuppressAutoenabling:(char)arg1 ;
-(void)setMenuChangedMessagesEnabled:(char)arg1 ;
-(char)menuChangedMessagesEnabled;
-(void)_menuChanged;
-(unsigned long long)propertiesToUpdate;
-(id)menuRepresentation;
-(void)setContextMenuRepresentation:(id)arg1 ;
-(id)contextMenuRepresentation;
-(void)setTearOffMenuRepresentation:(id)arg1 ;
-(id)tearOffMenuRepresentation;
-(char)isTornOff;
-(id)_insertItemInSortedOrderWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 ;
-(char)_servicesMenuItemsAreForContextMenu;
-(void)_image:(id*)arg1 frame:(CGRect*)arg2 forPopUpMenuPositioningItem:(id)arg3 atLocation:(CGPoint)arg4 inView:(id)arg5 appearance:(id)arg6 ;
-(void)_setEnabled:(char)arg1 ;
-(void)_popUpMenuWithEvent:(id)arg1 forView:(id)arg2 ;
-(void)setMinimumWidth:(double)arg1 ;
-(void)_setAllowsDifferentInitialPopupSelection:(char)arg1 ;
-(char)allowsContextMenuPlugIns;
-(void)setAllowsContextMenuPlugIns:(char)arg1 ;
-(void)_setMenuPluginTypes:(unsigned long long)arg1 ;
-(void)_setCondensesSeparators:(char)arg1 ;
-(void)_setHasPadding:(char)arg1 onEdge:(unsigned long long)arg2 ;
-(void)_setHasNCStyle:(char)arg1 ;
-(void)_setIndentationWidth:(unsigned long long)arg1 ;
-(char)_hasPendingCancellationEvent;
-(void)_endHandlingCarbonEvents:(id)arg1 ;
-(char)_delegateWantsHighlightedCall;
-(char)_delegateWantsPrepareCall;
-(char)_delegateWantsDidFailToOpenCall;
-(char)_ownedByPopUp;
-(void)_setOwnedByPopUp:(id)arg1 ;
-(id)_owningPopUp;
-(void)highlightItem:(id)arg1 ;
-(NSMenuItem *)highlightedItem;
-(void)cancelTrackingWithoutAnimation;
-(void)_lockMenuPosition;
-(void)_unlockMenuPosition;
-(void)setShowsStateColumn:(char)arg1 ;
-(void)_setContextMenuPluginAEDesc:(const AEDesc*)arg1 ;
-(void)_limitedViewWantsRedisplayForItem:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_menuItem:(id)arg1 didChangeEnabledStateFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeSubmenuFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeSubmenuContentsWithSubmenu:(id)arg2 ;
-(void)_menuItem:(id)arg1 didChangeTitleFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeAttributedTitleFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeFontFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeNewItemsCountFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_menuItem:(id)arg1 didChangeActionFrom:(SEL)arg2 to:(SEL)arg3 ;
-(void)_menuItem:(id)arg1 didChangeStateImageFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeImageFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeKeyEquivalentFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeKeyEquivalentVirtualKeyCodeFrom:(unsigned short)arg2 to:(unsigned short)arg3 ;
-(void)_menuItem:(id)arg1 didChangeKeyEquivalentModifierMaskFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_menuItem:(id)arg1 didChangeAlternateFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeDestructiveFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeActionMenuImageFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeActionMenuTitleFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeNextItemIsAlternateFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeIndentFrom:(long long)arg2 to:(long long)arg3 ;
-(void)_menuItem:(id)arg1 didChangeTooltipFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeCustomViewFrom:(id)arg2 to:(id)arg3 ;
-(void)_menuItem:(id)arg1 didChangeCustomViewHandlesEventsFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeHiddenFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeSeparatorStatusFrom:(char)arg2 to:(char)arg3 ;
-(void)_menuItem:(id)arg1 didChangeAccessibilityOverriddenAttribute:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(void)_menuItem:(id)arg1 didChangeRespectsKeyEquivalentWhileHiddenFrom:(char)arg2 to:(char)arg3 ;
-(void)_setStoryboard:(id)arg1 ;
-(id)_responderInitWithCoder:(id)arg1 ;
-(id)_windowInitWithCoder:(id)arg1 ;
-(id)_panelInitWithCoder:(id)arg1 ;
-(id)_getKeyEquivalentUniquerCreatingIfNecessary:(char)arg1 ;
@end

