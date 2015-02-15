/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <AppKit/NSView.h>

@interface PDFThumbnailDisplayView : NSView {

	id _parent;

}
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)isFlipped;
-(void)setParent:(id)arg1 ;
-(void)drawThumbnailIndex:(unsigned long long)arg1 inRect:(CGRect)arg2 thumbSize:(CGSize)arg3 forFont:(id)arg4 attributes:(unsigned long long)arg5 ;
-(id)positionValueForAccessibleChildAtIndex:(unsigned long long)arg1 ;
-(id)sizeValueForAccessibleChildAtIndex:(unsigned long long)arg1 ;
-(id)titleForAccessibleChildAtIndex:(unsigned long long)arg1 ;
-(void)performActionForAccessibleChildAtIndex:(unsigned long long)arg1 ;
-(void)setFocusValue:(id)arg1 forAccessibleChildAtIndex:(unsigned long long)arg2 ;
@end
