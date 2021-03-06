/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSColorPicker.h>
#import <AppKit/NSColorPickingCustom.h>

@class NSPopUpButton, NSMutableDictionary, NSString, NSMenuItem;

@interface NSColorPickerUser : NSColorPicker <NSColorPickingCustom> {

	id userPickerView;
	id tiffView;
	id reserved1;
	id renamePanelController;
	NSPopUpButton* palettePopUpButton;
	id reserved2;
	id optionsPopUp;
	char bScaleOrNot;
	NSMutableDictionary* imageDictionary;
	id paste;
	id renameField;
	id defaultTiffImage;
	id removeField;
	NSString* currImageName;
	NSMenuItem* spectrumMenuItem;

}
-(void)dealloc;
-(long long)currentMode;
-(char)worksWhenModal;
-(void)remove:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(char)supportsMode:(long long)arg1 ;
-(void)_saveMode;
-(id)provideNewView:(char)arg1 ;
-(id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 ;
-(id)buttonToolTip;
-(double)_insertionOrder;
-(void)_restoreMode;
-(void)_setCurrImageName:(id)arg1 ;
-(id)_imageFromItemTitle:(id)arg1 ;
-(id)_shortNameFor:(id)arg1 ;
-(void)_addImage:(id)arg1 named:(id)arg2 ;
-(char)saveImageNamed:(id)arg1 andShowWarnings:(char)arg2 ;
-(void)_switchImage:(id)arg1 andUpdateColor:(char)arg2 ;
-(void)switchImage:(id)arg1 ;
-(id)_newImageName:(id)arg1 ;
-(void)_open:(id)arg1 fromImage:(id)arg2 withName:(id)arg3 ;
-(void)_open:(id)arg1 ;
-(char)_removeOrRename:(id)arg1 ;
-(id)validateRename;
-(void)_rename:(id)arg1 ;
-(void)_remove:(id)arg1 ;
-(char)pasteItemUpdate:(id)arg1 ;
-(void)open:(id)arg1 ;
-(id)_popUpButton;
-(void)rename:(id)arg1 ;
@end

