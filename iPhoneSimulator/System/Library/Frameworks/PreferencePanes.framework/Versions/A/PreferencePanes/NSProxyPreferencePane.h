/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <PreferencePanes/NSPreferencePane.h>
#import <PreferencePanes/PreferencePaneHostProtocol.h>

@class NSString, NSXPCConnection, NSRemoteView;

@interface NSProxyPreferencePane : NSPreferencePane <PreferencePaneHostProtocol> {

	NSString* _remoteViewClass;
	NSString* _path;
	NSString* _bundleIdentifier;
	NSXPCConnection* _connection;
	NSRemoteView* _remoteView;

}

@property (retain) NSString * remoteViewClass;                  //@synthesize remoteViewClass=_remoteViewClass - In the implementation block
@property (retain) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection; 
@property (retain) NSRemoteView * remoteView;                   //@synthesize remoteView=_remoteView - In the implementation block
-(void)presentPKSheetForPluginWithAttributes:(id)arg1 pkIdentifier:(id)arg2 serviceName:(id)arg3 serviceSubclassName:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setSuddenTerminationEnabled:(char)arg1 ;
-(void)switchToPanel:(id)arg1 ;
-(void)switchToPanel:(id)arg1 anchor:(id)arg2 ;
-(void)willBecomeActive;
-(id)mainNibName;
-(void)assignMainView;
-(id)loadMainView;
-(int)shouldUnselect;
-(void)willUnhide;
-(void)didUnhide;
-(void)willResignActive;
-(void)didResignActive;
-(id)helpMenuItems;
-(void)handleOpenParameter:(const AEDesc*)arg1 ;
-(void)revealElementForKey:(id)arg1 ;
-(void)openDocumentAtPath:(id)arg1 ;
-(NSString *)remoteViewClass;
-(id)initWithPrefPaneBundle:(id)arg1 ;
-(void)authorize;
-(void)setRemoteViewClass:(NSString *)arg1 ;
-(void)willSelectWithReply:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setRemoteView:(NSRemoteView *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)willHide;
-(void)didSelect;
-(void)didUnselect;
-(void)willSelect;
-(void)willUnselect;
-(void)didBecomeActive;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(void)setPath:(NSString *)arg1 ;
-(NSRemoteView *)remoteView;
-(void)didHide;
@end

