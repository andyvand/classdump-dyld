/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunes/iTunes-Structs.h>
#import <iTunes/NSApplicationDelegate.h>
#import <iTunes/NSMenuDelegate.h>

@class NSString;

@interface AppDelegateShim : NSObject <NSApplicationDelegate, NSMenuDelegate> {

	ITMacApplication* _application;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleScrollerStyleChanged:(id)arg1 ;
-(void)handleControlTintChanged:(id)arg1 ;
-(void)screenSaverActivated:(id)arg1 ;
-(void)screenSaverDeactivated:(id)arg1 ;
-(void)screenLocked:(id)arg1 ;
-(void)screenUnlocked:(id)arg1 ;
-(void)handleSidebarIconSizeChanged:(id)arg1 ;
-(void)setITCocoaApplication:(ITMacApplication*)arg1 ;
-(void)userSessionActivated:(id)arg1 ;
-(void)userSessionDeactivated:(id)arg1 ;
-(void)applicationDidLaunch:(id)arg1 ;
-(void)applicationDidTerminate:(id)arg1 ;
-(void)systemClockChanged:(id)arg1 ;
-(char)_menu:(id)arg1 hasEnabledMenuItemForCommand:(unsigned)arg2 ;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidHide:(id)arg1 ;
-(void)applicationDidUnhide:(id)arg1 ;
-(void)applicationDidResignActive:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidChangeScreenParameters:(id)arg1 ;
-(void)applicationDidChangeOcclusionState:(id)arg1 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(unsigned long long)applicationShouldTerminate:(id)arg1 ;
-(void)activeSpaceChanged:(id)arg1 ;
-(id)applicationDockMenu:(id)arg1 ;
-(char)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(char)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)menuWillOpen:(id)arg1 ;
-(void)menuDidClose:(id)arg1 ;
-(void)menu:(id)arg1 willHighlightItem:(id)arg2 ;
-(char)applicationShouldTerminateAfterLastWindowClosed:(id)arg1 ;
@end

