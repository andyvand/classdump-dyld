/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <AppKit/NSView.h>

@class PDFAnnotationPopup, NSTrackingArea;

@interface PDFPopupView : NSView {

	PDFAnnotationPopup* _annotation;
	NSTrackingArea* _trackingArea;
	long long _tooltipTag;
	id _delegate;
	char _editing;

}
-(char)editing;
-(id)annotation;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)delegate;
-(char)isOpaque;
-(void)mouseDown:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)setEditing:(char)arg1 ;
-(id)initWithAnnotation:(id)arg1 ;
-(void)removeTooltip;
-(void)addTooltip;
-(void)selfDidResize:(id)arg1 ;
-(void)trackCloseHit;
-(long long)compareFrameCenters:(id)arg1 ;
@end

