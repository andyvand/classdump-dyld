/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSToolbar.h>
#import <AppKit/NSToolbarDelegate.h>

@class NSColorPanel, NSString;

@interface _NSColorPanelToolbar : NSToolbar <NSToolbarDelegate> {

	NSColorPanel* colorPanel;
	unsigned _isMoving : 1;
	unsigned _refusesToBeShown : 1;
	unsigned _reserved : 30;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachToolbarToColorPanel:(id)arg1 ;
-(void)dealloc;
-(void)setVisible:(char)arg1 ;
-(id)itemIdentifierForColorPicker:(id)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setSizeMode:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 forColorPanel:(id)arg2 ;
-(id)_itemIdentifiersForColorPickers:(id)arg1 ;
-(id)_colorPickerWithIdentifier:(id)arg1 ;
-(id)_labelForColorPicker:(id)arg1 ;
-(id)_imageForColorPicker:(id)arg1 ;
-(id)_tooltipForColorPicker:(id)arg1 ;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
-(void)setRefusesToBeShown:(char)arg1 ;
-(char)refusesToBeShown;
-(char)_prefersToBeShown;
-(void)colorPanelDidSelectColorPicker:(id)arg1 ;
-(unsigned long long)sizeMode;
-(unsigned long long)displayMode;
-(char)_isMoving;
-(id)configurationDictionary;
-(void)syncWithRemoteToolbars;
@end

