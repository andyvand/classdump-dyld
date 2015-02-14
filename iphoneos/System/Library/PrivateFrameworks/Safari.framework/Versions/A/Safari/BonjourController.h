/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/BookmarkSource.h>
#import <Safari/NSNetServiceDelegate.h>

@class BonjourServiceCollector, NSMutableArray, WebBookmark, NSImage, NSNetService, NSString;

@interface BonjourController : BookmarkSource <NSNetServiceDelegate> {

	BonjourServiceCollector* _httpCollector;
	BonjourServiceCollector* _lprPrinterCollector;
	BonjourServiceCollector* _httpPrinterPageCollector;
	NSMutableArray* _printerPageServices;
	NSMutableArray* _uncategorizedServices;
	NSMutableArray* _orderedNonEmptyCategories;
	WebBookmark* _aboutBonjourBookmark;
	NSImage* _bonjourIcon;
	NSNetService* _serviceToVisit;
	long long _windowPolicyForServiceToVisit;
	TabPlacementHint* _tabPlacementHintForServiceToVisit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBonjourController;
-(void)_reportErrorForServiceName:(id)arg1 ;
-(void)_setServiceToVisit:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 ;
-(BrowserContentViewController*)_goToURL:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 ;
-(void)_updateInterface;
-(char)_multipleNonEmptyCategories;
-(void)_setInitiallyCollapsed:(char)arg1 forCategory:(id)arg2 ;
-(id)_keyForCollapsedPreferenceForCategory:(id)arg1 ;
-(id)contentItemsToInitiallyExpand;
-(void)_goToContentItem:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 ;
-(id)_titleForCategory:(id)arg1 ;
-(id)_nameToDisplayForService:(id)arg1 ;
-(char)_addServicesFromCategory:(id)arg1 toMenu:(id)arg2 ;
-(id)imageForContentItem:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)bonjourServiceCollector:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)bonjourServiceCollector:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3 ;
-(char)canCopyContents;
-(id)child:(unsigned)arg1 ofContentItem:(id)arg2 ;
-(void)didCollapseContentItem:(id)arg1 ;
-(void)didExpandContentItem:(id)arg1 ;
-(char)contentItemCanHaveChildren:(id)arg1 ;
-(id)contentItemsToExpandOnReload;
-(unsigned)numberOfChildrenOfContentItem:(id)arg1 ;
-(id)bookmarkFromContentItem:(id)arg1 ;
-(void)goToContentItem:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 ;
-(void)goToContentItemInNewWindow:(id)arg1 ;
-(void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 ;
-(id)titleStringForContentItem:(id)arg1 ;
-(id)bookmarkSourceMenuTitle;
-(id)bookmarkSourceImage;
-(void)_serviceMenuItemSelected:(id)arg1 ;
-(void)_setTabPlacementHintForServiceToVisit:(const TabPlacementHint*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)menuNeedsUpdate:(id)arg1 ;
@end

