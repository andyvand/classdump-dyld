/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColorList, NSMutableArray, NSCrayon, NSColorPickerCrayon;

@interface NSColorPickerCrayonView : NSView {

	NSColorList* _colorList;
	NSMutableArray* _crayonRows;
	NSCrayon* _selectedCrayon;
	NSColorPickerCrayon* _controllingPicker;

}
+(id)_crayonMaskImage;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityChildrenAttribute;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(char)mouseDownCanMoveWindow;
-(id)localizedColorNameComponent;
-(void)setColor:(id)arg1 ;
-(id)color;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)_setColorList:(id)arg1 ;
-(void)_updateFocusRing;
-(void)_forceUpdateFocusRing;
-(id)_selectedCrayon;
-(id)_crayonWithColor:(id)arg1 ;
-(void)_selectCrayon:(id)arg1 updateSelection:(char)arg2 ;
-(char)_shouldShowFocusRing;
-(id)_nearestCrayonUnderViewPoint:(CGPoint)arg1 ;
-(void)awakeFromNib;
-(id)_colorList;
-(id)_nearestCrayonUnderViewPoint:(CGPoint)arg1 inRow:(id)arg2 ;
-(void)_updateCrayonsFromColorList;
-(char)_hasFocusRing;
-(id)_focusedCrayon;
-(id)_crayons;
-(id)_crayonRowAboveRow:(id)arg1 ;
-(id)_crayonRowBelowRow:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
@end

