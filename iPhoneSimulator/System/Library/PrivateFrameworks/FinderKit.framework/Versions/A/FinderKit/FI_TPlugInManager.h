/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TPlugInManager : NSObject
+(TIconRef*)sidebarIconForFolder:(const TFENode*)arg1 ;
+(void)synchronizeWithDiscoveredExtensions:(id)arg1 error:(id)arg2 ;
+(id)hostForExtensionUUID:(const TString*)arg1 ;
+(void)tearDownOneExtension:(id)arg1 ;
+(void)extensionIsReady:(id)arg1 ;
+(void)removeFromPendingExtensionUUIDs:(const TString*)arg1 ;
+(id)hostForExtension:(id)arg1 ;
+(void)openContainer:(const TFENode*)arg1 ;
+(void)setSwitchingViewStyles:(BOOL)arg1 ;
+(void)closeContainer:(const TFENode*)arg1 ;
+(void)computeMenuItemsForPlugIn:(id)arg1 target:(const TFENode*)arg2 selectedItems:(const TFENodeVector*)arg3 context:(unsigned long long)arg4 result:(/*^block*/id)arg5 ;
+(BOOL)plugIn:(id)arg1 managesNodes:(const TFENodeVector*)arg2 target:(const TFENode*)arg3 ;
+(id)menuItemImageFromData:(id)arg1 ;
+(void)initializePlugIns;
+(void)tearDownPlugIns;
+(id)toolbarItemIdentifiers;
+(id)hostForExtensionIdentifier:(const TString*)arg1 ;
+(id)badgeImageForNode:(const TFENode*)arg1 size:(double)arg2 ;
+(TString*)badgeLabelForNode:(const TFENode*)arg1 ;
+(void)getBadgeImage:(id*)arg1 label:(TString*)arg2 size:(double)arg3 forNode:(TFENode*)arg4 ;
+(void)computeMenuItemsForTarget:(const TFENode*)arg1 selectedItems:(const TFENodeVector*)arg2 context:(unsigned long long)arg3 result:(/*^block*/id)arg4 ;
@end

