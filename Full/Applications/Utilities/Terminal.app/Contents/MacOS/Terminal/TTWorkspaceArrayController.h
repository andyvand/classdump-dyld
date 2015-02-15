/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:29:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSArrayController.h>
#import <Terminal/NSOpenSavePanelDelegate.h>

@class NSTableView, NSString;

@interface TTWorkspaceArrayController : NSArrayController <NSOpenSavePanelDelegate> {

	NSTableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)importPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)canExport;
-(void)willChangeValuesForArrangedKeys:(char)arg1 objectKeys:(char)arg2 indexKeys:(char)arg3 ;
-(void)didChangeValuesForArrangedKeys:(char)arg1 objectKeys:(char)arg2 indexKeys:(char)arg3 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3 ;
-(void)awakeFromNib;
-(char)panel:(id)arg1 shouldShowFilename:(id)arg2 ;
-(void)export:(id)arg1 ;
-(void)import:(id)arg1 ;
@end
