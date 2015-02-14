/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@interface NSTableHeaderCell : NSTextFieldCell
-(id)init;
-(id)_currentFont;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(id)accessibilityActionNames;
-(id)accessibilityElementWithParent:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)accessibilityTitleAttribute;
-(char)accessibilityIsTitleAttributeSettable;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)isOpaque;
-(void)highlight:(char)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_convertToText:(id)arg1 ;
-(char)_needRedrawOnWindowChangedKeyState;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(char)_allowsVibrancyForControlView:(id)arg1 ;
-(id)_vibrancyFilterForControlView:(id)arg1 ;
-(char)_textDimsWhenDisabled;
-(id)_indicatorImage;
-(void)_adjustFontSize;
-(void)_setSortable:(char)arg1 ;
-(char)_canSupportTallerHeight;
-(void)_updateFont;
-(CFStringRef)_coreUIState;
-(char)_shouldDrawRightSeparatorInView:(id)arg1 ;
-(CFDictionaryRef)_coreUIBezelDrawOptionsWithView:(id)arg1 highlighted:(char)arg2 nextColumnAfterOneBeingDrawnIsSelected:(char)arg3 ;
-(void)_drawGroupViewBackgroundWithFrame:(CGRect)arg1 highlighted:(char)arg2 inView:(id)arg3 ;
-(void)_drawBezelWithFrame:(CGRect)arg1 highlighted:(char)arg2 inView:(id)arg3 ;
-(char)_shouldShowHighlightForSort;
-(void)drawSortIndicatorWithFrame:(CGRect)arg1 inView:(id)arg2 ascending:(char)arg3 priority:(long long)arg4 ;
-(CGRect)sortIndicatorRectForBounds:(CGRect)arg1 ;
-(CFDictionaryRef)_coreUISortIndicatorDrawOptionsWithView:(id)arg1 ascending:(char)arg2 ;
-(id)_currentSortIndicatorImage;
-(void)_drawThemeContents:(CGRect)arg1 highlighted:(char)arg2 inView:(id)arg3 ;
-(char)_shouldLeaveSpaceForSortIndicator;
-(char)_alignFrame:(CGRect*)arg1 withWithDataCellForView:(id)arg2 ;
-(void)_drawSortIndicatorIfNecessaryWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setSortable:(char)arg1 showSortIndicator:(char)arg2 ascending:(char)arg3 priority:(long long)arg4 highlightForSort:(char)arg5 ;
-(void)_setIndicatorImage:(id)arg1 ;
-(char)accessibilityIsSortButton;
-(id)accessibilitySortDirectionAttribute;
-(char)accessibilityIsSortDirectionAttributeSettable;
@end

