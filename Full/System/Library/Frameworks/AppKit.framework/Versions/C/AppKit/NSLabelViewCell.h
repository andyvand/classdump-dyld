/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSActionCell.h>

@interface NSLabelViewCell : NSActionCell {

	long long _selectedParts;
	long long _hoveredPart;
	unsigned long long _imagePosition;
	char _allowsMultipleSelection;
	long long _focusedPart;

}

@property (readonly) long long numParts; 
@property (assign) long long diskLabelValues; 
@property (assign) unsigned long long imagePosition;              //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign) char allowsMultipleSelection;                  //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (assign) long long focusedPart; 
@property (assign) long long hoveredPart;                         //@synthesize hoveredPart=_hoveredPart - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)setImagePosition:(unsigned long long)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(id)accessibilityChildrenAttribute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performClick:(id)arg1 ;
-(char)accessibilityIsChildrenAttributeSettable;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)imagePosition;
-(void)_commonInit;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(id)accessibilityVisibleChildrenAttribute;
-(char)accessibilityIsVisibleChildrenAttributeSettable;
-(void)mouseEntered:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)mouseExited:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(long long)diskLabelValues;
-(long long)numParts;
-(void)setDiskLabelValues:(long long)arg1 ;
-(char)_isSelectedPart:(long long)arg1 ;
-(void)_selectPart:(long long)arg1 ;
-(id)_labelAttributes;
-(CGRect)part:(long long)arg1 boundsWithFrame:(CGRect)arg2 ;
-(void)_drawBackgroundForPartRect:(CGRect)arg1 isPressedOrHovered:(char)arg2 ;
-(char)_isHoveredPart:(long long)arg1 ;
-(id)_nameForLabelPart:(long long)arg1 ;
-(void)_drawPart:(long long)arg1 withFrame:(CGRect)arg2 ;
-(id)_currentLabelName;
-(CGRect)_boundsForLabel:(id)arg1 withFrame:(CGRect)arg2 ;
-(long long)_partAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 ;
-(void)_handleMouseMovedForEvent:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)_deselectPart:(long long)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(long long)focusedPart;
-(void)setFocusedPart:(long long)arg1 ;
-(long long)hoveredPart;
-(void)setHoveredPart:(long long)arg1 ;
-(id)accessibilityDescriptionOfChild:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 forChild:(id)arg2 ;
-(CGRect)_rectForPart:(long long)arg1 ;
@end

