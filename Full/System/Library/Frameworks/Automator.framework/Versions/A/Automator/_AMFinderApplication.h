/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class _AMFinderFile, SBObject, NSString, _AMFinderDisk, _AMFinderDesktopObject, _AMFinderTrashObject, _AMFinderFolder, _AMFinderComputerObject, _AMFinderPreferences;

@interface _AMFinderApplication : SBApplication

@property (copy) _AMFinderFile * desktopPicture; 
@property (copy,readonly) SBObject * clipboard; 
@property (copy,readonly) NSString * name; 
@property (assign) char visible; 
@property (assign) char frontmost; 
@property (copy) SBObject * selection; 
@property (copy,readonly) SBObject * insertionLocation; 
@property (copy,readonly) NSString * productVersion; 
@property (copy,readonly) NSString * version; 
@property (copy,readonly) _AMFinderDisk * startupDisk; 
@property (copy,readonly) _AMFinderDesktopObject * desktop; 
@property (copy,readonly) _AMFinderTrashObject * trash; 
@property (copy,readonly) _AMFinderFolder * home; 
@property (copy,readonly) _AMFinderComputerObject * computerContainer; 
@property (copy,readonly) _AMFinderPreferences * FinderPreferences; 
+(id)application;
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(char)frontmost;
-(void)setFrontmost:(char)arg1 ;
-(id)disks;
-(id)folders;
-(id)aliasFiles;
-(id)applicationFiles;
-(id)documentFiles;
-(id)internetLocationFiles;
-(id)clippings;
-(id)packages;
-(id)FinderWindows;
-(id)clippingWindows;
-(SBObject *)clipboard;
-(SBObject *)insertionLocation;
-(NSString *)productVersion;
-(_AMFinderDisk *)startupDisk;
-(_AMFinderDesktopObject *)desktop;
-(_AMFinderTrashObject *)trash;
-(_AMFinderFolder *)home;
-(_AMFinderComputerObject *)computerContainer;
-(_AMFinderPreferences *)FinderPreferences;
-(void)emptySecurity:(char)arg1 ;
-(void)restart;
-(void)shutDown;
-(_AMFinderFile *)desktopPicture;
-(void)setDesktopPicture:(_AMFinderFile *)arg1 ;
-(char)visible;
-(id)files;
-(void)quit;
-(void)setSelection:(SBObject *)arg1 ;
-(NSString *)name;
-(id)windows;
-(void)activate;
-(id)items;
-(void)setVisible:(char)arg1 ;
-(void)eject;
-(NSString *)version;
-(SBObject *)selection;
-(id)containers;
-(void)sleep;
@end

