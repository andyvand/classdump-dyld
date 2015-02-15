/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMenuItem.h>

@protocol NSMenuItem <NSObject,NSCopying,NSCoding,NSValidatedUserInterfaceItem>
@required
+(id)separatorItem;
+(char)usesUserKeyEquivalents;
+(void)setUsesUserKeyEquivalents:(char)arg1;
-(void)setState:(long long)arg1;
-(id)image;
-(void)setImage:(id)arg1;
-(void)setTarget:(id)arg1;
-(void)setAction:(SEL)arg1;
-(void)setEnabled:(char)arg1;
-(void)setTag:(long long)arg1;
-(long long)tag;
-(char)isEnabled;
-(long long)state;
-(id)target;
-(SEL)action;
-(void)setTitle:(id)arg1;
-(void)setKeyEquivalent:(id)arg1;
-(void)setKeyEquivalentModifierMask:(unsigned long long)arg1;
-(id)title;
-(id)submenu;
-(id)menu;
-(char)isSeparatorItem;
-(id)keyEquivalent;
-(unsigned long long)keyEquivalentModifierMask;
-(void)setAlternate:(char)arg1;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
-(char)hasSubmenu;
-(long long)indentationLevel;
-(char)isAlternate;
-(void)setMenu:(id)arg1;
-(void)setTitleWithMnemonic:(id)arg1;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1;
-(id)attributedTitle;
-(void)setAttributedTitle:(id)arg1;
-(id)mnemonic;
-(id)toolTip;
-(void)setSubmenu:(id)arg1;
-(void)setMnemonicLocation:(unsigned long long)arg1;
-(unsigned long long)mnemonicLocation;
-(void)setToolTip:(id)arg1;
-(id)onStateImage;
-(id)offStateImage;
-(id)mixedStateImage;
-(id)userKeyEquivalent;
-(unsigned long long)userKeyEquivalentModifierMask;
-(void)setOnStateImage:(id)arg1;
-(void)setOffStateImage:(id)arg1;
-(void)setMixedStateImage:(id)arg1;
-(void)setIndentationLevel:(long long)arg1;

@end

#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSValidatedUserInterfaceItem.h>

@class NSMenu, NSString, NSAttributedString, NSImage, NSView;

@interface NSMenuItem : NSObject <NSMenuItem, NSCopying, NSCoding, NSValidatedUserInterfaceItem> {

	NSMenu* _menu;
	NSString* _title;
	NSString* _keyEquivalent;
	NSString* _uiid;
	id _repObject;
	NSMenu* _submenu;
	id _extraData;
	id _target;
	SEL _action;
	long long _tag;
	unsigned char _keyEquivalentModifierMask;
	struct {
		unsigned keGenerationCount : 8;
		unsigned disabled : 1;
		unsigned isSeparator : 1;
		unsigned hidden : 1;
		unsigned alternate : 1;
		unsigned moreAlternate : 1;
		unsigned singleAlternate : 1;
		unsigned indent : 4;
		unsigned keShareMode : 3;
		unsigned state : 2;
		unsigned destructive : 1;
		unsigned RESERVED1 : 1;
		unsigned limitedView : 1;
		unsigned nextItemIsAlternate : 1;
		unsigned blockKE : 1;
		unsigned ignoredForAccessibility : 1;
		unsigned hiddenActiveKE : 1;
		unsigned noRepeatKEs : 1;
		unsigned targetWeak : 1;
	}  _miFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) NSMenu * menu; 
