/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSCopying.h>

@class PDFPagePrivateVars;

@interface PDFPage : NSObject <NSCopying> {

	PDFPagePrivateVars* _pdfPriv;

}
+(id)fontWithPDFFont:(CGPDFFontRef)arg1 size:(float)arg2 ;
-(CGPDFPageRef)pageRef;
-(void)removeAnnotation:(id)arg1 ;
-(CGRect)boundsForBox:(long long)arg1 ;
-(void)drawWithBox:(long long)arg1 ;
-(double)lastRenderTime;
-(id)dataRepresentation;
-(id)annotations;
-(void)addAnnotation:(id)arg1 ;
-(id)thumbnailOfSize:(CGSize)arg1 forBox:(long long)arg2 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithPageRef:(CGPDFPageRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)string;
-(id)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)document;
-(void)setView:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(CGPDFLayoutRef)pageLayout;
-(void)setDocument:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(long long)rotation;
-(id)label;
-(char)columnAtPoint:(CGPoint)arg1 ;
-(void)setRotation:(long long)arg1 ;
-(id)attributedString;
-(char)displaysAnnotations;
-(void)setDisplaysAnnotations:(char)arg1 ;
-(void)resetAnnotations;
-(void)setBounds:(CGRect)arg1 forBox:(long long)arg2 ;
-(char)enqueuedForLayout;
-(opaque_pthread_t*)threadFetchingLayout;
-(char)setPageRef:(CGPDFPageRef)arg1 ;
-(unsigned long long)numberOfCharacters;
-(id)selectionForAll;
-(id)selectionForRange:(NSRange)arg1 ;
-(id)unsupportedFeatures;
-(CFDictionaryRef)gcCreateBoxDictionary;
-(void)drawBurnedInAnnotationsWithBox:(long long)arg1 ;
-(void)setEnqueuedForDataDetection:(char)arg1 ;
-(char)hasRunDataDetectors;
-(void)scanData:(id)arg1 ;
-(void)setEnqueuedForLayout:(char)arg1 ;
-(void)pageLayoutInvokation;
-(id)selectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 type:(int)arg3 ;
-(id)selectionFromPointToBottom:(CGPoint)arg1 type:(int)arg2 ;
-(id)selectionFromTopToPoint:(CGPoint)arg1 type:(int)arg2 ;
-(void)noteUnsupportedFeature:(id)arg1 ;
-(id)scannedAnnotations;
-(char)enqueuedForDataDetection;
-(char)pageLayoutIsSlow;
-(void)releaseDisplayList;
-(void)lazilyLoadAnnotationsWithView:(id)arg1 ;
-(void)sortAnnotations:(id)arg1 ;
-(void)addAnnotationFormField:(id)arg1 ;
-(id)transformForBox:(long long)arg1 ;
-(void)loadTextChars;
-(id)createAttributedStringCP;
-(char)writeToConsumer:(CGDataConsumerRef)arg1 ;
-(id)annotationAtPoint:(CGPoint)arg1 ;
-(void)transformContextForBox:(long long)arg1 ;
-(CGRect)characterBoundsAtIndex:(long long)arg1 ;
-(long long)characterIndexAtPoint:(CGPoint)arg1 ;
-(id)selectionForRect:(CGRect)arg1 ;
-(id)selectionForWordAtPoint:(CGPoint)arg1 ;
-(id)selectionForLineAtPoint:(CGPoint)arg1 ;
-(id)selectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)purgePageLayout;
-(void)lazilyLoadAnnotations;
-(CGAffineTransform)getDrawingTransformForBox:(long long)arg1 ;
-(void)drawAnnotationsWithBox:(long long)arg1 ;
-(void)drawPopupAnnotationsWithBox:(long long)arg1 ;
-(void)createDisplayList;
-(void)purgeAll;
-(id)selectionForCodeRange:(NSRange)arg1 ;
-(void)fetchPageLayoutOnThread:(id)arg1 ;
-(void)setPageLayoutIsSlow:(char)arg1 ;
-(void)setThreadFetchingLayout:(opaque_pthread_t*)arg1 ;
-(void)setPageLayout:(CGPDFLayoutRef)arg1 ;
-(CGPDFLayoutRef)pageLayoutIfAvail;
-(void)getAnnotations;
-(void)getAnnotationsWithView:(id)arg1 ;
-(void)addScannedAnnotation:(id)arg1 ;
-(void)scanAddedAnnotations;
-(CGRect)normalizeRect:(CGRect)arg1 ;
-(char)hasCropBox;
-(char)hasBleedBox;
-(char)hasTrimBox;
-(char)hasArtBox;
-(id)createAttributedString;
-(void)setDrawsPopups:(char)arg1 ;
-(long long)nativeRotation;
-(CGRect)rectangleOfInterestAtPoint:(CGPoint)arg1 ;
-(void)tossAnnotations;
-(char)moveAnnotationToEnd:(id)arg1 ;
-(void)setDisplaysMarkupAnnotations:(char)arg1 ;
-(id)scannedAnnotationAtPoint:(CGPoint)arg1 ;
-(char)hasOpenPopups;
-(void)cacheAttributedString;
-(char)columnAtPointIfAvailable:(CGPoint)arg1 ;
@end

