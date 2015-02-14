/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSSavePanel.h>

@class NSArray;

@interface NSOpenPanel : NSSavePanel {

	char _reservedOpenPanel[4];
	void* _privateOpenPanel;

}

@property (copy,readonly) NSArray * URLs; 
@property (assign) char resolvesAliases; 
@property (assign) char canChooseDirectories; 
@property (assign) char allowsMultipleSelection; 
@property (assign) char canChooseFiles; 
@property (assign) char canResolveUbiquitousConflicts; 
@property (assign) char canDownloadUbiquitousContents; 
+(id)openPanel;
-(void)_dismissModalForTerminate;
-(void)newDocument:(id)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)setCanChooseFiles:(char)arg1 ;
-(void)setCanChooseDirectories:(char)arg1 ;
-(void)setCanResolveUbiquitousConflicts:(char)arg1 ;
-(NSArray *)URLs;
-(id)filenames;
-(char)canChooseFiles;
-(char)resolvesAliases;
-(void)setResolvesAliases:(char)arg1 ;
-(char)canChooseDirectories;
-(char)canResolveUbiquitousConflicts;
-(char)canDownloadUbiquitousContents;
-(void)setCanDownloadUbiquitousContents:(char)arg1 ;
-(void)_initSaveMode;
-(char)preventsApplicationTerminationWhenModal;
-(void)_registerKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2 ;
-(void)_unregisterKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2 ;
@end

