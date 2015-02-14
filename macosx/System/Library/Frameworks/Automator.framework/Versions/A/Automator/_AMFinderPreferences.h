/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class _AMFinderPreferencesWindow, _AMFinderIconViewOptions, _AMFinderListViewOptions, _AMFinderColumnViewOptions, SBObject;

@interface _AMFinderPreferences : SBObject

@property (copy,readonly) _AMFinderPreferencesWindow * window; 
@property (copy,readonly) _AMFinderIconViewOptions * iconViewOptions; 
@property (copy,readonly) _AMFinderListViewOptions * listViewOptions; 
@property (copy,readonly) _AMFinderColumnViewOptions * columnViewOptions; 
@property (assign) char foldersSpringOpen; 
@property (assign) double delayBeforeSpringing; 
@property (assign) char desktopShowsHardDisks; 
@property (assign) char desktopShowsExternalHardDisks; 
@property (assign) char desktopShowsRemovableMedia; 
@property (assign) char desktopShowsConnectedServers; 
@property (copy) SBObject * newWindowTarget; 
@property (assign) char foldersOpenInNewWindows; 
@property (assign) char newWindowsOpenInColumnView; 
@property (assign) char allNameExtensionsShowing; 
-(id)delete;
-(void)emptySecurity:(char)arg1 ;
-(void)openUsing:(id)arg1 withProperties:(id)arg2 ;
-(void)printWithProperties:(id)arg1 ;
-(long long)dataSizeAs:(id)arg1 ;
-(id)duplicateTo:(id)arg1 replacing:(char)arg2 routingSuppressed:(char)arg3 ;
-(id)moveTo:(id)arg1 replacing:(char)arg2 positionedAt:(id)arg3 routingSuppressed:(char)arg4 ;
-(void)updateNecessity:(char)arg1 registeringApplications:(char)arg2 ;
-(_AMFinderIconViewOptions *)iconViewOptions;
-(_AMFinderListViewOptions *)listViewOptions;
-(_AMFinderColumnViewOptions *)columnViewOptions;
-(char)foldersSpringOpen;
-(void)setFoldersSpringOpen:(char)arg1 ;
-(double)delayBeforeSpringing;
-(void)setDelayBeforeSpringing:(double)arg1 ;
-(char)desktopShowsHardDisks;
-(void)setDesktopShowsHardDisks:(char)arg1 ;
-(char)desktopShowsExternalHardDisks;
-(void)setDesktopShowsExternalHardDisks:(char)arg1 ;
-(char)desktopShowsRemovableMedia;
-(void)setDesktopShowsRemovableMedia:(char)arg1 ;
-(char)desktopShowsConnectedServers;
-(void)setDesktopShowsConnectedServers:(char)arg1 ;
-(SBObject *)newWindowTarget;
-(void)setNewWindowTarget:(SBObject *)arg1 ;
-(char)foldersOpenInNewWindows;
-(void)setFoldersOpenInNewWindows:(char)arg1 ;
-(char)newWindowsOpenInColumnView;
-(void)setNewWindowsOpenInColumnView:(char)arg1 ;
-(char)allNameExtensionsShowing;
-(void)setAllNameExtensionsShowing:(char)arg1 ;
-(void)reveal;
-(void)select;
-(char)exists;
-(_AMFinderPreferencesWindow *)window;
-(void)activate;
-(void)close;
-(void)eject;
-(void)erase;
@end