@property (readonly) char hasSubmenu; 
@property (retain) NSMenu * submenu; 
@property (readonly) NSMenuItem * parentItem; 
@property (copy) NSString * title; 
@property (copy) NSAttributedString * attributedTitle; 
@property (getter=isSeparatorItem,readonly) char separatorItem; 
@property (copy) NSString * keyEquivalent; 
@property (assign) unsigned long long keyEquivalentModifierMask; 
@property (copy,readonly) NSString * userKeyEquivalent; 
@property (retain) NSImage * image; 
@property (assign) long long state; 
@property (retain) NSImage * onStateImage; 
@property (retain) NSImage * offStateImage; 
@property (retain) NSImage * mixedStateImage; 
@property (getter=isEnabled) char enabled; 
@property (getter=isAlternate) char alternate; 
@property (assign) long long indentationLevel; 
@property (__weak) id target; 
@property (assign) SEL action; 
@property (assign) long long tag; 
@property (retain) id representedObject; 
@property (retain) NSView * view; 
@property (getter=isHighlighted,readonly) char highlighted; 
@property (getter=isHidden) char hidden; 
@property (getter=isHiddenOrHasHiddenAncestor,readonly) char hiddenOrHasHiddenAncestor; 
@property (copy) NSString * toolTip; 
+(id)avMenuItemWithRepresentedObject:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 label:(id)arg5 icon:(id)arg6 ;
+(id)personMenuItemWithTitle:(id)arg1 label:(id)arg2 representedObject:(id)arg3 action:(SEL)arg4 ;
+(id)safari_menuItemForFileAtPath:(id)arg1 ;
+(id)safari_menuItemWithTitle:(id)arg1 keyEquivalent:(id)arg2 selectionHandler:(/*^block*/id)arg3 ;
+(id)safari_menuItemWithTitle:(id)arg1 menuItemHandler:(/*^block*/id)arg2 ;
+(void)safari_drawHighlightBackgroundInRect:(CGRect)arg1 flipped:(char)arg2 ;
+(void)_safari_invokeBlockForMenuItem:(id)arg1 ;
+(double)safari_menuItemFlashInterval;
+(unsigned long long)safari_menuItemFlashCount;
+(void)safari_drawImageForState:(unsigned long long)arg1 highlighted:(char)arg2 inRect:(CGRect)arg3 flipped:(char)arg4 ;
+(void)initialize;
+(char)_hasTitlePathBasedUserKeyEquivalent;
+(id)separatorItem;
+(char)usesUserKeyEquivalents;
+(id)_defaultWindowMenuStateImageMinimizedWindow;
+(id)_defaultWindowMenuStateImageKeyWindow;
+(id)_defaultWindowMenuStateImageDirtyWindow;
+(void)setUsesUserKeyEquivalents:(char)arg1 ;
+(id)standardCopyMenuItem;
+(id)standardPasteMenuItem;
+(id)standardDeleteMenuItem;
+(id)standardShareMenuItemWithItems:(id)arg1 ;
+(id)standardQuickLookMenuItem;
+(void)_updateUserKEsAfterActivation:(id)arg1 ;
+(CFStringRef)_menuItemViewerHIViewClassName;
-(char)updateContextItemVisibility:(char)arg1 ;
-(void)safari_showKeyEquivalent;
-(void)safari_hideKeyEquivalent;
-(void)safari_setThumbnailImageForApplicationAtURL:(id)arg1 clearExistingImageOnFailure:(char)arg2 ;
-(id)safari_initWithDictionaryRepresentation:(id)arg1 ;
-(void)safari_resetKeyEquivalent;
-(void)_safari_menuItemSelectedHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isHiddenOrHasHiddenAncestor;
-(char)accessibilityIsIgnored;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(char)isEnabled;
-(NSView *)view;
-(long long)state;
-(char)accessibilitySupportsOverriddenAttributes;
-(char)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)target;
-(id)controlView;
-(void)setControlView:(id)arg1 ;
-(SEL)action;
-(id)font;
-(void)setFont:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(void)setKeyEquivalentModifierMask:(unsigned long long)arg1 ;
-(NSString *)title;
-(NSMenu *)submenu;
-(NSMenu *)menu;
-(id)userInterfaceItemIdentifier;
-(char)isSeparatorItem;
-(NSString *)keyEquivalent;
-(unsigned long long)keyEquivalentModifierMask;
-(void)setAlternate:(char)arg1 ;
-(void)_setDefaultKeyEquivalentPriority:(unsigned long long)arg1 ;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 ;
-(void)_setIsAlternateDespiteNonmatchingModifiers:(char)arg1 ;
-(void)_recursivelyUpdateKeyEquivalents;
-(long long)_currentStateImageEnumeration;
-(char)hasSubmenu;
-(long long)indentationLevel;
-(char)isAlternate;
-(void)setMenu:(NSMenu *)arg1 ;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(id)_bindingAdaptor;
-(void)_setBindingAdaptor:(id)arg1 ;
-(void)setTitleWithMnemonic:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setView:(NSView *)arg1 ;
-(char)isHighlighted;
-(long long)backgroundStyle;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(id)mnemonic;
-(void)_corePerformAction;
-(void)_internalPerformActionThroughMenuIfPossible;
-(CGSize)_cachedAttributedTitleSizeForMeasuring:(char)arg1 hasAttachment:(char*)arg2 ;
-(id)_menuItemViewer;
-(id)_imageForState:(long long)arg1 ;
-(id)_alternateAttributedTitle;
-(unsigned short)_keyEquivalentVirtualKeyCode;
-(unsigned long long)_applicableKeyEquivalentModifierMask;
-(NSString *)toolTip;
-(char)_viewHandlesEvents;
-(unsigned long long)_newItemsCount;
-(char)_isHelpMenuAppKitOnly;
-(char)_isHidden;
-(id)_applicableImage;
-(char)_isEnabled;
-(char)_nextItemIsAlternate;
-(void)setSubmenu:(NSMenu *)arg1 ;
-(char)_respectsKeyEquivalentWhileHidden;
-(char)_ignoredForAccessibility;
-(char)_isAlternateDespiteNonmatchingModifiers;
-(char)_requiresModifiersToBeVisible;
-(void)setMnemonicLocation:(unsigned long long)arg1 ;
-(unsigned long long)mnemonicLocation;
-(void)setToolTip:(NSString *)arg1 ;
-(void)_setAlternateAttributedTitle:(id)arg1 ;
-(void)_setRespectsKeyEquivalentForRepeatKeys:(char)arg1 ;
-(OpaqueIconRefRef)_iconRef;
-(void)_setKeyEquivalentVirtualKeyCode:(unsigned short)arg1 ;
-(void)_setNextItemIsAlternate:(char)arg1 ;
-(char)_menuTitleMayBeInvolvedInMenuPaths;
-(void)_setHidden:(char)arg1 ;
-(char)_respectsKeyEquivalentForRepeatKeys;
-(void)_setMenuItemBelongsToContextualMenu:(char)arg1 ;
-(char)_canBeHighlighted;
-(NSImage *)onStateImage;
-(NSImage *)offStateImage;
-(NSImage *)mixedStateImage;
-(void)_configureAsSeparatorItem;
-(void)setDestructive:(char)arg1 ;
-(id)_rawKeyEquivalent;
-(id)_menuCellInitWithCoder:(id)arg1 ;
-(id)_superitem;
-(id)_titleForUserKeyEquivalents;
-(CGSize)_computeBoundingRectSizeForTitle:(id)arg1 hasAttachment:(char*)arg2 ;
-(NSString *)userKeyEquivalent;
-(id)_titlePathForUserKeyEquivalents;
-(id)_desiredKeyEquivalent;
-(char)_requiresKERegistration;
-(unsigned long long)_desiredKeyEquivalentModifierMask;
-(NSMenuUserKeyEquivalentInfo_t)_fetchFreshUserKeyEquivalentInfo;
-(void)_cacheUserKeyEquivalentInfo:(NSMenuUserKeyEquivalentInfo_t)arg1 ;
-(unsigned long long)userKeyEquivalentModifierMask;
-(unsigned long long)_rawKeyEquivalentModifierMask;
-(void)_recacheUserKeyEquivalentOnlyIfStale:(char)arg1 ;
-(long long)keyEquivalentSharingMode;
-(char)_isHelpMenu;
-(NSMenuItem *)parentItem;
-(void)_setSubmenu:(id)arg1 ;
-(void)_setNewItemsCount:(unsigned long long)arg1 ;
-(char)_shouldForceShiftModifierWithKeyEquivalent:(id)arg1 ;
-(char)_mayBeInvolvedInMenuItemPath;
-(void)_setBlockKE:(char)arg1 ;
-(char)_blockKE;
-(unsigned long long)_defaultKeyEquivalentPriority;
-(unsigned long long)_keyEquivalentPriority;
-(void)setKeyEquivalentSharingMode:(long long)arg1 ;
-(char)_canShareKeyEquivalentWithItem:(id)arg1 ;
-(void)_setIconRef:(OpaqueIconRefRef)arg1 ;
-(void)setOnStateImage:(NSImage *)arg1 ;
-(void)setOffStateImage:(NSImage *)arg1 ;
-(void)setMixedStateImage:(NSImage *)arg1 ;
-(char)isDestructive;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)_setChangedFlags:(long long)arg1 ;
-(long long)_changedFlags;
-(void)_setViewNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_setViewHandlesEvents:(char)arg1 ;
-(void)_setIgnoredForAccessibility:(char)arg1 ;
-(void)_setRespectsKeyEquivalentWhileHidden:(char)arg1 ;
-(void)_setRequiresModifiersToBeVisible:(char)arg1 ;
-(id)_cellInitWithCoder:(id)arg1 ;
-(id)_actionCellInitWithCoder:(id)arg1 ;
-(id)_buttonCellInitWithCoder:(id)arg1 ;
@end
