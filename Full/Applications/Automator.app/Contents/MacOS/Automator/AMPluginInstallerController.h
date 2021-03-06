/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:21:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Automator.app/Contents/MacOS/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <Automator/NSAnimationDelegate.h>

@class NSButton, NSImageView, NSTextField, NSProgressIndicator, NSView, NSString, NSImage, NSViewController, NSTimer, NSViewAnimation, NSArray, NSURL;

@interface AMPluginInstallerController : NSWindowController <NSAnimationDelegate> {

	NSButton* secondButton;
	NSButton* firstButton;
	NSButton* thirdButton;
	NSButton* helpButton;
	NSImageView* iconView;
	NSImageView* successIconView;
	NSTextField* informativeTextField;
	NSTextField* messageTextField;
	NSProgressIndicator* progressIndicator;
	NSView* accessoryView;
	NSString* _pluginName;
	NSString* _messageText;
	NSString* _informativeText;
	NSImage* _icon;
	int _mode;
	NSViewController* _accessoryViewController;
	NSTimer* _installTimer;
	NSViewAnimation* _animation;
	NSArray* _queuedAnimations;
	NSURL* _installedPluginURL;

}

@property (copy) NSString * messageText;                                    //@synthesize messageText=_messageText - In the implementation block
@property (copy) NSString * informativeText;                                //@synthesize informativeText=_informativeText - In the implementation block
@property (retain) NSImage * icon;                                          //@synthesize icon=_icon - In the implementation block
@property (retain) NSViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (retain) NSViewAnimation * animation;                             //@synthesize animation=_animation - In the implementation block
@property (retain) NSString * pluginName;                                   //@synthesize pluginName=_pluginName - In the implementation block
@property (retain) NSArray * queuedAnimations;                              //@synthesize queuedAnimations=_queuedAnimations - In the implementation block
@property (assign) int mode;                                                //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlForExistingPluginNamed:(id)arg1 atLibrarySubPath:(id)arg2 ;
-(id)_pluginURL;
-(id)_localizedNameForURL:(id)arg1 ;
-(void)setPluginName:(NSString *)arg1 ;
-(void)_configureRequestMode;
-(id)_unlocalizedPluginTypeNameComponent;
-(NSString *)pluginName;
-(id)_installationInfoString;
-(char)_pluginIsInstallableReturningError:(id*)arg1 ;
-(void)_installPlugin;
-(id)_pluginTypeName;
-(char)_shouldShowThirdButton;
-(id)_installMessageDictionary;
-(id)_accessoryViewNibName;
-(void)setAccessoryViewController:(NSViewController *)arg1 ;
-(NSViewController *)accessoryViewController;
-(void)_layoutWindowWithProgressIndicator:(char)arg1 infoField:(char)arg2 accessoryView:(char)arg3 animate:(char)arg4 ;
-(id)_replaceMessageDictionary;
-(void)_queueAnimations:(id)arg1 ;
-(void)_installTimerFired:(id)arg1 ;
-(id)_completedInstallationInfoString;
-(id)_pluginLibrarySubPath;
-(id)_writeableInstalledPluginLocationURL;
-(void)_configureCompletedModeWithError:(id)arg1 ;
-(id)_targetPluginLocationURLCreatingIfNecessaryError:(id*)arg1 ;
-(char)_pluginAlreadyInstalled;
-(void)_configureInstallationMode;
-(void)_configureReplaceMode;
-(char)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)arg1 error:(id*)arg2 ;
-(void)setQueuedAnimations:(NSArray *)arg1 ;
-(id)_animationWithAnimations:(id)arg1 ;
-(NSArray *)queuedAnimations;
-(void)setAnimation:(NSViewAnimation *)arg1 ;
-(void)buttonClicked:(id)arg1 ;
-(void)dealloc;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(NSString *)informativeText;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(void)animationDidEnd:(id)arg1 ;
-(id)_iconImage;
-(int)run;
-(void)showHelp:(id)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(NSViewAnimation *)animation;
-(id)initWithWindowNibName:(id)arg1 ;
@end

