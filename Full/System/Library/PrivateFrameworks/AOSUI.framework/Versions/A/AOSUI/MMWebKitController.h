/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MMWebKitControllerDelegate;
#import <AOSUI/AOSUI-Structs.h>
@class WebPreferences, WebView;

@interface MMWebKitController : NSObject {

	id<MMWebKitControllerDelegate> _delegate;
	WebPreferences* _webPreferences;
	WebView* _webView;
	struct {
		unsigned webViewSetFrame : 1;
		unsigned delegateConfigureForFrame : 1;
		unsigned delegateDidCreateJavaScriptContextFrame : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidSucceed : 1;
		unsigned delegateDidFailLoading : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned padding : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic) id<MMWebKitControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WebView * webView;                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) WebPreferences * webPreferences;                      //@synthesize webPreferences=_webPreferences - In the implementation block
-(WebView *)webView;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)setWebView:(WebView *)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)reload;
-(id)initInView:(id)arg1 ;
-(void)loadURLRequest:(id)arg1 ;
-(id)webViewURL;
-(void)loadHTMLString:(id)arg1 withParentURL:(id)arg2 ;
-(void)loadHTMLString:(id)arg1 ;
-(void)setWebPreferences:(WebPreferences *)arg1 ;
-(WebPreferences *)webPreferences;
-(void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2 ;
-(unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(void)setDelegate:(id<MMWebKitControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MMWebKitControllerDelegate>)delegate;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
@end

