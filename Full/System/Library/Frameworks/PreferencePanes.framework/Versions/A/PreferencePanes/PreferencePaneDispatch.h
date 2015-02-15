/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePaneProtocol.h>

@class NSPreferencePane, NSXPCConnection;

@interface PreferencePaneDispatch : NSObject <PreferencePaneProtocol> {

	NSPreferencePane* _prefPaneObject;
	/*^block*/id _replyToShouldUnselectBlock;
	NSXPCConnection* _connection;

}

@property (retain) NSPreferencePane * prefPaneObject;              //@synthesize prefPaneObject=_prefPaneObject - In the implementation block
@property (retain) NSXPCConnection * connection; 
+(id)sharedDispatch;
-(void)presentPKSheetForPluginWithAttributes:(id)arg1 pkIdentifier:(id)arg2 serviceName:(id)arg3 serviceSubclassName:(id)arg4 completion:(/*^block*/id)arg5 ;
-(oneway void)willBecomeActive;
-(oneway void)replyToShouldUnselect:(/*^block*/id)arg1 ;
-(oneway void)willUnhide;
-(oneway void)didUnhide;
-(oneway void)willResignActive;
-(oneway void)didResignActive;
-(oneway void)revealElementForKey:(id)arg1 ;
-(oneway void)openDocumentAtPath:(id)arg1 ;
-(NSPreferencePane *)prefPaneObject;
-(oneway void)authorize;
-(oneway void)willSelectWithReply:(/*^block*/id)arg1 ;
-(oneway void)shouldUnselect:(/*^block*/id)arg1 ;
-(oneway void)getHelpMenuItems:(/*^block*/id)arg1 ;
-(oneway void)handleOpenAEData:(id)arg1 ;
-(void)setPrefPaneObject:(NSPreferencePane *)arg1 ;
-(void)_finishPaneSwitchNotification:(id)arg1 ;
-(void)_cancelPaneSwitchNotification:(id)arg1 ;
-(void)_switchToPaneNotification:(id)arg1 ;
-(void)_suddenTerminationStateShouldChangeNotification:(id)arg1 ;
-(void)authorizationViewWillShowAgent;
-(void)authorizationViewDidDismissAgent;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(oneway void)willHide;
-(oneway void)didSelect;
-(oneway void)didUnselect;
-(oneway void)willSelect;
-(oneway void)willUnselect;
-(oneway void)didBecomeActive;
-(id)init;
-(oneway void)didHide;
@end

