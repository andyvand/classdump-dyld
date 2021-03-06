/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Localization.prefPane/Contents/MacOS/Localization
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSTextField, NSTableView, NSButton, NSArrayController, IPKeyboardLayoutWebView, NSArray, NSMutableArray;

@interface IPAddInputSourceSheetController : NSWindowController {

	NSTextField* _instructionText;
	NSTableView* _tableView;
	NSButton* _addButton;
	NSArrayController* _inputSourcesArrayController;
	IPKeyboardLayoutWebView* _keyboardLayoutView;
	NSTextField* _keyboardLayoutNotAvailableText;
	NSArray* _languages;
	NSMutableArray* _inputSources;
	/*^block*/id _didEndBlock;

}

@property (__weak) NSTextField * instructionText;                                //@synthesize instructionText=_instructionText - In the implementation block
@property (__weak) NSTableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (__weak) NSButton * addButton;                                         //@synthesize addButton=_addButton - In the implementation block
@property (__weak) NSArrayController * inputSourcesArrayController;              //@synthesize inputSourcesArrayController=_inputSourcesArrayController - In the implementation block
@property (__weak) IPKeyboardLayoutWebView * keyboardLayoutView;                 //@synthesize keyboardLayoutView=_keyboardLayoutView - In the implementation block
@property (__weak) NSTextField * keyboardLayoutNotAvailableText;                 //@synthesize keyboardLayoutNotAvailableText=_keyboardLayoutNotAvailableText - In the implementation block
@property (retain) NSArray * languages;                                          //@synthesize languages=_languages - In the implementation block
@property (readonly) NSArray * inputSourcesSortDescriptors; 
@property (nonatomic,retain) NSMutableArray * inputSources;                      //@synthesize inputSources=_inputSources - In the implementation block
@property (copy) id didEndBlock;                                                 //@synthesize didEndBlock=_didEndBlock - In the implementation block
+(void)runSheetForWindow:(id)arg1 languages:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSTextField *)keyboardLayoutNotAvailableText;
-(void)setInputSources:(NSMutableArray *)arg1 ;
-(NSArrayController *)inputSourcesArrayController;
-(void)setInputSourcesArrayController:(NSArrayController *)arg1 ;
-(void)setKeyboardLayoutNotAvailableText:(NSTextField *)arg1 ;
-(void)setDidEndBlock:(id)arg1 ;
-(id)didEndBlock;
-(void)doAdd:(id)arg1 ;
-(NSTextField *)instructionText;
-(void)enableInputSources:(id)arg1 ;
-(IPKeyboardLayoutWebView *)keyboardLayoutView;
-(void)runSheetForWindow:(id)arg1 languages:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setKeyboardLayoutView:(IPKeyboardLayoutWebView *)arg1 ;
-(void)setInstructionText:(NSTextField *)arg1 ;
-(NSArray *)inputSourcesSortDescriptors;
-(NSButton *)addButton;
-(void)setAddButton:(NSButton *)arg1 ;
-(NSMutableArray *)inputSources;
-(void)doCancel:(id)arg1 ;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(NSTableView *)tableView;
-(void)doDoubleClick:(id)arg1 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)setTableView:(NSTableView *)arg1 ;
@end

