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

@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationFreeTextPrivateVars* _pdfPriv2;

}
-(void)commonInit;
-(id)fontColor;
-(void)setFontColor:(id)arg1 ;
-(void)drawWithBox:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)font;
-(void)setFont:(id)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(unsigned long long)alignment;
-(void)setPage:(id)arg1 ;
-(char)isMarkupAnnotation;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)secondaryInit;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(char)supportsNSCoding;
-(id)controlRepresentation;
@end

