/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSString;

@interface UnifiedFieldCell : NSTextFieldCell {

	NSString* _accessibilityDescription;
	char _drawingBackgroundOnly;

}

@property (assign,getter=isDrawingBackgroundOnly,nonatomic) char drawingBackgroundOnly;              //@synthesize drawingBackgroundOnly=_drawingBackgroundOnly - In the implementation block
-(void)setDrawingBackgroundOnly:(char)arg1 ;
-(id)unifiedFieldView;
-(char)isDrawingBackgroundOnly;
-(void)_accessibilityShowAlternateUI:(char)arg1 ;
-(id)init;
-(char)accessibilityPerformShowAlternateUI;
-(char)accessibilityPerformShowDefaultUI;
-(id)accessibilityTitle;
-(id)accessibilityChildren;
-(id)accessibilityLabel;
-(char)isAccessibilityAlternateUIVisible;
-(id)accessibilitySharedFocusElements;
-(char)isOpaque;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(id)_textAttributes;
-(void)endEditing:(id)arg1 ;
@end
