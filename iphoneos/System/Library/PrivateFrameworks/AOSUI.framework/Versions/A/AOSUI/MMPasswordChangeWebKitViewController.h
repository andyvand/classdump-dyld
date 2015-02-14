/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AOSUI/ICAWebKitViewControllerDelegate.h>
#import <AOSUI/ICAUIDelegate.h>
#import <AOSUI/MMWebViewButtonBarDelegate.h>

@class MMICAWebKitViewController, NSWindow, NSView, NSProgressIndicator, NSButton, MMWebViewButtonBar, NSLayoutConstraint, NSString;

@interface MMPasswordChangeWebKitViewController : NSObject <ICAWebKitViewControllerDelegate, ICAUIDelegate, MMWebViewButtonBarDelegate> {

	char _isButtonBarShown;
	char _isResizeAvailible;
	MMICAWebKitViewController* _icaWebKitVC;
	/*^block*/id _passwordChangeCompletionHandler;
	NSWindow* _parentWindow;
	NSWindow* _window;
	NSView* _windowContentView;
	NSProgressIndicator* _loadingProgress;
	NSView* _loadingView;
	NSButton* _loadingCancelButton;
	NSView* _webViewContentView;
	NSView* _webView;
	NSView* _buttonBarContainer;
	MMWebViewButtonBar* _buttonBar;
	NSLayoutConstraint* _buttonBarHeight;
	CGSize _contentSize;

}

@property (nonatomic,retain) MMICAWebKitViewController * icaWebKitVC;              //@synthesize icaWebKitVC=_icaWebKitVC - In the implementation block
@property (nonatomic,copy) id passwordChangeCompletionHandler;                     //@synthesize passwordChangeCompletionHandler=_passwordChangeCompletionHandler - In the implementation block
@property (nonatomic,retain) NSWindow * parentWindow;                              //@synthesize parentWindow=_parentWindow - In the implementation block
@property (nonatomic,retain) NSWindow * window;                                    //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSView * windowContentView;                           //@synthesize windowContentView=_windowContentView - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * loadingProgress;                //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,retain) NSView * loadingView;                                 //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) NSButton * loadingCancelButton;                       //@synthesize loadingCancelButton=_loadingCancelButton - In the implementation block
@property (nonatomic,retain) NSView * webViewContentView;                          //@synthesize webViewContentView=_webViewContentView - In the implementation block
@property (nonatomic,retain) NSView * webView;                                     //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSView * buttonBarContainer;                          //@synthesize buttonBarContainer=_buttonBarContainer - In the implementation block
@property (nonatomic,retain) MMWebViewButtonBar * buttonBar;                       //@synthesize buttonBar=_buttonBar - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonBarHeight;                 //@synthesize buttonBarHeight=_buttonBarHeight - In the implementation block
@property (assign) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign) char isButtonBarShown;                                          //@synthesize isButtonBarShown=_isButtonBarShown - In the implementation block
@property (assign) char isResizeAvailible;                                         //@synthesize isResizeAvailible=_isResizeAvailible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSView *)webView;
-(NSProgressIndicator *)loadingProgress;
-(void)setWebView:(NSView *)arg1 ;
-(void)icaWebKitViewControllerSheetDidEnd:(id)arg1 withData:(id)arg2 ;
-(void)icaWebKitViewControllerDidFinishLoading:(id)arg1 ;
-(void)icaWebKitViewControllerDidFail:(id)arg1 error:(id)arg2 ;
-(void)didChangePassword:(id)arg1 toNewPassword:(id)arg2 accountID:(id)arg3 ;
-(id)webViewWindow;
-(void)icaSetButtonBar:(id)arg1 ;
-(void)icaWebKitViewIsAvailable;
-(void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3 ;
-(void)exitWebView:(id)arg1 ;
-(void)icaWebKitViewSwitchToLocation:(id)arg1 toSection:(id)arg2 ;
-(void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 ;
-(void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 ;
-(void)showNativeAddFamilyMember;
-(void)setPasswordChangeCompletionHandler:(id)arg1 ;
-(id)passwordChangeCompletionHandler;
-(void)_handleGSTokenUpdateError:(id)arg1 ;
-(void)showPasswordChangeSheet:(id)arg1 accountID:(id)arg2 ;
-(NSView *)loadingView;
-(NSButton *)loadingCancelButton;
-(NSView *)webViewContentView;
-(NSView *)buttonBarContainer;
-(id)urlRequestForPasswordChange:(id)arg1 error:(id*)arg2 ;
-(void)setIcaWebKitVC:(MMICAWebKitViewController *)arg1 ;
-(MMICAWebKitViewController *)icaWebKitVC;
-(void)endPasswordChangeSheet:(long long)arg1 ;
-(MMWebViewButtonBar *)buttonBar;
-(NSLayoutConstraint *)buttonBarHeight;
-(void)setButtonBar:(MMWebViewButtonBar *)arg1 ;
-(void)setIsResizeAvailible:(char)arg1 ;
-(void)_addButtonBarView:(id)arg1 ;
-(char)isResizeAvailible;
-(char)isButtonBarShowing;
-(void)resizeWindow:(id)arg1 toWidth:(unsigned long long)arg2 heigth:(unsigned long long)arg3 ;
-(char)isWebViewShowing;
-(void)button1Pressed:(id)arg1 ;
-(void)button2Pressed:(id)arg1 ;
-(void)button3Pressed:(id)arg1 ;
-(void)runPasswordChangeSheetForWindow:(id)arg1 accountID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelPasswordChangeWindow:(id)arg1 ;
-(NSView *)windowContentView;
-(void)setWindowContentView:(NSView *)arg1 ;
-(void)setLoadingProgress:(NSProgressIndicator *)arg1 ;
-(void)setLoadingView:(NSView *)arg1 ;
-(void)setLoadingCancelButton:(NSButton *)arg1 ;
-(void)setWebViewContentView:(NSView *)arg1 ;
-(void)setButtonBarContainer:(NSView *)arg1 ;
-(void)setButtonBarHeight:(NSLayoutConstraint *)arg1 ;
-(char)isButtonBarShown;
-(void)setIsButtonBarShown:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(NSWindow *)window;
-(void)setContentSize:(CGSize)arg1 ;
-(NSWindow *)parentWindow;
-(void)endSheet:(id)arg1 ;
-(CGSize)contentSize;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
@end

