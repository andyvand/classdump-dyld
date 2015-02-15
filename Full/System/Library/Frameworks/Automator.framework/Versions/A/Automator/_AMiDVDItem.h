/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSDictionary;

@interface _AMiDVDItem : SBObject

@property (copy) NSDictionary * properties; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveAs:(id)arg1 in:(id)arg2 ;
-(long long)addMovieForMagicIDVDWithPath:(id)arg1 ;
-(long long)addSlideshowForMagicIDVDAndImagePaths:(id)arg1 withName:(id)arg2 andAudioPaths:(id)arg3 ;
-(long long)archiveProjectPath:(id)arg1 encodedAssets:(char)arg2 themes:(char)arg3 ;
-(long long)automaticallyFillDropZonesInCurrentMenu;
-(long long)closeTrayOfBurner:(id)arg1 lockDevice:(char)arg2 ;
-(long long)createMagicIDVD;
-(long long)newProjectName:(id)arg1 path:(id)arg2 saveCurrent:(char)arg3 ;
-(long long)openProjectPath:(id)arg1 ;
-(long long)openTrayOfBurner:(id)arg1 ;
-(long long)saveProjectPath:(id)arg1 ;
-(long long)showObjectWithName:(id)arg1 ;
-(long long)startBurnWithBurner:(id)arg1 eraseRewritable:(char)arg2 ;
-(long long)startDiscImageBurnPath:(id)arg1 ;
-(long long)startMagicIDVDTheme:(id)arg1 title:(id)arg2 ;
-(long long)startVideo_tsFolderBurnPath:(id)arg1 ;
-(long long)unlockBurningDevice:(id)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)quit;
-(char)exists;
-(NSDictionary *)properties;
@end

