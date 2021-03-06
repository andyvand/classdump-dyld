/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCGSContext.h>
#import <AppKit/NSPrintGraphicsContextAdvancing.h>

@class NSPrintInfo, NSFocusStack;

@interface NSPrintSpoolingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing> {

	NSPrintInfo* _printInfo;
	NSFocusStack* _focusStack;
	char _needsToEndDocument;
	CGContextRef _blackHoleContext;

}
-(void)finalize;
-(void)dealloc;
-(void*)graphicsPort;
-(id)focusStack;
-(char)isDrawingToScreen;
-(id)attributes;
-(void)setFocusStack:(id)arg1 ;
-(id)initWithPrintInfo:(id)arg1 ;
-(void)endDocument;
-(void)beginDocumentWithTitle:(id)arg1 ;
-(void)beginPageWithBounds:(CGRect)arg1 ;
-(void)endPage;
@end

