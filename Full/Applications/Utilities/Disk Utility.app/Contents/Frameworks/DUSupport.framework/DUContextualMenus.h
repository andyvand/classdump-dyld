/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:06:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Disk Utility.app/Contents/Frameworks/DUSupport.framework/DUSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DUModuleManager, NSMenu;

@interface DUContextualMenus : NSObject {

	DUModuleManager* firstModuleManager;
	NSMenu* dockMenu;
	char runningFromInstallMedia;

}
+(id)sharedContextualMenus;
-(id)createMenuItem:(id)arg1 withTarget:(id)arg2 withObject:(id)arg3 withAction:(SEL)arg4 ;
-(id)generalContextualMenus:(id)arg1 inWindow:(id)arg2 ;
-(id)concatNSMenus:(id)arg1 withMenuItems:(id)arg2 ;
-(id)diskImagesContextualMenus:(id)arg1 inWindow:(id)arg2 ;
-(id)individualModuleContextualMenus:(id)arg1 inWindow:(id)arg2 ;
-(id)debugContextualMenus:(id)arg1 inWindow:(id)arg2 ;
-(void)setModuleManager:(id)arg1 ;
-(id)contextualMenuForDisk:(id)arg1 inWindow:(id)arg2 ;
-(id)dockMenu;
-(id)activeModule:(id)arg1 ;
-(id)diskFeaturesContextualMenus:(id)arg1 inWindow:(id)arg2 ;
-(id)singleModuleContextualMenus:(id)arg1 inWindow:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
