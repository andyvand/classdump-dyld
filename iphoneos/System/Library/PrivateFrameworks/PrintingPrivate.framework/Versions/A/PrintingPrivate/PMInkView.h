/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintingPrivate/PrintingPrivate-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface PMInkView : NSView {

	NSImage* cautionIconImage;
	OpaquePMPrinterRef _printer;

}

@property (assign) OpaquePMPrinterRef printer;              //@synthesize printer=_printer - In the implementation block
-(void)airprintButtonSelected:(id)arg1 ;
-(id)addStaticText:(id)arg1 withFrame:(CGRect)arg2 alignment:(unsigned long long)arg3 tooltip:(id)arg4 ;
-(double)addColor:(id)arg1 at:(CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4 warning:(id)arg5 ;
-(double)addSRGBColor:(id)arg1 at:(CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4 warning:(id)arg5 ;
-(void)addLowInkBadgeAt:(CGPoint)arg1 withTooltip:(id)arg2 ;
-(id)addAirPrintSuppliesButtonAt:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)markerChangeTimeString:(id)arg1 ;
-(id)addTextViewForString:(id)arg1 at:(CGPoint)arg2 withAttrs:(id)arg3 width:(double)arg4 maxLines:(int)arg5 ;
-(id)getWarningToolTip:(id)arg1 ;
-(double)addConsumablesDict:(id)arg1 at:(CGPoint)arg2 withAttrs:(id)arg3 titleWidth:(double)arg4 warning:(id)arg5 ;
-(void)setSuppliesInfo:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(OpaquePMPrinterRef)printer;
-(void)setPrinter:(OpaquePMPrinterRef)arg1 ;
@end

