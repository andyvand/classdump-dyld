/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSColor;

@interface NSColorWell : NSControl {

	NSColor* _color;
	id _reserved;
	SEL _reserved2;
	struct {
		unsigned isActive : 1;
		unsigned isBordered : 1;
		unsigned cantDraw : 1;
		unsigned isNotContinuous : 1;
		unsigned refusesFR : 1;
		unsigned reservedColorWell : 27;
	}  _cwFlags;

}

@property (getter=isActive,readonly) char active; 
@property (getter=isBordered) char bordered; 
@property (copy) NSColor * color; 
+(void)initialize;
+(char)accessibilityIsSingleCelled;
+(id)_exclusiveColorPanelOwner;
+(void)colorPanelColorChanged:(id)arg1 ;
+(void)_deactivateAllColorWells;
+(void)_delayedDeactiveWindowlessWell:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isActive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBordered:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setRefusesFirstResponder:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)isBordered;
-(void)performClick:(id)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(void)deactivate;
-(char)isOpaque;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_hasKeyboardFocus;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(char)resignFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)refusesFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)shiftModifySelection:(id)arg1 ;
-(void)altModifySelection:(id)arg1 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(char)isContinuous;
-(void)setContinuous:(char)arg1 ;
-(void)drawWellInside:(CGRect)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(char)drawColor;
-(void)_drawBorderInRect:(CGRect)arg1 ;
-(NSColor *)color;
-(id)_takeColorFrom:(id)arg1 andSendAction:(char)arg2 ;
-(void)_colorWellCommonAwake;
-(id)_takeColorFromAndSendActionIfContinuous:(id)arg1 ;
-(id)_takeColorFromDoAction:(id)arg1 ;
-(CFDictionaryRef)_coreUIBorderDrawOptions;
-(char)_ownsColorPanelExclusively;
-(void)takeColorFrom:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(char)_shouldOrderFront;
-(void)activate:(char)arg1 ;
-(void)_performActivationClickWithShiftDown:(char)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)acceptColor:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)_old_initWithCoder_NSColorWell:(id)arg1 ;
@end
