/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSToolbarItem.h>

@class NSToolbarItem, NSImage;

@interface NSToolbarItemConfigWrapper : NSToolbarItem {

	NSToolbarItem* _wrappedItem;
	NSImage* _activeImage;
	NSImage* _inactiveImage;

}
-(void)dealloc;
-(char)_wantsImageWrapperForInsertionIntoPaletteToolbar:(id)arg1 ;
-(id)initWithWrappedItem:(id)arg1 ;
-(char)_wantsCopyForInsertionIntoToolbar:(id)arg1 isPalette:(char)arg2 ;
-(void)_collectItemRectsForLabels:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 controlBounds:(CGRect)arg4 ;
-(void)_collectItemRectsForViews:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 controlBounds:(CGRect)arg4 ;
-(id)_applicableLabelsArrayForDisplayMode:(unsigned long long)arg1 isInPalette:(char)arg2 ;
-(void)_collectItemRectsForLabels:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 ;
-(void)_collectItemRectsForViews:(CGRect*)arg1 count:(unsigned long long)arg2 inBounds:(CGRect)arg3 ;
-(char)_isEnabledAndHasEnabledSubitem;
-(char)_applicableLabelIsEnabledAtIndex:(long long)arg1 forDisplayMode:(unsigned long long)arg2 isInPalette:(char)arg3 ;
-(char)_viewIsEnabledAtIndex:(long long)arg1 ;
-(id)_itemAtLabelIndex:(long long)arg1 ;
-(id)_itemAtViewIndex:(long long)arg1 ;
-(id)_buttonAtIndex:(unsigned long long)arg1 ;
-(char)_participatesInDefiningMinimumGridWidthForCustomizationPalette;
-(void)_updateWrapperImage;
@end

