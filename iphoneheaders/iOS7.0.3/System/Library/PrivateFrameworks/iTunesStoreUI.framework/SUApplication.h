/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIColor;

@interface SUApplication : UIApplication <UIApplicationDelegate> {

	BOOL _terminateOnNextSuspend;
	UIWindow* _window;
	UIColor* _interactionTintColor;

}

@property (nonatomic,copy) UIColor * interactionTintColor;              //@synthesize interactionTintColor=_interactionTintColor - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
-(void)dealloc;
-(id)init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(double)defaultImageSnapshotExpiration;
-(BOOL)applicationSuspend:(GSEventRef)arg1 settings:(id)arg2 ;
-(void)setInteractionTintColor:(id)arg1 ;
-(id)interactionTintColor;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_storeEnabledChangeNotification:(id)arg1 ;
-(void)_teardownUI;
-(void)_setupUI;
-(void)_exitIfStoreNotAvailable;
-(void)_exitForStoreNotAvailable;
-(void)_runScriptTestWithOptions:(id)arg1 ;
-(void)runTestInvocation:(id)arg1 ;
@end
