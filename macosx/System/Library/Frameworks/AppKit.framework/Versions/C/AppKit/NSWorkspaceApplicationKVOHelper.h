/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSArray, NSMutableArray, NSLSNotificationHelper, NSLock;

@interface NSWorkspaceApplicationKVOHelper : NSObject {

	NSArray* staleAppsArray;
	NSMutableArray* propertyBackingArray;
	NSLSNotificationHelper* notificationHelper;
	NSLock* lock;
	void* notificationID;
	unsigned long long propertyIndex;

}
-(void)dealloc;
-(id)keyPath;
-(const WorkspaceKVOData_t*)data;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)indexOfApplicationWithASN:(LSASNRef)arg1 ;
-(void)addApplication:(LSASNRef)arg1 ;
-(void)removeApplication:(LSASNRef)arg1 ;
-(void)registerForApplicationNotifications;
-(void)unregisterForApplicationNotifications;
-(void)unobservedAppsPropertyBecameStale;
-(void)_installStalenessObserver;
-(void)noteAppBirth:(LSASNRef)arg1 appInfo:(id)arg2 ;
-(void)noteAppDeath:(LSASNRef)arg1 appInfo:(id)arg2 ;
-(void)noteAppTALChange:(LSASNRef)arg1 appInfo:(id)arg2 ;
-(void)noteIndividualAppChanged:(LSASNRef)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithKVOHelperIndex:(unsigned long long)arg1 ;
-(void)_unobservedApplicationPropertyBecameStale;
-(id)applications;
@end

