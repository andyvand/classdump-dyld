/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <PDFKit/NSCopying.h>
#import <PDFKit/NSCoding.h>

@class PDFAnnotationMarkupPrivateVars;

@interface PDFAnnotationMarkup : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationMarkupPrivateVars* _pdfPriv2;

}
-(void)commonInit;
-(void)drawWithBox:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isMarkupAnnotation;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)secondaryInit;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(char)supportsNSCoding;
-(long long)markupType;
-(void)setMarkupType:(long long)arg1 ;
-(id)quadrilateralPoints;
-(void)setQuadrilateralPoints:(id)arg1 ;
-(void)setQuadPointsFromArray:(CGPDFArrayRef)arg1 ;
-(void)addQuadPointsToDictionaryRef:(CFDictionaryRef)arg1 ;
@end

