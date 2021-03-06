/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Home/lib/libglass.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libglass.dylib/libglass.dylib-Structs.h>
#import <libglass.dylib/NSApplicationDelegate.h>

@interface GlassApplication : NSObject <NSApplicationDelegate> {

	char started;
	jobjectRef jApplication;
	jobjectRef jLaunchable;
	unsigned char jTaskBarApp;
	long long jshareContextPtr;

}
+(void)leaveNestedEventLoopWithEnv:(const JNINativeInterface_*)arg1 retValue:(jobjectRef)arg2 ;
+(jobjectRef)enterNestedEventLoopWithEnv:(const JNINativeInterface_*)arg1 ;
+(char)syncRenderingDisabled;
+(int)getKeyCodeForChar:(unsigned short)arg1 ;
+(void)registerKeyEvent:(id)arg1 ;
+(void)enterFullScreenExitingLoop;
+(void)leaveFullScreenExitingLoopIfNeeded;
-(void)runLoop:(id)arg1 ;
-(id)initWithEnv:(const JNINativeInterface_*)arg1 application:(jobjectRef)arg2 launchable:(jobjectRef)arg3 taskbarApplication:(unsigned char)arg4 classLoader:(jobjectRef)arg5 ;
-(void)GlassApplicationDidChangeScreenParameters;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationWillHide:(id)arg1 ;
-(void)applicationDidHide:(id)arg1 ;
-(void)applicationWillUnhide:(id)arg1 ;
-(void)applicationDidUnhide:(id)arg1 ;
-(void)applicationWillBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidResignActive:(id)arg1 ;
-(char)application:(id)arg1 openFileWithoutUI:(id)arg2 ;
-(char)application:(id)arg1 openTempFile:(id)arg2 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(char)applicationShouldOpenUntitledFile:(id)arg1 ;
-(char)applicationOpenUntitledFile:(id)arg1 ;
-(unsigned long long)applicationShouldTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(char)started;
@end

