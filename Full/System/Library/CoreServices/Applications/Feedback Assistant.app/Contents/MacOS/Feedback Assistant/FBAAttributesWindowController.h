/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSMutableArray, FBAAttributeRepository, NSTableView, NSArrayController, NSButton, NSProgressIndicator, FBAMainWindowController;

@interface FBAAttributesWindowController : NSWindowController {

	char _sheetOpened;
	NSMutableArray* _detectedAttributes;
	FBAAttributeRepository* _attributeRepository;
	NSTableView* _attributesTableView;
	NSArrayController* _attributesController;
	NSButton* _refreshAttributesButton;
	NSButton* _submitAttributesButton;
	NSProgressIndicator* _progressIndicator;
	FBAMainWindowController* _parentWindowController;

}

@property (retain) NSMutableArray * detectedAttributes;                                            //@synthesize detectedAttributes=_detectedAttributes - In the implementation block
@property (retain) FBAAttributeRepository * attributeRepository;                                   //@synthesize attributeRepository=_attributeRepository - In the implementation block
@property (__weak) NSTableView * attributesTableView;                                              //@synthesize attributesTableView=_attributesTableView - In the implementation block
@property (retain) NSArrayController * attributesController;                                       //@synthesize attributesController=_attributesController - In the implementation block
@property (__weak) NSButton * refreshAttributesButton;                                             //@synthesize refreshAttributesButton=_refreshAttributesButton - In the implementation block
@property (__weak) NSButton * submitAttributesButton;                                              //@synthesize submitAttributesButton=_submitAttributesButton - In the implementation block
@property (__weak) NSProgressIndicator * progressIndicator;                                        //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic,__weak) FBAMainWindowController * parentWindowController;              //@synthesize parentWindowController=_parentWindowController - In the implementation block
@property (assign) char sheetOpened;                                                               //@synthesize sheetOpened=_sheetOpened - In the implementation block
-(void)setDetectedAttributes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)detectedAttributes;
-(void)submitAttributes:(id)arg1 ;
-(void)openSheetForWindow:(id)arg1 ;
-(void)attributesDidScan:(id)arg1 ;
-(void)attributesDetectedChanges:(id)arg1 ;
-(void)attributesDidSubmit:(id)arg1 ;
-(void)attributesError:(id)arg1 ;
-(void)setAttributeRepository:(FBAAttributeRepository *)arg1 ;
-(void)setSheetOpened:(char)arg1 ;
-(NSButton *)submitAttributesButton;
-(void)refreshAttributes:(id)arg1 ;
-(NSButton *)refreshAttributesButton;
-(char)canSubmitAttributes;
-(FBAMainWindowController *)parentWindowController;
-(void)closeSheet:(id)arg1 ;
-(void)refreshAttributesIfExpired;
-(FBAAttributeRepository *)attributeRepository;
-(NSTableView *)attributesTableView;
-(void)setAttributesTableView:(NSTableView *)arg1 ;
-(NSArrayController *)attributesController;
-(void)setAttributesController:(NSArrayController *)arg1 ;
-(void)setRefreshAttributesButton:(NSButton *)arg1 ;
-(void)setSubmitAttributesButton:(NSButton *)arg1 ;
-(void)setParentWindowController:(FBAMainWindowController *)arg1 ;
-(char)sheetOpened;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didPresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(unsigned long long)arg2 contextInfo:(void*)arg3 ;
-(void)windowDidLoad;
-(void)setParent:(id)arg1 ;
-(NSProgressIndicator *)progressIndicator;
@end
