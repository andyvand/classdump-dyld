/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sparkle/SUWindowController.h>

@protocol SUVersionDisplay;
@class SUAppcastItem, SUHost, WebView, NSTextField, NSButton, NSProgressIndicator;

@interface SUUpdateAlert : SUWindowController {

	SUAppcastItem* updateItem;
	SUHost* host;
	id delegate;
	id<SUVersionDisplay> versionDisplayer;
	WebView* releaseNotesView;
	NSTextField* description;
	NSButton* installButton;
	NSButton* skipButton;
	NSButton* laterButton;
	NSProgressIndicator* releaseNotesSpinner;
	char webViewFinishedLoading;

}
-(void)openInfoURL:(id)arg1 ;
-(void)installUpdate:(id)arg1 ;
-(void)skipThisVersion:(id)arg1 ;
-(void)remindMeLater:(id)arg1 ;
-(char)showsReleaseNotesText;
-(void)endWithSelection:(int)arg1 ;
-(void)displayReleaseNotes;
-(void)setVersionDisplayer:(id)arg1 ;
-(char)allowsAutomaticUpdates;
-(char)showsReleaseNotes;
-(id)initWithAppcastItem:(id)arg1 host:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(id)descriptionText;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)awakeFromNib;
-(char)windowShouldClose:(id)arg1 ;
-(id)applicationIcon;
-(id)titleText;
@end

