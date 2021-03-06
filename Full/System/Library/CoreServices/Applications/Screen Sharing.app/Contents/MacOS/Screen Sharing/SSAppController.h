/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Screen Sharing.app/Contents/MacOS/Screen Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Screen Sharing/SSAppDelegate.h>

@class NSWindow, NSMenu, NSMenuItem, NSString;

@interface SSAppController : NSObject <SSAppDelegate> {

	char mShouldShowQuitWarning;
	NSWindow* mPrefPanel;
	NSMenu* _connectionMenu;
	NSMenuItem* _audioChatMutedSeparatorMenuItem;
	NSMenuItem* _audioChatMutedMenuItem;

}

@property (retain) NSMenu * connectionMenu;                                   //@synthesize connectionMenu=_connectionMenu - In the implementation block
@property (retain) NSMenuItem * audioChatMutedSeparatorMenuItem;              //@synthesize audioChatMutedSeparatorMenuItem=_audioChatMutedSeparatorMenuItem - In the implementation block
@property (retain) NSMenuItem * audioChatMutedMenuItem;                       //@synthesize audioChatMutedMenuItem=_audioChatMutedMenuItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAboutPanel:(id)arg1 ;
-(void)updateMenus:(id)arg1 ;
-(void)adaptiveQualityClicked:(id)arg1 ;
-(void)fullQualityClicked:(id)arg1 ;
-(void)logToMessageTracer;
-(void)registerAppDefaults;
-(void)_setMenuBarDelay:(double)arg1 ;
-(void)saveWindowStates;
-(void)scaleClicked:(id)arg1 ;
-(NSMenuItem *)audioChatMutedMenuItem;
-(NSMenu *)connectionMenu;
-(NSMenuItem *)audioChatMutedSeparatorMenuItem;
-(void)openURLString:(id)arg1 ;
-(void)quitFromMenu:(id)arg1 ;
-(void)newConnection:(id)arg1 ;
-(void)openVNCFile:(id)arg1 ;
-(void)showFileTransferWindow:(id)arg1 ;
-(void)setConnectionMenu:(NSMenu *)arg1 ;
-(void)setAudioChatMutedSeparatorMenuItem:(NSMenuItem *)arg1 ;
-(void)setAudioChatMutedMenuItem:(NSMenuItem *)arg1 ;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)showPreferences:(id)arg1 ;
-(char)wasLaunchedOnDemand;
-(void)openURL:(id)arg1 withRestorableState:(id)arg2 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(unsigned long long)applicationShouldTerminate:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)showHelp:(id)arg1 ;
-(void)awakeFromNib;
-(void)clearRecentDocuments:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)openURL:(id)arg1 ;
-(char)applicationShouldTerminateAfterLastWindowClosed:(id)arg1 ;
@end

