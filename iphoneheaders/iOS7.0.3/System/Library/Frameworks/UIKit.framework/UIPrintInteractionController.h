/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIPrintInfo, , UIPrintPageRenderer, UIPrintFormatter, NSArray, UIPrintPaper, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	UIPrintInfo* _printInfo;
	<UIPrintInteractionControllerDelegate>* _delegate;
	BOOL _showsPageRange;
	BOOL _hidesNumberOfCopies;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	UIPrintPaper* _printPaper;
	/*^block*/ id _completionHandler;
	unsigned _backgroundTaskIdentifier;
	id _printState;

}

@property (nonatomic,retain) UIPrintInfo * printInfo;                                        //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic) <UIPrintInteractionControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsPageRange;                                            //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) BOOL showsNumberOfCopies; 
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                    //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                        //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                              //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                  //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                          //@synthesize printingItems=_printingItems - In the implementation block
@property (nonatomic,readonly) int pageCount; 
@property (assign,nonatomic) NSRange pageRange; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIPrintPaper * paper; 
+(BOOL)isPrintingAvailable;
+(id)sharedPrintController;
+(id)printableUTIs;
+(BOOL)canPrintURL:(id)arg1 ;
+(BOOL)canPrintData:(id)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)_init;
-(int)pageCount;
-(id)printInfo;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)setPrintPageRenderer:(id)arg1 ;
-(id)printPageRenderer;
-(id)_currentPrintInfo;
-(void)setPrinter:(id)arg1 ;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismiss:(BOOL)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_updatePageCount;
-(NSRange)pageRange;
-(void)setPageRange:(NSRange)arg1 ;
-(CGSize)_printItemContentSize;
-(id)paper;
-(void)setPaper:(id)arg1 ;
-(BOOL)_canShowDuplex;
-(BOOL)_canShowPageRange;
-(BOOL)_canShowCopies;
-(BOOL)_canShowPaperList;
-(id)printer;
-(void)_cleanPrintState;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(BOOL)_setupPrintPanel:(/*^block*/ id)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_updatePrintPaper;
-(void)_endPrintJob:(BOOL)arg1 error:(id)arg2 ;
-(void)_startPrinting;
-(void)_setPrintInfoState:(int)arg1 ;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(int)arg2 ;
-(id)_paperForContentType:(int)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(BOOL)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(BOOL)arg1 ;
-(void)setPrintInfo:(id)arg1 ;
-(BOOL)showsPageRange;
-(void)setShowsPageRange:(BOOL)arg1 ;
-(id)printPaper;
-(id)printFormatter;
-(void)setPrintFormatter:(id)arg1 ;
-(id)printingItem;
-(id)printingItems;
-(void)setPrintingItems:(id)arg1 ;
-(void)_enableManualPrintPage:(BOOL)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
@end
