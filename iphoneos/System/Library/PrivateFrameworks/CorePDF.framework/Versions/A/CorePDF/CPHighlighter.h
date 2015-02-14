/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTextLine;

@interface CPHighlighter : NSObject {

	CPZone* boundingZone;
	CPTextLine* textLine;
	CGColorRef color;
	CPPDFStyle* style;
	CPPDFStyle* highlightedStyle;

}

@property (nonatomic,readonly) CGColorRef color; 
@property (assign,nonatomic) CPPDFStyle* style; 
@property (assign,nonatomic) CPPDFStyle* highlightedStyle; 
+(char)reconstructHighlightFor:(id)arg1 ;
-(CPPDFStyle*)highlightedStyle;
-(void)setHighlightedStyle:(CPPDFStyle*)arg1 ;
-(id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(CGColorRef)arg3 ;
-(void)highlight;
-(CPPDFStyle*)style;
-(CGColorRef)color;
-(void)setStyle:(CPPDFStyle*)arg1 ;
@end

