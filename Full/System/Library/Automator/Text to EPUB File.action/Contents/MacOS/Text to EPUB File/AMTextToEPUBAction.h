/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:23:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Text to EPUB File.action/Contents/MacOS/Text to EPUB File
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Text to EPUB File/Text to EPUB File-Structs.h>
#import <Automator/AMBundleAction.h>
#import <Text to EPUB File/NSTableViewDataSource.h>
#import <Text to EPUB File/NSTableViewDelegate.h>
#import <Text to EPUB File/NSOpenSavePanelDelegate.h>

@class NSMutableArray, NSButton, NSTableView, NSString;

@interface AMTextToEPUBAction : AMBundleAction <NSTableViewDataSource, NSTableViewDelegate, NSOpenSavePanelDelegate> {

	NSMutableArray* _paths;
	NSMutableArray* _fileContents;
	char _isPaused;
	NSButton* removeButton;
	NSTableView* table;

}

@property (retain) NSMutableArray * paths;                          //@synthesize paths=_paths - In the implementation block
@property (retain) NSMutableArray * fileContents;                   //@synthesize fileContents=_fileContents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileContents:(NSMutableArray *)arg1 ;
-(id)scaleImageAtURL:(id)arg1 toSize:(long long)arg2 error:(id*)arg3 ;
-(void)finishRunningWithErrorMessage:(id)arg1 ;
-(id)createXHTMLDocumentForChapter:(id)arg1 withTitle:(id)arg2 ;
-(char)zip:(id)arg1 error:(id*)arg2 ;
-(id)mediaElementForMediaURL:(id)arg1 ;
-(id)excludedElements;
-(void)_setItems:(id)arg1 ;
-(id)XMLDocumentForResource:(id)arg1 withExtension:(id)arg2 ;
-(NSMutableArray *)fileContents;
-(id)getProperty:(id)arg1 fromString:(id)arg2 ;
-(id)uniqueURLForDestinationPath:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)parametersUpdated;
-(void)opened;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)add:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)_items;
@end
