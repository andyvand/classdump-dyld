/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/ProApps/Internal Plug-Ins/BrowserKit/FileSystem.bkplugin/Contents/MacOS/FileSystem
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FileSystem/FileSystem-Structs.h>
#import <BrowserKit/BKItemsModule.h>

@class BKNavSplitViewController, NSProNavSplitView;

@interface BKFileSystemBrowserModule : BKItemsModule {

	BKNavSplitViewController* _splitViewController;
	NSProNavSplitView* _splitView;
	char _blockSelectionPathUpdates;

}
+(id)defaultModuleNibName;
-(char)itemsLoading;
-(id)selectedFolderItems;
-(id)sidebarModule;
-(void)moduleViewWasInstalled:(id)arg1 ;
-(CGSize)viewMinSize;
-(void)setSelectedItems:(id)arg1 ;
-(id)contentModule;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)selectedItems;
-(void)awakeFromNib;
@end
