/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPrintingDelegate;
@class NSWindow, ABPrintPreviewView, NSBox, NSPopUpButton, NSProgressIndicator, ABPrintingAccessoryController, NSViewController, ABPrintingMode, NSMenu, NSArray;

@interface ABPrintingController : NSObject {

	NSWindow* fakeWindow;
	ABPrintPreviewView* previewArea;
	NSBox* styleBox;
	NSPopUpButton* styleChooser;
	NSProgressIndicator* spinner;
	ABPrintingAccessoryController* _settingsAccessoryViewController;
	NSViewController* _previewAccessoryViewController;
	ABPrintingMode* _currentMode;
	NSMenu* _sharedPaperMenu;
	id<ABPrintingDelegate> _printingDelegate;
	NSArray* _topLevelNibObjects;

}

@property (readonly) id<ABPrintingDelegate> printingDelegate;              //@synthesize printingDelegate=_printingDelegate - In the implementation block
@property (copy) NSArray * topLevelNibObjects;                             //@synthesize topLevelNibObjects=_topLevelNibObjects - In the implementation block
-(id<ABPrintingDelegate>)printingDelegate;
-(id)itemInMenu:(id)arg1 matchingDescription:(id)arg2 ;
-(void)spin:(char)arg1 ;
-(void)chosePaperSize:(id)arg1 ;
-(id)paperListMenuForMode:(id)arg1 ;
-(void)print;
-(id)photoStore;
-(void)chooseStyleMode:(id)arg1 ;
-(void)printPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)isPrintInfoCreatingPDF:(id)arg1 ;
-(void)sendMessageTracerLogWithPDF:(char)arg1 ;
-(id)menuItemForPaperDictionary:(id)arg1 ;
-(void)setTopLevelNibObjects:(NSArray *)arg1 ;
-(NSArray *)topLevelNibObjects;
-(void)finalize;
-(void)dealloc;
-(id)window;
-(void)runPageLayout:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)awakeFromNib;
-(void)populateMenu:(id)arg1 withPaperList:(id)arg2 ;
-(id)previewView;
-(id)people;
@end

