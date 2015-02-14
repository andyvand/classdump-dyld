/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSCopying.h>

@class PDFDestinationPrivateVars;

@interface PDFDestination : NSObject <NSCopying> {

	PDFDestinationPrivateVars* _pdfPriv;

}
-(void)commonInit;
-(double)bottom;
-(void)setBottom:(double)arg1 ;
-(double)left;
-(void)setLeft:(double)arg1 ;
-(double)right;
-(void)setRight:(double)arg1 ;
-(double)top;
-(void)setTop:(double)arg1 ;
-(void)setZoom:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(id)document;
-(long long)compare:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setPage:(id)arg1 ;
-(id)page;
-(id)initWithPage:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(CFArrayRef)createArrayRef;
-(double)zoom;
-(CGPoint)point;
@end

