/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/Active Directory.daplug/Contents/MacOS/Active Directory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DirectoryUtilityPlugin
@optional
-(char)selfTest;
-(id)pluginName;
-(char)isEnabledForLocation:(id)arg1;
-(void)setPluginAPIImplementor:(id)arg1;
-(void)setEnabled:(char)arg1 forLocation:(id)arg2;
-(char)shouldAllowNodeNameOnSearchPolicy:(id)arg1;
-(char)applicationWillQuitSavingChanges:(char)arg1;
-(char)applicationWillLockSavingChanges:(char)arg1;
-(char)canSetEnabledForLocation:(id)arg1;
-(void)configureButtonClicked:(id)arg1;
-(char)revertChanges;
-(char)canConfigure;
-(char)isDirty;
-(char)saveChanges;

@end

