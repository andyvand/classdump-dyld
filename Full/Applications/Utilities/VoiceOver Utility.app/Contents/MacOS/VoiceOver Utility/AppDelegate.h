/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:31:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/VoiceOver Utility.app/Contents/MacOS/VoiceOver Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VoiceOverOptions, NSSet, NSView, NSPopUpButton, NSMenu, NSString, NSMenuItem;

@interface AppDelegate : NSObject {

	VoiceOverOptions* _voiceOverOptions;
	NSSet* _prefSelectorSet;
	NSView* _exportAccessoryView;
	NSPopUpButton* _exportTypeSelection;
	NSMenu* _viewMenu;
	NSString* _exportFileName;
	NSMenuItem* _exportTypeMenuItemLast;

}
-(void)createPortablePreferences:(id)arg1 ;
-(void)handleUnassignCommandForMenuItem:(id)arg1 ;
-(void)handleReassignFactoryCommandForMenuItem:(id)arg1 ;
-(void)handleAssignCommandForMenuItem:(id)arg1 ;
-(void)handleAssignCustomOpenWithCommandForMenuItem:(id)arg1 ;
-(void)showGeneralPane:(id)arg1 ;
-(void)showVerbosityPane:(id)arg1 ;
-(void)showSpeechPane:(id)arg1 ;
-(void)showNavigationPane:(id)arg1 ;
-(void)showWebPane:(id)arg1 ;
-(void)showAudioPane:(id)arg1 ;
-(void)showVisualsPane:(id)arg1 ;
-(void)showCommanderPane:(id)arg1 ;
-(void)showBraillePane:(id)arg1 ;
-(void)showActivitiesPane:(id)arg1 ;
-(void)moveToSearchField:(id)arg1 ;
-(void)resetActivitiesPreferences:(id)arg1 ;
-(void)resetHotspots:(id)arg1 ;
-(void)resetKeyboardPreferences:(id)arg1 ;
-(void)resetCustomLabels:(id)arg1 ;
-(void)resetNumpadPreferences:(id)arg1 ;
-(void)resetPronunciationPreferences:(id)arg1 ;
-(void)resetQuickNavPreferences:(id)arg1 ;
-(void)resetWebspots:(id)arg1 ;
-(void)_warnUserBeforeImport:(id)arg1 ;
-(void)_tellUserImportFailedForFile:(id)arg1 ;
-(void)_importWarningDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_tellUserImportFailedWithError:(id)arg1 ;
-(void)_tellUserImportFailedWithMessage:(id)arg1 ;
-(void)_exportToPath:(id)arg1 ;
-(void)showAboutPanel:(id)arg1 ;
-(void)showKeyCommands:(id)arg1 ;
-(void)showGestureCommands:(id)arg1 ;
-(void)showQuickNavCommands:(id)arg1 ;
-(void)exportTypeChanged:(id)arg1 ;
-(void)startPortablePreferences:(id)arg1 ;
-(void)stopPortablePreferences:(id)arg1 ;
-(void)resetBasicPreferences:(id)arg1 ;
-(void)resetAllPreferences:(id)arg1 ;
-(void)resetTouchPreferences:(id)arg1 ;
-(void)resetBraillePreferences:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)application:(id)arg1 openFile:(id)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)showHelp:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)export:(id)arg1 ;
-(void)import:(id)arg1 ;
@end

