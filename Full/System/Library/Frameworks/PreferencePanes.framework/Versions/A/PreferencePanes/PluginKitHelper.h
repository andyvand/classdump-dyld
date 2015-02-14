/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <PreferencePanes/NSRemoteViewDelegate.h>
#import <PreferencePanes/PreferencePaneHostProtocol.h>

@class NSXPCInterface, NSWindow, NSString;

@interface PluginKitHelper : NSObject <NSRemoteViewDelegate, PreferencePaneHostProtocol> {

	NSXPCInterface* _interface;
	NSWindow* _sheet;
	NSWindow* _hostWindow;
	NSString* _pkIdentifier;
	id _result;

}
+(id)sharedHelper;
-(void)dismissPKSheetForPKIdentifier:(id)arg1 withReturnCode:(long long)arg2 result:(id)arg3 ;
-(void)_loadPluginKitFramework;
-(void)_thisIsNeverCalled;
-(void)presentPKSheetForPluginWithAttributes:(id)arg1 pkIdentifier:(id)arg2 serviceName:(id)arg3 serviceSubclassName:(id)arg4 forWindow:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)viewDidInvalidate:(id)arg1 ;
-(id)exportedInterface;
-(id)exportedObject;
@end

