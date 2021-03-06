/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSViewController, NSMatrix, NSPopUpButton, NSView, NSPDFInfo;

@interface NSPDFPanelAccessoryViewController : NSViewController {

	NSViewController* _customAccessoryViewController;
	NSMatrix* _orientationMatrix;
	NSPopUpButton* _pageSizePopup;
	NSView* _pageSizeContainer;
	NSView* _orientationContainer;
	char showOrientation;
	char showPaperSize;

}

@property (readonly) NSPDFInfo * pdfInfo; 
-(void)dealloc;
-(void)loadView;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_printInfo;
-(void)setOrientation:(id)arg1 ;
-(void)_setPrintInfo:(id)arg1 ;
-(id)initWithOptions:(long long)arg1 customAccessoryViewController:(id)arg2 ;
-(NSPDFInfo *)pdfInfo;
-(id)populateMenu:(id)arg1 withPaperList:(id)arg2 ;
-(void)changePaper:(id)arg1 ;
@end

