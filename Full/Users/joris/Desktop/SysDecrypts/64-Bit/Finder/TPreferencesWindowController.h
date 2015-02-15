/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/TScriptableWindowController.h>

@class NSToolbar, TGeneralPaneController, TTagsPaneController, TSidebarPaneController, TAdvancedPaneController;

@interface TPreferencesWindowController : TScriptableWindowController {

	NSToolbar* _toolbar;
	TGeneralPaneController* _generalPaneController;
	TTagsPaneController* _tagsPaneController;
	TSidebarPaneController* _sidebarPaneController;
	TAdvancedPaneController* _advancedPaneController;
	long long _currentPane;
	double _toolbarOffset;

}
+(id)preferencesWindow;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)show;
+(id)instance;
-(unsigned)finderScriptingModelKind;
-(int)pane;
-(void)setPane:(int)arg1 ;
-(void)configureToolbar;
-(long long)indexForPaneType:(int)arg1 ;
-(id)currentPaneController;
-(void)selectPaneAtIndex:(long long)arg1 ;
-(int)paneTypeForIndex:(long long)arg1 ;
-(id)controllerForPaneAtIndex:(long long)arg1 ;
-(void)general:(id)arg1 ;
-(void)sidebar:(id)arg1 ;
-(void)advanced:(id)arg1 ;
-(void)tags:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)windowDidResignMain:(id)arg1 ;
-(void)windowDidLoad;
@end
