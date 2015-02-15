/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBox.h>
#import <AppKit/NSToolbarDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface NSFontEffectsBox : NSBox <NSToolbarDelegate> {

	id _blurSlider;
	id _opacitySlider;
	id _radiusSlider;
	id _angleDial;
	id _mainControlsBox;
	id _shadowControlsBox;
	id _mainEffectsBox;
	id _angleLabel;
	id _underlineButton;
	id _strikeButton;
	id _shadowOpacitySliderToolbarItem;
	id _shadowBlurSliderToolbarItem;
	id _shadowOffsetSliderToolbarItem;
	id _shadowAngleDialToolbarItem;
	id _shadowToggleButton;
	id _textColorButton;
	id _documentColorButton;
	NSMutableDictionary* _attributesToAdd;
	NSMutableArray* _attributesToRemove;
	id _febUnused[5];
	int _shadowBlur;
	int _colorState;
	struct {
		unsigned showUnderline : 1;
		unsigned showStrikethrough : 1;
		unsigned showTextColor : 1;
		unsigned showDocumentColor : 1;
		unsigned showShadowEffects : 1;
		unsigned updatingAttributes : 1;
		unsigned reserved : 26;
	}  _febFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)changeColor:(id)arg1 ;
-(void)awakeFromNib;
-(void)_changeShadowBlur:(id)arg1 ;
-(void)_changeShadowOpacity:(id)arg1 ;
-(void)_changeShadowAngle:(id)arg1 ;
-(void*)carbonNotificationProc;
-(void)_orderFrontModalColorPanel;
-(void)_sendCarbonNotificationForTag:(unsigned)arg1 withValuePtr:(const void*)arg2 andSize:(unsigned long long)arg3 ;
-(void)_changeColorToColor:(id)arg1 ;
-(id)_currentShadowForFont:(id)arg1 ;
-(id)_foregroundColor;
-(id)_documentBackgroundColor;
-(long long)_underlineStyle;
-(long long)_strikethroughStyle;
-(long long)_lineStyleForLineStyleButton:(id)arg1 ;
-(void)_sendCarbonNotificationFor:(unsigned long long)arg1 tags:(const unsigned*)arg2 withValuePtrs:(const void*)arg3 andSizes:(const unsigned long long*)arg4 ;
-(void)_changeTextColor:(id)arg1 ;
-(void)_changeDocumentColor:(id)arg1 ;
-(char)shadowsEnabled;
-(id)convertAttributes:(id)arg1 ;
-(void)_setAttributes:(id)arg1 isMultiple:(char)arg2 ;
-(void)_validateFontPanelFontAttributes:(id)arg1 ;
-(void)_openEffectsButton:(id)arg1 ;
-(void)_toggleShadow:(id)arg1 ;
-(void)_validateUnderline:(char)arg1 ;
-(void)_validateStrikethrough:(char)arg1 ;
-(void)_validateTextColor:(char)arg1 ;
-(void)_validateDocumentColor:(char)arg1 ;
-(void)_validateShadowEffect:(char)arg1 ;
@end

