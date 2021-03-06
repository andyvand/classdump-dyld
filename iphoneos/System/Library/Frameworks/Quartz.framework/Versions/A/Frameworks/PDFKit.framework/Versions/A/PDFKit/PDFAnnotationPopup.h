/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <PDFKit/NSCopying.h>
#import <PDFKit/NSCoding.h>

@class PDFAnnotationPopupPrivateVars;

@interface PDFAnnotationPopup : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationPopupPrivateVars* _pdfPriv2;

}
+(double)minimumHeight;
+(double)minimumWidth;
+(CGRect)fillableRectForBounds:(CGRect)arg1 ;
+(CGRect)contentRectForBounds:(CGRect)arg1 ;
+(CGRect)contentRectForBoundsNoClose:(CGRect)arg1 ;
+(CGRect)closeboxRectForBounds:(CGRect)arg1 ;
+(CGRect)extraTextRectForBounds:(CGRect)arg1 ;
+(CGRect)titlebarRectForBounds:(CGRect)arg1 ;
+(CGRect)resizeRectForBounds:(CGRect)arg1 ;
-(void)commonInit;
-(void)setIsOpen:(char)arg1 ;
-(void)drawWithBox:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)setPopup:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)dealloc;
-(id)contents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)font;
-(void)setFont:(id)arg1 ;
-(char)isHighlighted;
-(void)setHighlighted:(char)arg1 ;
-(id)color;
-(id)modificationDate;
-(char)isOpen;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(char)shouldPrint;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)secondaryInit;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(char)supportsNSCoding;
-(id)controlRepresentation;
-(void)addOpenToDictionaryRef:(CFDictionaryRef)arg1 ;
-(char)drawsCloseWidget;
-(void)setDrawsCloseWidget:(char)arg1 ;
-(char)drawsText;
-(void)setDrawsText:(char)arg1 ;
-(CGRect)adjustedRectForBox:(long long)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 ;
@end

