/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/Time Machine System Restore.app/Contents/MacOS/Time Machine System Restore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Time Machine System Restore/OSIDiskOutlineViewBase.h>
#import <Time Machine System Restore/SKManagerListener.h>

@class TMBonjourBrowser, NSMutableArray, NSString;

@interface OSIRestoreSourceOutlineView : OSIDiskOutlineViewBase <SKManagerListener> {

	SEL _diskInclusionSelector;
	id _functionContextInfo;
	char _registeredForNotifications;
	char _diskListRefreshIsScheduled;
	TMBonjourBrowser* _TMBonjourBrowser;
	NSMutableArray* _mountedFileServerDisks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disksChanged:(id)arg1 ;
-(void)disksAppeared:(id)arg1 ;
-(void)disksDisappeared:(id)arg1 ;
-(void)_refreshDiskList;
-(void)_executeDiskListRefresh;
-(void)refreshDiskList:(id)arg1 ;
-(void)refreshDiskListDispatcher:(id)arg1 ;
-(void)_registerForDiskNotifications;
-(void)_deregisterForDiskNotifications;
-(void)rebuildList;
-(id)itemsNotSetYetString;
-(id)noItemsString;
-(void)populateWithInclusionFunction:(SEL)arg1 functionContextInfo:(id)arg2 ;
-(void)addMountedFileServerDisk:(id)arg1 ;
-(void)dealloc;
-(void)viewWillMoveToWindow:(id)arg1 ;
@end

