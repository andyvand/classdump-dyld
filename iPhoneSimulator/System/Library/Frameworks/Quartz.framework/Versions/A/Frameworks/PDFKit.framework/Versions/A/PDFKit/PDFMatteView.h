/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <AppKit/NSView.h>

@class PDFView;

@interface PDFMatteView : NSView {

	PDFView* _pdfView;

}
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(char)isOpaque;
-(id)menuForEvent:(id)arg1 ;
-(CGRect)rectForSmartMagnificationAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)drawPDFHighLevel:(id)arg1 ;
-(void)setPDFView:(id)arg1 ;
@end

