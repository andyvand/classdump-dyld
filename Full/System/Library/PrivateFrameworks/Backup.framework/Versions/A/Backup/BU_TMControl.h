/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSView, NSString;

@interface BU_TMControl : CALayer {

	NSView* fParent;
	BOOL fEnabled;
	long long fValue;
	long long fMin;
	long long fMax;
	NSString* fHelpString;
	TString* fTitle;
	id fTarget;
	SEL fAction;
	double fDisabledAlpha;
	double fRedrawDuration;

}
+(id)controlWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setValue:(long long)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(long long)value;
-(id)helpString;
-(BOOL)valueWillChange:(long long)arg1 ;
-(void)valueDidChange:(long long)arg1 ;
-(void)setHelpString:(id)arg1 ;
-(void)setAlphaForDisabledAppearance:(double)arg1 ;
-(void)setTarget:(id)arg1 andAction:(SEL)arg2 ;
-(BOOL)pixelAccurateHitTest:(CGPoint)arg1 ;
-(BOOL)mouseDownAtPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(BOOL)mouseUpAtPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(void)mouseMovedToPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(BOOL)mouseDraggedToPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(void)scrollByX:(double)arg1 byY:(double)arg2 withModifiers:(unsigned)arg3 ;
-(void)setRedrawDuration:(double)arg1 ;
-(void)setMin:(long long)arg1 ;
-(void)setMax:(long long)arg1 ;
-(long long)min;
-(long long)max;
@end

