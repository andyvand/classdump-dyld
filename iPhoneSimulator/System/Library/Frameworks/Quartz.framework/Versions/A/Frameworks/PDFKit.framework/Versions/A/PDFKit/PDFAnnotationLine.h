/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <PDFKit/NSCopying.h>
#import <PDFKit/NSCoding.h>

@class PDFAnnotationLinePrivateVars;

@interface PDFAnnotationLine : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationLinePrivateVars* _pdfPriv2;

}
-(void)commonInit;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)drawWithBox:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(char)isMarkupAnnotation;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)secondaryInit;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(char)supportsNSCoding;
-(id)interiorColor;
-(void)setInteriorColor:(id)arg1 ;
-(long long)startLineStyle;
-(long long)endLineStyle;
-(void)setStartLineStyle:(long long)arg1 ;
-(void)setEndLineStyle:(long long)arg1 ;
-(void)addLineToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addLineEndingStylesToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)drawArrowFrom:(CGPoint)arg1 to:(CGPoint)arg2 open:(char)arg3 inContext:(CGContextRef)arg4 ;
-(void)drawBulletAtPoint:(CGPoint)arg1 shape:(int)arg2 inContext:(CGContextRef)arg3 ;
@end

