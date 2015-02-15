/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSApplication.h>
#import <Font Book/FBScriptableObject.h>
#import <Font Book/NSApplicationDelegate.h>

@class FBUIController, NSDictionary, NSRecursiveLock, NSArray, NSString;

@interface FBApplication : NSApplication <FBScriptableObject, NSApplicationDelegate> {

	FBUIController* uiController;
	NSDictionary* defaultsDictionary;
	NSRecursiveLock* lock;
	char abortAllOperations;
	char modelIsInitialized;
	NSArray* _filesToOpen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)abortAllOperations;
+(char)inFullScreenMode;
+(id)exportFaces:(id)arg1 to:(id)arg2 ;
-(void)modelDidInitialize;
-(char)_abortAllOperations;
-(void)openMainWindow:(id)arg1 ;
-(void)_shouldTerminateApplicationTimer:(id)arg1 ;
-(char)didAlreadyOpenWindow;
-(void)showAboutBox:(id)arg1 ;
-(id)appleScriptName;
-(id)appleScriptLocalizedName;
-(id)appleScriptContainers;
-(id)applescriptDescription;
-(id)appleScriptFaces;
-(id)appleScriptFamilies;
-(id)appleScriptDomains;
-(void)updatePreferences;
-(id)appleScriptCollections;
-(id)appleScriptModel;
-(id)appleScriptLibraries;
-(id)appleScriptSelection;
-(id)appleScriptSelectedFamilies;
-(id)appleScriptSelectedCollections;
-(void)setAppleScriptSelection:(id)arg1 ;
-(void)setAppleScriptSelectedFamilies:(id)arg1 ;
-(void)setAppleScriptSelectedCollections:(id)arg1 ;
-(char)appleScriptValidateFontsBeforeInstalling;
-(void)setAppleScriptValidateFontsBeforeInstalling:(char)arg1 ;
-(id)appleScriptInstallFontDestination;
-(void)setAppleScriptInstallFontDestination:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidResignActive:(id)arg1 ;
-(id)defaultsDictionary;
-(id)uiController;
-(id)init;
-(void)dealloc;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(char)applicationShouldOpenUntitledFile:(id)arg1 ;
-(unsigned long long)applicationShouldTerminate:(id)arg1 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)insertValue:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(char)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(char)arg2 ;
-(void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3 ;
-(char)applicationShouldTerminateAfterLastWindowClosed:(id)arg1 ;
@end
