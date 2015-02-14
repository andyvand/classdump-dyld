/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFSelection, PDFPage, PDFAnnotation;

@interface PDFSelectionTrackingData : NSObject {

	PDFSelection* extendingSelection;
	long long selectionMode;
	PDFPage* startPage;
	CGPoint startPoint;
	CGRect marquee;
	char highlighted;
	PDFAnnotation* annotation;

}

@property (retain) PDFSelection * extendingSelection; 
@property (assign) long long selectionMode; 
@property (retain) PDFPage * startPage; 
@property (assign) CGPoint startPoint; 
@property (assign) CGRect marquee; 
@property (assign) char highlighted; 
@property (retain) PDFAnnotation * annotation; 
-(PDFAnnotation *)annotation;
-(void)setAnnotation:(PDFAnnotation *)arg1 ;
-(char)highlighted;
-(void)setHighlighted:(char)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(long long)selectionMode;
-(void)setSelectionMode:(long long)arg1 ;
-(PDFSelection *)extendingSelection;
-(void)setExtendingSelection:(PDFSelection *)arg1 ;
-(PDFPage *)startPage;
-(void)setStartPage:(PDFPage *)arg1 ;
-(CGRect)marquee;
-(void)setMarquee:(CGRect)arg1 ;
@end

